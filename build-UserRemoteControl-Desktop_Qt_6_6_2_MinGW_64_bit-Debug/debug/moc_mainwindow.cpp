/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UserRemoteControl/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "moveForward",
    "",
    "moveBackward",
    "turnLeft",
    "turnRight",
    "updateSensorData",
    "readBatteryData",
    "updateServo",
    "command",
    "readSerial",
    "processRadarData",
    "data",
    "processBatteryData",
    "updateBatteryProgressBar",
    "power",
    "updateHistoricalData",
    "on_button0_clicked",
    "on_button45_clicked",
    "on_button90_clicked",
    "on_button135_clicked",
    "on_button180_clicked",
    "on_verticalSlider_valueChanged",
    "value",
    "on_button_auto_clicked",
    "updateServoAuto",
    "clearOldDetectionPoints",
    "updateDetectionPoint",
    "angle",
    "distance",
    "handleLaserActivation",
    "deactivateLaser",
    "resumeOperation",
    "updateLaserStatus",
    "status",
    "setSliderEnabled",
    "enabled",
    "updateCurrentTime"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[76];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[9];
    char stringdata5[10];
    char stringdata6[17];
    char stringdata7[16];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[11];
    char stringdata11[17];
    char stringdata12[5];
    char stringdata13[19];
    char stringdata14[25];
    char stringdata15[6];
    char stringdata16[21];
    char stringdata17[19];
    char stringdata18[20];
    char stringdata19[20];
    char stringdata20[21];
    char stringdata21[21];
    char stringdata22[31];
    char stringdata23[6];
    char stringdata24[23];
    char stringdata25[16];
    char stringdata26[24];
    char stringdata27[21];
    char stringdata28[6];
    char stringdata29[9];
    char stringdata30[22];
    char stringdata31[16];
    char stringdata32[16];
    char stringdata33[18];
    char stringdata34[7];
    char stringdata35[17];
    char stringdata36[8];
    char stringdata37[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 11),  // "moveForward"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "moveBackward"
        QT_MOC_LITERAL(37, 8),  // "turnLeft"
        QT_MOC_LITERAL(46, 9),  // "turnRight"
        QT_MOC_LITERAL(56, 16),  // "updateSensorData"
        QT_MOC_LITERAL(73, 15),  // "readBatteryData"
        QT_MOC_LITERAL(89, 11),  // "updateServo"
        QT_MOC_LITERAL(101, 7),  // "command"
        QT_MOC_LITERAL(109, 10),  // "readSerial"
        QT_MOC_LITERAL(120, 16),  // "processRadarData"
        QT_MOC_LITERAL(137, 4),  // "data"
        QT_MOC_LITERAL(142, 18),  // "processBatteryData"
        QT_MOC_LITERAL(161, 24),  // "updateBatteryProgressBar"
        QT_MOC_LITERAL(186, 5),  // "power"
        QT_MOC_LITERAL(192, 20),  // "updateHistoricalData"
        QT_MOC_LITERAL(213, 18),  // "on_button0_clicked"
        QT_MOC_LITERAL(232, 19),  // "on_button45_clicked"
        QT_MOC_LITERAL(252, 19),  // "on_button90_clicked"
        QT_MOC_LITERAL(272, 20),  // "on_button135_clicked"
        QT_MOC_LITERAL(293, 20),  // "on_button180_clicked"
        QT_MOC_LITERAL(314, 30),  // "on_verticalSlider_valueChanged"
        QT_MOC_LITERAL(345, 5),  // "value"
        QT_MOC_LITERAL(351, 22),  // "on_button_auto_clicked"
        QT_MOC_LITERAL(374, 15),  // "updateServoAuto"
        QT_MOC_LITERAL(390, 23),  // "clearOldDetectionPoints"
        QT_MOC_LITERAL(414, 20),  // "updateDetectionPoint"
        QT_MOC_LITERAL(435, 5),  // "angle"
        QT_MOC_LITERAL(441, 8),  // "distance"
        QT_MOC_LITERAL(450, 21),  // "handleLaserActivation"
        QT_MOC_LITERAL(472, 15),  // "deactivateLaser"
        QT_MOC_LITERAL(488, 15),  // "resumeOperation"
        QT_MOC_LITERAL(504, 17),  // "updateLaserStatus"
        QT_MOC_LITERAL(522, 6),  // "status"
        QT_MOC_LITERAL(529, 16),  // "setSliderEnabled"
        QT_MOC_LITERAL(546, 7),  // "enabled"
        QT_MOC_LITERAL(554, 17)   // "updateCurrentTime"
    },
    "MainWindow",
    "moveForward",
    "",
    "moveBackward",
    "turnLeft",
    "turnRight",
    "updateSensorData",
    "readBatteryData",
    "updateServo",
    "command",
    "readSerial",
    "processRadarData",
    "data",
    "processBatteryData",
    "updateBatteryProgressBar",
    "power",
    "updateHistoricalData",
    "on_button0_clicked",
    "on_button45_clicked",
    "on_button90_clicked",
    "on_button135_clicked",
    "on_button180_clicked",
    "on_verticalSlider_valueChanged",
    "value",
    "on_button_auto_clicked",
    "updateServoAuto",
    "clearOldDetectionPoints",
    "updateDetectionPoint",
    "angle",
    "distance",
    "handleLaserActivation",
    "deactivateLaser",
    "resumeOperation",
    "updateLaserStatus",
    "status",
    "setSliderEnabled",
    "enabled",
    "updateCurrentTime"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x08,    1 /* Private */,
       3,    0,  183,    2, 0x08,    2 /* Private */,
       4,    0,  184,    2, 0x08,    3 /* Private */,
       5,    0,  185,    2, 0x08,    4 /* Private */,
       6,    0,  186,    2, 0x08,    5 /* Private */,
       7,    0,  187,    2, 0x08,    6 /* Private */,
       8,    1,  188,    2, 0x08,    7 /* Private */,
      10,    0,  191,    2, 0x08,    9 /* Private */,
      11,    1,  192,    2, 0x08,   10 /* Private */,
      13,    1,  195,    2, 0x08,   12 /* Private */,
      14,    1,  198,    2, 0x08,   14 /* Private */,
      16,    0,  201,    2, 0x08,   16 /* Private */,
      17,    0,  202,    2, 0x08,   17 /* Private */,
      18,    0,  203,    2, 0x08,   18 /* Private */,
      19,    0,  204,    2, 0x08,   19 /* Private */,
      20,    0,  205,    2, 0x08,   20 /* Private */,
      21,    0,  206,    2, 0x08,   21 /* Private */,
      22,    1,  207,    2, 0x08,   22 /* Private */,
      24,    0,  210,    2, 0x08,   24 /* Private */,
      25,    0,  211,    2, 0x08,   25 /* Private */,
      26,    0,  212,    2, 0x08,   26 /* Private */,
      27,    2,  213,    2, 0x08,   27 /* Private */,
      30,    0,  218,    2, 0x08,   30 /* Private */,
      31,    0,  219,    2, 0x08,   31 /* Private */,
      32,    0,  220,    2, 0x08,   32 /* Private */,
      33,    1,  221,    2, 0x08,   33 /* Private */,
      35,    1,  224,    2, 0x08,   35 /* Private */,
      37,    0,  227,    2, 0x08,   37 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'moveForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveBackward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turnLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turnRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSensorData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readBatteryData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateServo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'readSerial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processRadarData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'processBatteryData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateBatteryProgressBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'updateHistoricalData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button45_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button90_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button135_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button180_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_button_auto_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateServoAuto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearOldDetectionPoints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDetectionPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'handleLaserActivation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deactivateLaser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumeOperation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLaserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSliderEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveForward(); break;
        case 1: _t->moveBackward(); break;
        case 2: _t->turnLeft(); break;
        case 3: _t->turnRight(); break;
        case 4: _t->updateSensorData(); break;
        case 5: _t->readBatteryData(); break;
        case 6: _t->updateServo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->readSerial(); break;
        case 8: _t->processRadarData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->processBatteryData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->updateBatteryProgressBar((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 11: _t->updateHistoricalData(); break;
        case 12: _t->on_button0_clicked(); break;
        case 13: _t->on_button45_clicked(); break;
        case 14: _t->on_button90_clicked(); break;
        case 15: _t->on_button135_clicked(); break;
        case 16: _t->on_button180_clicked(); break;
        case 17: _t->on_verticalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_button_auto_clicked(); break;
        case 19: _t->updateServoAuto(); break;
        case 20: _t->clearOldDetectionPoints(); break;
        case 21: _t->updateDetectionPoint((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 22: _t->handleLaserActivation(); break;
        case 23: _t->deactivateLaser(); break;
        case 24: _t->resumeOperation(); break;
        case 25: _t->updateLaserStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->setSliderEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->updateCurrentTime(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
