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
    "on_button0_clicked",
    "on_button90_clicked",
    "on_button180_clicked",
    "on_verticalSlider_valueChanged",
    "value",
    "on_button45_clicked",
    "on_button135_clicked",
    "on_button_auto_clicked",
    "updateServoAuto",
    "clearOldDetectionPoints",
    "updateDetectionPoint",
    "angle",
    "distance",
    "handleLaserActivation",
    "resumeOperation",
    "updateLaserStatus",
    "status",
    "setSliderEnabled",
    "enabled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[60];
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
    char stringdata11[19];
    char stringdata12[20];
    char stringdata13[21];
    char stringdata14[31];
    char stringdata15[6];
    char stringdata16[20];
    char stringdata17[21];
    char stringdata18[23];
    char stringdata19[16];
    char stringdata20[24];
    char stringdata21[21];
    char stringdata22[6];
    char stringdata23[9];
    char stringdata24[22];
    char stringdata25[16];
    char stringdata26[18];
    char stringdata27[7];
    char stringdata28[17];
    char stringdata29[8];
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
        QT_MOC_LITERAL(120, 18),  // "on_button0_clicked"
        QT_MOC_LITERAL(139, 19),  // "on_button90_clicked"
        QT_MOC_LITERAL(159, 20),  // "on_button180_clicked"
        QT_MOC_LITERAL(180, 30),  // "on_verticalSlider_valueChanged"
        QT_MOC_LITERAL(211, 5),  // "value"
        QT_MOC_LITERAL(217, 19),  // "on_button45_clicked"
        QT_MOC_LITERAL(237, 20),  // "on_button135_clicked"
        QT_MOC_LITERAL(258, 22),  // "on_button_auto_clicked"
        QT_MOC_LITERAL(281, 15),  // "updateServoAuto"
        QT_MOC_LITERAL(297, 23),  // "clearOldDetectionPoints"
        QT_MOC_LITERAL(321, 20),  // "updateDetectionPoint"
        QT_MOC_LITERAL(342, 5),  // "angle"
        QT_MOC_LITERAL(348, 8),  // "distance"
        QT_MOC_LITERAL(357, 21),  // "handleLaserActivation"
        QT_MOC_LITERAL(379, 15),  // "resumeOperation"
        QT_MOC_LITERAL(395, 17),  // "updateLaserStatus"
        QT_MOC_LITERAL(413, 6),  // "status"
        QT_MOC_LITERAL(420, 16),  // "setSliderEnabled"
        QT_MOC_LITERAL(437, 7)   // "enabled"
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
    "on_button0_clicked",
    "on_button90_clicked",
    "on_button180_clicked",
    "on_verticalSlider_valueChanged",
    "value",
    "on_button45_clicked",
    "on_button135_clicked",
    "on_button_auto_clicked",
    "updateServoAuto",
    "clearOldDetectionPoints",
    "updateDetectionPoint",
    "angle",
    "distance",
    "handleLaserActivation",
    "resumeOperation",
    "updateLaserStatus",
    "status",
    "setSliderEnabled",
    "enabled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x08,    1 /* Private */,
       3,    0,  147,    2, 0x08,    2 /* Private */,
       4,    0,  148,    2, 0x08,    3 /* Private */,
       5,    0,  149,    2, 0x08,    4 /* Private */,
       6,    0,  150,    2, 0x08,    5 /* Private */,
       7,    0,  151,    2, 0x08,    6 /* Private */,
       8,    1,  152,    2, 0x08,    7 /* Private */,
      10,    0,  155,    2, 0x08,    9 /* Private */,
      11,    0,  156,    2, 0x08,   10 /* Private */,
      12,    0,  157,    2, 0x08,   11 /* Private */,
      13,    0,  158,    2, 0x08,   12 /* Private */,
      14,    1,  159,    2, 0x08,   13 /* Private */,
      16,    0,  162,    2, 0x08,   15 /* Private */,
      17,    0,  163,    2, 0x08,   16 /* Private */,
      18,    0,  164,    2, 0x08,   17 /* Private */,
      19,    0,  165,    2, 0x08,   18 /* Private */,
      20,    0,  166,    2, 0x08,   19 /* Private */,
      21,    2,  167,    2, 0x08,   20 /* Private */,
      24,    0,  172,    2, 0x08,   23 /* Private */,
      25,    0,  173,    2, 0x08,   24 /* Private */,
      26,    1,  174,    2, 0x08,   25 /* Private */,
      28,    1,  177,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::Bool,   29,

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
        // method 'on_button0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button90_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button180_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_verticalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_button45_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button135_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'resumeOperation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLaserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSliderEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
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
        case 8: _t->on_button0_clicked(); break;
        case 9: _t->on_button90_clicked(); break;
        case 10: _t->on_button180_clicked(); break;
        case 11: _t->on_verticalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_button45_clicked(); break;
        case 13: _t->on_button135_clicked(); break;
        case 14: _t->on_button_auto_clicked(); break;
        case 15: _t->updateServoAuto(); break;
        case 16: _t->clearOldDetectionPoints(); break;
        case 17: _t->updateDetectionPoint((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 18: _t->handleLaserActivation(); break;
        case 19: _t->resumeOperation(); break;
        case 20: _t->updateLaserStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->setSliderEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
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
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
