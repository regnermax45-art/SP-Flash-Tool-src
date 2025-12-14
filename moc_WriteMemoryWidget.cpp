/****************************************************************************
** Meta object code from reading C++ file 'WriteMemoryWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/WriteMemoryWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WriteMemoryWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WriteMemoryWidget_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WriteMemoryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WriteMemoryWidget_t qt_meta_stringdata_WriteMemoryWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WriteMemoryWidget"
QT_MOC_LITERAL(1, 18, 33), // "on_toolButton_writeMemory_cli..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "on_toolButton_stop_clicked"
QT_MOC_LITERAL(4, 80, 30), // "on_toolButton_openFile_clicked"
QT_MOC_LITERAL(5, 111, 15), // "getBeginAddress"
QT_MOC_LITERAL(6, 127, 3) // "U64"

    },
    "WriteMemoryWidget\0on_toolButton_writeMemory_clicked\0"
    "\0on_toolButton_stop_clicked\0"
    "on_toolButton_openFile_clicked\0"
    "getBeginAddress\0U64"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WriteMemoryWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6,

       0        // eod
};

void WriteMemoryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WriteMemoryWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_toolButton_writeMemory_clicked(); break;
        case 1: _t->on_toolButton_stop_clicked(); break;
        case 2: _t->on_toolButton_openFile_clicked(); break;
        case 3: { U64 _r = _t->getBeginAddress();
            if (_a[0]) *reinterpret_cast< U64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WriteMemoryWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_WriteMemoryWidget.data,
    qt_meta_data_WriteMemoryWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WriteMemoryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WriteMemoryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WriteMemoryWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IScatterObj"))
        return static_cast< IScatterObj*>(this);
    return TabWidgetBase::qt_metacast(_clname);
}

int WriteMemoryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
