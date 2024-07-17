#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QDebug>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , batterySerial(new QSerialPort(this))
    , batteryTimer(new QTimer(this))
    , maxExpectedPower(5000.0)
    , batteryDataBuffer()
    , r(445.0)
    , angleOffset(0.05)
    , laserActive(false)
    , autoMode(false)
    , previousAutoMode(false)
    , previousSliderState(true)
{
    ui->setupUi(this);

    // Load bg image (radar)
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    pix = QPixmap(":/src/radar.png");
    scene->addPixmap(pix);

    // Set up QSerialPort
    arduino = new QSerialPort;
    arduino_is_available = false;
    radarSerial = "COM9";

    // Initialize needle at 0 degrees
    QPen blackpen(Qt::black);
    QBrush graybrush(Qt::gray);
    t_up = angleOffset;
    t_lo = -angleOffset;
    triangle.append(QPointF(r * qCos(t_up) + 505, -r * qSin(t_up) + 495));
    triangle.append(QPointF(505, 495));
    triangle.append(QPointF(r * qCos(t_lo) + 505, -r * qSin(t_lo) + 495));
    needle = scene->addPolygon(triangle, blackpen, graybrush);
    needle->setOpacity(0.30);

    // Check which port the Arduino is on
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == arduino_uno_vendorID) {
                if (serialPortInfo.productIdentifier() == arduino_uno_productID) {
                    radarSerial = serialPortInfo.portName();
                    arduino_is_available = true;
                    qDebug() << "Port available!";
                }
            }
        }
    }

    // Setup port if available
    if (arduino_is_available) {
        arduino->setPortName(radarSerial);
        arduino->open(QSerialPort::ReadWrite);
        arduino->setBaudRate(QSerialPort::Baud115200);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readSerial()));
    } else {
        QMessageBox::warning(this, "Port error", "Couldn't find Arduino");
    }

    autoMode = false;  // Pastikan mode otomatis dinonaktifkan saat memulai
    ui->button_auto->setText("Start Auto");  // Set teks tombol ke "Start Auto"

    autoTimer = new QTimer(this);
    connect(autoTimer, &QTimer::timeout, this, &MainWindow::updateServoAuto);

    laserTimer = new QTimer(this);
    connect(laserTimer, &QTimer::timeout, this, &MainWindow::handleLaserActivation);

    // Connect signals and slots
    connect(ui->forwardButton, &QPushButton::pressed, this, &MainWindow::moveForward);
    connect(ui->backwardButton, &QPushButton::pressed, this, &MainWindow::moveBackward);
    connect(ui->leftButton, &QPushButton::pressed, this, &MainWindow::turnLeft);
    connect(ui->rightButton, &QPushButton::pressed, this, &MainWindow::turnRight);

    // Setup serial port
    serial = new QSerialPort(this);
    serial->setPortName("COM3");
    serial->setBaudRate(QSerialPort::Baud9600);
    if (serial->open(QIODevice::ReadWrite)) {
        connect(serial, &QSerialPort::readyRead, this, &MainWindow::updateSensorData);
    } else {
        qDebug() << "Failed to open main serial port.";
    }

    // Setup progress bar
    powerProgressBar = ui->persentase;
    powerProgressBar->setRange(0, 100);
    powerProgressBar->setValue(0);
    powerProgressBar->setTextVisible(true);
    powerProgressBar->setStyleSheet(
        "QProgressBar {"
        "   border: 2px solid grey;"
        "   border-radius: 5px;"
        "   text-align: center;"
        "}"
        "QProgressBar::chunk {"
        "   background-color: #05B8CC;"
        "   width: 20px;"
        "}"
        );

    // Setup battery serial port
    batterySerial->setPortName("COM9");
    batterySerial->setBaudRate(QSerialPort::Baud115200);
    batterySerial->setDataBits(QSerialPort::Data8);
    batterySerial->setParity(QSerialPort::NoParity);
    batterySerial->setStopBits(QSerialPort::OneStop);
    batterySerial->setFlowControl(QSerialPort::NoFlowControl);

    if (batterySerial->open(QIODevice::ReadOnly)) {
        connect(batterySerial, &QSerialPort::readyRead, this, &MainWindow::readBatteryData);
        qDebug() << "Battery serial port opened successfully.";
    } else {
        qDebug() << "Failed to open battery serial port.";
    }

    batteryTimer->start(2000);
}

