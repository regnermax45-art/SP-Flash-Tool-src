/****************************************************************************
** Meta object code from reading C++ file 'MemoryTestWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/MemoryTestWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemoryTestWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MemoryTestWidget_t {
    QByteArrayData data[11];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MemoryTestWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MemoryTestWidget_t qt_meta_stringdata_MemoryTestWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MemoryTestWidget"
QT_MOC_LITERAL(1, 17, 27), // "on_toolButton_start_clicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "on_SELECT_ALL_clicked"
QT_MOC_LITERAL(4, 68, 23), // "slot_MemoryTestCallback"
QT_MOC_LITERAL(5, 92, 3), // "msg"
QT_MOC_LITERAL(6, 96, 5), // "color"
QT_MOC_LITERAL(7, 102, 26), // "on_toolButton_stop_clicked"
QT_MOC_LITERAL(8, 129, 38), // "on_radioButton_dramtest_manua..."
QT_MOC_LITERAL(9, 168, 7), // "checked"
QT_MOC_LITERAL(10, 176, 36) // "on_radioButton_dramtest_auto_..."

    },
    "MemoryTestWidget\0on_toolButton_start_clicked\0"
    "\0on_SELECT_ALL_clicked\0slot_MemoryTestCallback\0"
    "msg\0color\0on_toolButton_stop_clicked\0"
    "on_radioButton_dramtest_manual_clicked\0"
    "checked\0on_radioButton_dramtest_auto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemoryTestWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    2,   46,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void MemoryTestWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemoryTestWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_toolButton_start_clicked(); break;
        case 1: _t->on_SELECT_ALL_clicked(); break;
        case 2: _t->slot_MemoryTestCallback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 3: _t->on_toolButton_stop_clicked(); break;
        case 4: _t->on_radioButton_dramtest_manual_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioButton_dramtest_auto_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MemoryTestWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_MemoryTestWidget.data,
    qt_meta_data_MemoryTestWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MemoryTestWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemoryTestWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemoryTestWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "APCore::IPlatformOb"))
        return static_cast< APCore::IPlatformOb*>(this);
    if (!strcmp(_clname, "IScatterObj"))
        return static_cast< IScatterObj*>(this);
    return TabWidgetBase::qt_metacast(_clname);
}

int MemoryTestWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
