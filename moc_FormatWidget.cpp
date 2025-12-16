/****************************************************************************
** Meta object code from reading C++ file 'FormatWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/FormatWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FormatWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormatWidget_t {
    QByteArrayData data[8];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormatWidget_t qt_meta_stringdata_FormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormatWidget"
QT_MOC_LITERAL(1, 13, 22), // "signal_start_formating"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 33), // "on_radioButton_AutoFormat_cli..."
QT_MOC_LITERAL(4, 71, 35), // "on_radioButton_ManualFormat_c..."
QT_MOC_LITERAL(5, 107, 27), // "on_toolButton_Start_clicked"
QT_MOC_LITERAL(6, 135, 26), // "on_toolButton_stop_clicked"
QT_MOC_LITERAL(7, 162, 20) // "slot_platformChanged"

    },
    "FormatWidget\0signal_start_formating\0"
    "\0on_radioButton_AutoFormat_clicked\0"
    "on_radioButton_ManualFormat_clicked\0"
    "on_toolButton_Start_clicked\0"
    "on_toolButton_stop_clicked\0"
    "slot_platformChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormatWidget[] = {

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
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormatWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_start_formating(); break;
        case 1: _t->on_radioButton_AutoFormat_clicked(); break;
        case 2: _t->on_radioButton_ManualFormat_clicked(); break;
        case 3: _t->on_toolButton_Start_clicked(); break;
        case 4: _t->on_toolButton_stop_clicked(); break;
        case 5: _t->slot_platformChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormatWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormatWidget::signal_start_formating)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FormatWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_FormatWidget.data,
    qt_meta_data_FormatWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormatWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "APCore::IPlatformOb"))
        return static_cast< APCore::IPlatformOb*>(this);
    if (!strcmp(_clname, "IScatterObj"))
        return static_cast< IScatterObj*>(this);
    return TabWidgetBase::qt_metacast(_clname);
}

int FormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FormatWidget::signal_start_formating()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
