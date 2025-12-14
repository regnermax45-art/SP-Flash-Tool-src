/****************************************************************************
** Meta object code from reading C++ file 'CloneDownloadWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/CloneDownloadWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CloneDownloadWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CloneDownloadWidget_t {
    QByteArrayData data[7];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloneDownloadWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloneDownloadWidget_t qt_meta_stringdata_CloneDownloadWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CloneDownloadWidget"
QT_MOC_LITERAL(1, 20, 30), // "on_pushButton_readback_clicked"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 29), // "on_pushButton_restore_clicked"
QT_MOC_LITERAL(4, 82, 35), // "on_pushButton_CloneReadback_c..."
QT_MOC_LITERAL(5, 118, 29), // "on_pushButton_Restore_clicked"
QT_MOC_LITERAL(6, 148, 26) // "on_pushButton_Stop_clicked"

    },
    "CloneDownloadWidget\0on_pushButton_readback_clicked\0"
    "\0on_pushButton_restore_clicked\0"
    "on_pushButton_CloneReadback_clicked\0"
    "on_pushButton_Restore_clicked\0"
    "on_pushButton_Stop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloneDownloadWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CloneDownloadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CloneDownloadWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_readback_clicked(); break;
        case 1: _t->on_pushButton_restore_clicked(); break;
        case 2: _t->on_pushButton_CloneReadback_clicked(); break;
        case 3: _t->on_pushButton_Restore_clicked(); break;
        case 4: _t->on_pushButton_Stop_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CloneDownloadWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_CloneDownloadWidget.data,
    qt_meta_data_CloneDownloadWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CloneDownloadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloneDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CloneDownloadWidget.stringdata0))
        return static_cast<void*>(this);
    return TabWidgetBase::qt_metacast(_clname);
}

int CloneDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
