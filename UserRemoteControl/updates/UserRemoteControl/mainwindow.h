#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QTimer>
#include <QLCDNumber>
#include <QProgressBar>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>
#include <QtGui>
#include <QtMath>
#include <QTableWidget>
#include <QFile>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void readBatteryData();
    void updateServo(QString command);
    void readSerial();
    void processRadarData(const QString &data);
    void processBatteryData(const QString &data);
    void processSensorPowerData(const QString &data);
    void updateBatteryProgressBar(float power);
    void updateHistoricalData();
    void on_button0_clicked();
    void on_button45_clicked();
    void on_button90_clicked();
    void on_button135_clicked();
    void on_button180_clicked();
    void on_verticalSlider_valueChanged(int value);
    void on_button_auto_clicked();
    void updateServoAuto();
    void clearOldDetectionPoints();
    void updateDetectionPoint(float angle, float distance);
    void handleLaserActivation();
    void deactivateLaser();
    void resumeOperation();
    void updateLaserStatus(const QString &status);
    void setSliderEnabled(bool enabled);
    void updateCurrentTime();
    void on_setBatteryCapacityButton_clicked();
    void updateRemainingOperationTime();
    void togglePowerSavingMode(bool enabled);
    void logData();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QSerialPort *batterySerial;
    QTimer *batteryTimer;
    QProgressBar *powerProgressBar;
    float maxExpectedPower;
    QByteArray batteryDataBuffer;
    QString serialBuffer;
    QStringList historicalData;
    QTimer *dataUpdateTimer;

    QGraphicsScene *scene;
    QPixmap pix;
    QGraphicsItem *rect;
    float currAngle;
    const float r;
    const float angleOffset;
    float t_up;
    float t_lo;
    QPolygonF triangle;
    QGraphicsPolygonItem* needle;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendorID = 9025;
    static const quint16 arduino_uno_productID = 67;
    QString radarSerial;
    bool arduino_is_available;
    QByteArray serialData;
    QString servoSetting;
    QList<QGraphicsRectItem*> detectionPoints;
    QTimer *autoTimer;
    bool laserActive;
    QTimer *laserTimer;
    QTimer *resumeTimer;
    bool autoMode;
    bool previousAutoMode;
    bool previousSliderState;

    float batteryCapacity;
    float totalPowerConsumption;
    bool powerSavingMode;
    QFile *logFile;
    QTextStream *logStream;

    void initializeSensorPowerTable();
    void updateSensorPowerTable(const QStringList &powerData);
};

#endif // MAINWINDOW_H