void MainWindow::moveForward() {
    serial->write("FORWARD\n");
}

void MainWindow::moveBackward() {
    serial->write("BACKWARD\n");
}

void MainWindow::turnLeft() {
    serial->write("LEFT\n");
}

void MainWindow::turnRight() {
    serial->write("RIGHT\n");
}

void MainWindow::updateSensorData() {
    QByteArray data = serial->readAll();
    QList<QByteArray> sensorData = data.split(',');

    if (sensorData.size() >= 5) {
        ui->cameraLabel->setText(sensorData.at(0));
        ui->gpsLabel->setText(sensorData.at(2));
        ui->accelerometerLabel->setText(sensorData.at(3));
        ui->imuLabel->setText(sensorData.at(4));
        ui->speedLcd->display(sensorData.at(5).toInt());
    }
}

void MainWindow::readBatteryData() {
    QByteArray data = batterySerial->readAll();
    batteryDataBuffer.append(data);

    while (batteryDataBuffer.contains('\n')) {
        int lineEnd = batteryDataBuffer.indexOf('\n');
        QByteArray line = batteryDataBuffer.left(lineEnd);
        batteryDataBuffer = batteryDataBuffer.mid(lineEnd + 1);

        processBatteryData(QString::fromUtf8(line));
    }
}

void MainWindow::readSerial() {
    QByteArray data = arduino->readAll();
    serialBuffer.append(QString::fromUtf8(data));

    while (serialBuffer.contains('\n')) {
        int lineEnd = serialBuffer.indexOf('\n');
        QString line = serialBuffer.left(lineEnd).trimmed();
        serialBuffer = serialBuffer.mid(lineEnd + 1);

        if (line.startsWith("B,")) {
            processBatteryData(line);
        } else if (line.contains(',')) {
            processRadarData(line);
        } else if (line == "LASER_ACTIVATED") {
            handleLaserActivation();
        } else if (line == "LASER_DEACTIVATED") {
            resumeOperation();
        }
    }
}

void MainWindow::processRadarData(const QString &data) {
    QStringList parts = data.split(',');
    if (parts.size() == 2) {
        float angle = parts[0].toFloat();
        float distance = parts[1].toFloat();

        updateDetectionPoint(angle, distance);

        if (distance < 50 && !laserActive) {
            handleLaserActivation();
        }
    }
}

void MainWindow::processBatteryData(const QString &data) {
    QStringList parts = data.split(',');
    if (parts.size() == 6) {
        float busVoltage = parts[1].toFloat();
        float shuntVoltage = parts[2].toFloat();
        float loadVoltage = parts[3].toFloat();
        float current = parts[4].toFloat();
        float power = parts[5].toFloat();

        ui->busVoltageLabel->setText(QString::number(busVoltage, 'f', 2) + " V");
        ui->shuntVoltageLabel->setText(QString::number(shuntVoltage, 'f', 2) + " mV");
        ui->loadVoltageLabel->setText(QString::number(loadVoltage, 'f', 2) + " V");
        ui->currentLabel->setText(QString::number(current, 'f', 2) + " mA");
        ui->powerLabel->setText(QString::number(power, 'f', 2) + " mW");

        updateBatteryProgressBar(power);
        updateHistoricalData(busVoltage, shuntVoltage, loadVoltage, current, power);
    }
}


/* void MainWindow::processBatteryData(const QString &line) {
    QStringList parts = line.split(':');
    if (parts.size() == 2) {
        QString key = parts[0].trimmed();
        QString value = parts[1].trimmed();

        if (key == "Bus Voltage") {
            ui->busVoltageLabel->setText(value);
        } else if (key == "Shunt Voltage") {
            ui->shuntVoltageLabel->setText(value);
        } else if (key == "Load Voltage") {
            ui->loadVoltageLabel->setText(value);
        } else if (key == "Current") {
            ui->currentLabel->setText(value);
        } else if (key == "Power") {
            ui->powerLabel->setText(value);

            float power = value.split(' ')[0].toFloat();
            int percentage = qRound((power / maxExpectedPower) * 100);
            percentage = qMin(percentage, 100);
            powerProgressBar->setValue(percentage);
            powerProgressBar->setFormat(QString("%1% (%2mW / %3mW)").arg(percentage).arg(power, 0, 'f', 1).arg(maxExpectedPower, 0, 'f', 1));
        }
    }
} */

