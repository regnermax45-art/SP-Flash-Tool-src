/****************************************************************************
** Meta object code from reading C++ file 'ReadBackWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/ReadBackWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReadBackWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReadBackWidget_t {
    QByteArrayData data[12];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadBackWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadBackWidget_t qt_meta_stringdata_ReadBackWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ReadBackWidget"
QT_MOC_LITERAL(1, 15, 23), // "signal_platform_changed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "HW_StorageType_E&"
QT_MOC_LITERAL(4, 58, 7), // "storage"
QT_MOC_LITERAL(5, 66, 30), // "on_toolButton_readBack_clicked"
QT_MOC_LITERAL(6, 97, 26), // "on_toolButton_stop_clicked"
QT_MOC_LITERAL(7, 124, 25), // "on_toolButton_add_clicked"
QT_MOC_LITERAL(8, 150, 28), // "on_toolButton_remove_clicked"
QT_MOC_LITERAL(9, 179, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(10, 212, 3), // "row"
QT_MOC_LITERAL(11, 216, 6) // "column"

    },
    "ReadBackWidget\0signal_platform_changed\0"
    "\0HW_StorageType_E&\0storage\0"
    "on_toolButton_readBack_clicked\0"
    "on_toolButton_stop_clicked\0"
    "on_toolButton_add_clicked\0"
    "on_toolButton_remove_clicked\0"
    "on_tableWidget_cellDoubleClicked\0row\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadBackWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

       0        // eod
};

void ReadBackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReadBackWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_platform_changed((*reinterpret_cast< HW_StorageType_E(*)>(_a[1]))); break;
        case 1: _t->on_toolButton_readBack_clicked(); break;
        case 2: _t->on_toolButton_stop_clicked(); break;
        case 3: _t->on_toolButton_add_clicked(); break;
        case 4: _t->on_toolButton_remove_clicked(); break;
        case 5: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReadBackWidget::*)(HW_StorageType_E & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReadBackWidget::signal_platform_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReadBackWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_ReadBackWidget.data,
    qt_meta_data_ReadBackWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReadBackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadBackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReadBackWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "APCore::IPlatformOb"))
        return static_cast< APCore::IPlatformOb*>(this);
    if (!strcmp(_clname, "IScatterObj"))
        return static_cast< IScatterObj*>(this);
    return TabWidgetBase::qt_metacast(_clname);
}

int ReadBackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ReadBackWidget::signal_platform_changed(HW_StorageType_E & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
