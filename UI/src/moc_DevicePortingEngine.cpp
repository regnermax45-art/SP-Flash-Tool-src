/****************************************************************************
** Meta object code from reading C++ file 'DevicePortingEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "DevicePortingEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DevicePortingEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DevicePortingEngine_t {
    QByteArrayData data[29];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DevicePortingEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DevicePortingEngine_t qt_meta_stringdata_DevicePortingEngine = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DevicePortingEngine"
QT_MOC_LITERAL(1, 20, 14), // "deviceDetected"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "DeviceInfo"
QT_MOC_LITERAL(4, 47, 6), // "device"
QT_MOC_LITERAL(5, 54, 18), // "deviceDisconnected"
QT_MOC_LITERAL(6, 73, 14), // "portingStarted"
QT_MOC_LITERAL(7, 88, 19), // "portingStageChanged"
QT_MOC_LITERAL(8, 108, 12), // "PortingStage"
QT_MOC_LITERAL(9, 121, 5), // "stage"
QT_MOC_LITERAL(10, 127, 11), // "description"
QT_MOC_LITERAL(11, 139, 22), // "portingProgressChanged"
QT_MOC_LITERAL(12, 162, 10), // "percentage"
QT_MOC_LITERAL(13, 173, 16), // "portingCompleted"
QT_MOC_LITERAL(14, 190, 13), // "PortingResult"
QT_MOC_LITERAL(15, 204, 6), // "result"
QT_MOC_LITERAL(16, 211, 13), // "portingFailed"
QT_MOC_LITERAL(17, 225, 5), // "error"
QT_MOC_LITERAL(18, 231, 16), // "warningGenerated"
QT_MOC_LITERAL(19, 248, 7), // "warning"
QT_MOC_LITERAL(20, 256, 19), // "realTimeDataUpdated"
QT_MOC_LITERAL(21, 276, 4), // "data"
QT_MOC_LITERAL(22, 281, 25), // "onDeviceConnectionChanged"
QT_MOC_LITERAL(23, 307, 17), // "onFlashingStarted"
QT_MOC_LITERAL(24, 325, 18), // "onFlashingProgress"
QT_MOC_LITERAL(25, 344, 19), // "onFlashingCompleted"
QT_MOC_LITERAL(26, 364, 22), // "performDeviceDetection"
QT_MOC_LITERAL(27, 387, 19), // "processPortingStage"
QT_MOC_LITERAL(28, 407, 18) // "updateRealTimeData"

    },
    "DevicePortingEngine\0deviceDetected\0\0"
    "DeviceInfo\0device\0deviceDisconnected\0"
    "portingStarted\0portingStageChanged\0"
    "PortingStage\0stage\0description\0"
    "portingProgressChanged\0percentage\0"
    "portingCompleted\0PortingResult\0result\0"
    "portingFailed\0error\0warningGenerated\0"
    "warning\0realTimeDataUpdated\0data\0"
    "onDeviceConnectionChanged\0onFlashingStarted\0"
    "onFlashingProgress\0onFlashingCompleted\0"
    "performDeviceDetection\0processPortingStage\0"
    "updateRealTimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DevicePortingEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    2,   99,    2, 0x06 /* Public */,
      11,    1,  104,    2, 0x06 /* Public */,
      13,    1,  107,    2, 0x06 /* Public */,
      16,    1,  110,    2, 0x06 /* Public */,
      18,    1,  113,    2, 0x06 /* Public */,
      20,    1,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  119,    2, 0x0a /* Public */,
      23,    0,  120,    2, 0x0a /* Public */,
      24,    1,  121,    2, 0x0a /* Public */,
      25,    0,  124,    2, 0x0a /* Public */,
      26,    0,  125,    2, 0x08 /* Private */,
      27,    0,  126,    2, 0x08 /* Private */,
      28,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QVariantMap,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DevicePortingEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DevicePortingEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceDetected((*reinterpret_cast< const DeviceInfo(*)>(_a[1]))); break;
        case 1: _t->deviceDisconnected(); break;
        case 2: _t->portingStarted(); break;
        case 3: _t->portingStageChanged((*reinterpret_cast< PortingStage(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->portingProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->portingCompleted((*reinterpret_cast< const PortingResult(*)>(_a[1]))); break;
        case 6: _t->portingFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->warningGenerated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->realTimeDataUpdated((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 9: _t->onDeviceConnectionChanged(); break;
        case 10: _t->onFlashingStarted(); break;
        case 11: _t->onFlashingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onFlashingCompleted(); break;
        case 13: _t->performDeviceDetection(); break;
        case 14: _t->processPortingStage(); break;
        case 15: _t->updateRealTimeData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DevicePortingEngine::*)(const DeviceInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::deviceDetected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::deviceDisconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::portingStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)(PortingStage , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::portingStageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::portingProgressChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)(const PortingResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::portingCompleted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::portingFailed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::warningGenerated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DevicePortingEngine::*)(const QMap<QString,QVariant> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DevicePortingEngine::realTimeDataUpdated)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DevicePortingEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DevicePortingEngine.data,
    qt_meta_data_DevicePortingEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DevicePortingEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevicePortingEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DevicePortingEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DevicePortingEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DevicePortingEngine::deviceDetected(const DeviceInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DevicePortingEngine::deviceDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DevicePortingEngine::portingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DevicePortingEngine::portingStageChanged(PortingStage _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DevicePortingEngine::portingProgressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DevicePortingEngine::portingCompleted(const PortingResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DevicePortingEngine::portingFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DevicePortingEngine::warningGenerated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DevicePortingEngine::realTimeDataUpdated(const QMap<QString,QVariant> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