void MainWindow::updateBatteryProgressBar(float power) {
    int percentage = qRound((power / maxExpectedPower) * 100);
    percentage = qMin(percentage, 100);  // Memastikan persentase tidak melebihi 100%
    ui->persentase->setValue(percentage);
    ui->persentase->setFormat(QString("%1% (%2mW / %3mW)")
                                  .arg(percentage)
                                  .arg(power, 0, 'f', 1)
                                  .arg(maxExpectedPower, 0, 'f', 1));
}

void MainWindow::updateHistoricalData(float busVoltage, float shuntVoltage, float loadVoltage, float current, float power) {
    QDateTime currentTime = QDateTime::currentDateTime();
    QString timeString = currentTime.toString("hh:mm:ss");

    // Geser data lama ke bawah
    for (int i = 6; i > 0; i--) {
        QLayoutItem* item = ui->historicalDataLayout1_2->itemAt(i);
        if (item) {
            QLabel* label = qobject_cast<QLabel*>(item->widget());
            if (label) {
                QString text = label->text();
                QLayoutItem* nextItem = ui->historicalDataLayout2_2->itemAt(i);
                if (nextItem) {
                    QLabel* nextLabel = qobject_cast<QLabel*>(nextItem->widget());
                    if (nextLabel) {
                        nextLabel->setText(text);
                    }
                }
            }
        }
    }

    // Tambahkan data baru ke baris pertama
    ui->historicalTimeLabel1_2->setText(timeString);
    ui->historicalBusVoltageLabel1_2->setText(QString::number(busVoltage, 'f', 2) + " V");
    ui->historicalShuntVoltageLabel1_2->setText(QString::number(shuntVoltage, 'f', 2) + " mV");
    ui->historicalLoadVoltageLabel1_2->setText(QString::number(loadVoltage, 'f', 2) + " V");
    ui->historicalCurrentLabel1_2->setText(QString::number(current, 'f', 2) + " mA");
    ui->historicalPowerLabel1_2->setText(QString::number(power, 'f', 2) + " mW");
}

void MainWindow::setSliderEnabled(bool enabled) {
    ui->verticalSlider->setEnabled(enabled);
    for (QPushButton* button : {ui->button0, ui->button45, ui->button90, ui->button135, ui->button180}) {
        button->setEnabled(enabled);
    }
}

void MainWindow::handleLaserActivation() {
    laserActive = true;
    previousAutoMode = autoMode;
    previousSliderState = ui->verticalSlider->isEnabled();

    if (autoMode) {
        autoTimer->stop();
        autoMode = false;
    }

    setSliderEnabled(false);
    updateLaserStatus("Laser: On");
    arduino->write("LASER_ON\n");
    laserTimer->start(2000);
}

void MainWindow::resumeOperation() {
    laserActive = false;
    updateLaserStatus("Laser: Off");
    arduino->write("LASER_OFF\n");

    if (previousAutoMode) {
        autoMode = true;
        autoTimer->start(50);
        arduino->write("AUTO\n");
    } else {
        arduino->write("MANUAL\n");
    }

    setSliderEnabled(previousSliderState);

    if (autoMode) {
        ui->button_auto->setText("Stop Auto");
    } else {
        ui->button_auto->setText("Start Auto");
    }
}

void MainWindow::updateLaserStatus(const QString &status) {
    ui->textEdit->setPlainText(status);
}

void MainWindow::updateServo(QString command) {
    if (arduino->isWritable()) {
        arduino->write(command.toUtf8());
    } else {
        qDebug() << "Couldn't write to serial!";
    }
}

