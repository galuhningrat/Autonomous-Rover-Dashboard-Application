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
    "readBatteryData",
    "",
    "updateServo",
    "command",
    "readSerial",
    "processRadarData",
    "data",
    "processBatteryData",
    "processSensorPowerData",
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
    "updateCurrentTime",
    "on_setBatteryCapacityButton_clicked",
    "updateRemainingOperationTime",
    "togglePowerSavingMode",
    "logData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[76];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[11];
    char stringdata6[17];
    char stringdata7[5];
    char stringdata8[19];
    char stringdata9[23];
    char stringdata10[25];
    char stringdata11[6];
    char stringdata12[21];
    char stringdata13[19];
    char stringdata14[20];
    char stringdata15[20];
    char stringdata16[21];
    char stringdata17[21];
    char stringdata18[31];
    char stringdata19[6];
    char stringdata20[23];
    char stringdata21[16];
    char stringdata22[24];
    char stringdata23[21];
    char stringdata24[6];
    char stringdata25[9];
    char stringdata26[22];
    char stringdata27[16];
    char stringdata28[16];
    char stringdata29[18];
    char stringdata30[7];
    char stringdata31[17];
    char stringdata32[8];
    char stringdata33[18];
    char stringdata34[36];
    char stringdata35[29];
    char stringdata36[22];
    char stringdata37[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "readBatteryData"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 11),  // "updateServo"
        QT_MOC_LITERAL(40, 7),  // "command"
        QT_MOC_LITERAL(48, 10),  // "readSerial"
        QT_MOC_LITERAL(59, 16),  // "processRadarData"
        QT_MOC_LITERAL(76, 4),  // "data"
        QT_MOC_LITERAL(81, 18),  // "processBatteryData"
        QT_MOC_LITERAL(100, 22),  // "processSensorPowerData"
        QT_MOC_LITERAL(123, 24),  // "updateBatteryProgressBar"
        QT_MOC_LITERAL(148, 5),  // "power"
        QT_MOC_LITERAL(154, 20),  // "updateHistoricalData"
        QT_MOC_LITERAL(175, 18),  // "on_button0_clicked"
        QT_MOC_LITERAL(194, 19),  // "on_button45_clicked"
        QT_MOC_LITERAL(214, 19),  // "on_button90_clicked"
        QT_MOC_LITERAL(234, 20),  // "on_button135_clicked"
        QT_MOC_LITERAL(255, 20),  // "on_button180_clicked"
        QT_MOC_LITERAL(276, 30),  // "on_verticalSlider_valueChanged"
        QT_MOC_LITERAL(307, 5),  // "value"
        QT_MOC_LITERAL(313, 22),  // "on_button_auto_clicked"
        QT_MOC_LITERAL(336, 15),  // "updateServoAuto"
        QT_MOC_LITERAL(352, 23),  // "clearOldDetectionPoints"
        QT_MOC_LITERAL(376, 20),  // "updateDetectionPoint"
        QT_MOC_LITERAL(397, 5),  // "angle"
        QT_MOC_LITERAL(403, 8),  // "distance"
        QT_MOC_LITERAL(412, 21),  // "handleLaserActivation"
        QT_MOC_LITERAL(434, 15),  // "deactivateLaser"
        QT_MOC_LITERAL(450, 15),  // "resumeOperation"
        QT_MOC_LITERAL(466, 17),  // "updateLaserStatus"
        QT_MOC_LITERAL(484, 6),  // "status"
        QT_MOC_LITERAL(491, 16),  // "setSliderEnabled"
        QT_MOC_LITERAL(508, 7),  // "enabled"
        QT_MOC_LITERAL(516, 17),  // "updateCurrentTime"
        QT_MOC_LITERAL(534, 35),  // "on_setBatteryCapacityButton_c..."
        QT_MOC_LITERAL(570, 28),  // "updateRemainingOperationTime"
        QT_MOC_LITERAL(599, 21),  // "togglePowerSavingMode"
        QT_MOC_LITERAL(621, 7)   // "logData"
    },
    "MainWindow",
    "readBatteryData",
    "",
    "updateServo",
    "command",
    "readSerial",
    "processRadarData",
    "data",
    "processBatteryData",
    "processSensorPowerData",
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
    "updateCurrentTime",
    "on_setBatteryCapacityButton_clicked",
    "updateRemainingOperationTime",
    "togglePowerSavingMode",
    "logData"
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
       3,    1,  183,    2, 0x08,    2 /* Private */,
       5,    0,  186,    2, 0x08,    4 /* Private */,
       6,    1,  187,    2, 0x08,    5 /* Private */,
       8,    1,  190,    2, 0x08,    7 /* Private */,
       9,    1,  193,    2, 0x08,    9 /* Private */,
      10,    1,  196,    2, 0x08,   11 /* Private */,
      12,    0,  199,    2, 0x08,   13 /* Private */,
      13,    0,  200,    2, 0x08,   14 /* Private */,
      14,    0,  201,    2, 0x08,   15 /* Private */,
      15,    0,  202,    2, 0x08,   16 /* Private */,
      16,    0,  203,    2, 0x08,   17 /* Private */,
      17,    0,  204,    2, 0x08,   18 /* Private */,
      18,    1,  205,    2, 0x08,   19 /* Private */,
      20,    0,  208,    2, 0x08,   21 /* Private */,
      21,    0,  209,    2, 0x08,   22 /* Private */,
      22,    0,  210,    2, 0x08,   23 /* Private */,
      23,    2,  211,    2, 0x08,   24 /* Private */,
      26,    0,  216,    2, 0x08,   27 /* Private */,
      27,    0,  217,    2, 0x08,   28 /* Private */,
      28,    0,  218,    2, 0x08,   29 /* Private */,
      29,    1,  219,    2, 0x08,   30 /* Private */,
      31,    1,  222,    2, 0x08,   32 /* Private */,
      33,    0,  225,    2, 0x08,   34 /* Private */,
      34,    0,  226,    2, 0x08,   35 /* Private */,
      35,    0,  227,    2, 0x08,   36 /* Private */,
      36,    1,  228,    2, 0x08,   37 /* Private */,
      37,    0,  231,    2, 0x08,   39 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   32,
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
        // method 'processSensorPowerData'
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setBatteryCapacityButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRemainingOperationTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'togglePowerSavingMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'logData'
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
        case 0: _t->readBatteryData(); break;
        case 1: _t->updateServo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->readSerial(); break;
        case 3: _t->processRadarData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->processBatteryData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->processSensorPowerData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->updateBatteryProgressBar((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 7: _t->updateHistoricalData(); break;
        case 8: _t->on_button0_clicked(); break;
        case 9: _t->on_button45_clicked(); break;
        case 10: _t->on_button90_clicked(); break;
        case 11: _t->on_button135_clicked(); break;
        case 12: _t->on_button180_clicked(); break;
        case 13: _t->on_verticalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_button_auto_clicked(); break;
        case 15: _t->updateServoAuto(); break;
        case 16: _t->clearOldDetectionPoints(); break;
        case 17: _t->updateDetectionPoint((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 18: _t->handleLaserActivation(); break;
        case 19: _t->deactivateLaser(); break;
        case 20: _t->resumeOperation(); break;
        case 21: _t->updateLaserStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->setSliderEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->updateCurrentTime(); break;
        case 24: _t->on_setBatteryCapacityButton_clicked(); break;
        case 25: _t->updateRemainingOperationTime(); break;
        case 26: _t->togglePowerSavingMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->logData(); break;
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