void MainWindow::updateServoAuto() {
    static int angle = 0;
    static bool increasing = true;
    static const int stepSize = 2;

    if (increasing) {
        angle += stepSize;
        if (angle >= 180) {
            angle = 180;
            increasing = false;
        }
    } else {
        angle -= stepSize;
        if (angle <= 0) {
            angle = 0;
            increasing = true;
        }
    }

    updateServo(QString::number(angle) + "\n");
    ui->verticalSlider->setValue(angle);
}

/*    updateServo(QString::number(angle) + "\n");
    ui->verticalSlider->setValue(angle);

    // Memperbarui sapuan radar
    float radAngle = qDegreesToRadians(static_cast<float>(angle));
    QPolygonF newTriangle;
    newTriangle.append(QPointF(r * qCos(radAngle + angleOffset) + 505, -r * qSin(radAngle + angleOffset) + 495));
    newTriangle.append(QPointF(505, 495));
    newTriangle.append(QPointF(r * qCos(radAngle - angleOffset) + 505, -r * qSin(radAngle - angleOffset) + 495));
    needle->setPolygon(newTriangle);
} */

void MainWindow::updateDetectionPoint(float angle, float distance) {
    qDebug() << "Updating detection point at angle:" << angle << "distance:" << distance;

    ui->angleLabel->setText(QString("%1°").arg(angle, 0, 'f', 1));
    ui->rangeLabel->setText(QString("%1 cm").arg(distance, 0, 'f', 1));

    float radAngle = qDegreesToRadians(angle);
    float x = distance * qCos(radAngle);
    float y = distance * qSin(radAngle);

    QGraphicsRectItem* point = scene->addRect(505 + x, 495 - y, 3, 3, QPen(Qt::red), QBrush(Qt::red));
    detectionPoints.append(point);

    float t_up = radAngle + angleOffset;
    float t_lo = radAngle - angleOffset;
    QPolygonF newTriangle;
    newTriangle.append(QPointF(r * qCos(t_up) + 505, -r * qSin(t_up) + 495));
    newTriangle.append(QPointF(505, 495));
    newTriangle.append(QPointF(r * qCos(t_lo) + 505, -r * qSin(t_lo) + 495));
    needle->setPolygon(newTriangle);

    clearOldDetectionPoints();
}

void MainWindow::clearOldDetectionPoints() {
    while (detectionPoints.size() > 50) {
        QGraphicsRectItem* point = detectionPoints.takeFirst();
        scene->removeItem(point);
        delete point;
    }
}

void MainWindow::on_button0_clicked() {
    if (!autoMode) {
        updateServo("0\n");
        ui->verticalSlider->setValue(0);
    }
}

void MainWindow::on_button45_clicked() {
    if (!autoMode) {
        updateServo("45\n");
        ui->verticalSlider->setValue(45);
    }
}

void MainWindow::on_button90_clicked() {
    if (!autoMode) {
        updateServo("90\n");
        ui->verticalSlider->setValue(90);
    }
}

void MainWindow::on_button135_clicked() {
    if (!autoMode) {
        updateServo("135\n");
        ui->verticalSlider->setValue(135);
    }
}

void MainWindow::on_button180_clicked() {
    if (!autoMode) {
        updateServo("180\n");
        ui->verticalSlider->setValue(180);
    }
}

void MainWindow::on_verticalSlider_valueChanged(int value) {
    if (!autoMode) {
        updateServo(QString::number(value) + "\n");
    }
}

void MainWindow::on_button_auto_clicked() {
    if (laserActive) {
        return;  // Mencegah perubahan mode saat laser aktif
    }

    autoMode = !autoMode;

    if (autoMode) {
        autoTimer->start(50);
        ui->button_auto->setText("Stop Auto");
        setSliderEnabled(false);
        arduino->write("AUTO\n");
    } else {
        autoTimer->stop();
        ui->button_auto->setText("Start Auto");
        setSliderEnabled(true);
        arduino->write("MANUAL\n");
    }
}

MainWindow::~MainWindow() {
    if (arduino->isOpen()) {
        arduino->close();
    }
    if (serial->isOpen()) {
        serial->close();
    }
    if (batterySerial->isOpen()) {
        batterySerial->close();
    }
    delete ui;
}
