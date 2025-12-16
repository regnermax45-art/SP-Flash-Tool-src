/****************************************************************************
** Meta object code from reading C++ file 'SCIDownloadWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/SCIDownloadWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SCIDownloadWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCIDownloadWidget_t {
    QByteArrayData data[11];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCIDownloadWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCIDownloadWidget_t qt_meta_stringdata_SCIDownloadWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SCIDownloadWidget"
QT_MOC_LITERAL(1, 18, 24), // "signal_sci_load_finished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 22), // "signal_sci_load_failed"
QT_MOC_LITERAL(4, 67, 39), // "on_pushButton_SCIscatterLoadi..."
QT_MOC_LITERAL(5, 107, 17), // "slot_OnSCILoadEnd"
QT_MOC_LITERAL(6, 125, 20), // "slot_OnSCILoadFailed"
QT_MOC_LITERAL(7, 146, 23), // "slot_OnHeaderView_click"
QT_MOC_LITERAL(8, 170, 5), // "index"
QT_MOC_LITERAL(9, 176, 33), // "on_pushButton_SCIDownload_cli..."
QT_MOC_LITERAL(10, 210, 26) // "on_pushButton_Stop_clicked"

    },
    "SCIDownloadWidget\0signal_sci_load_finished\0"
    "\0signal_sci_load_failed\0"
    "on_pushButton_SCIscatterLoading_clicked\0"
    "slot_OnSCILoadEnd\0slot_OnSCILoadFailed\0"
    "slot_OnHeaderView_click\0index\0"
    "on_pushButton_SCIDownload_clicked\0"
    "on_pushButton_Stop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCIDownloadWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SCIDownloadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCIDownloadWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_sci_load_finished(); break;
        case 1: _t->signal_sci_load_failed(); break;
        case 2: _t->on_pushButton_SCIscatterLoading_clicked(); break;
        case 3: _t->slot_OnSCILoadEnd(); break;
        case 4: _t->slot_OnSCILoadFailed(); break;
        case 5: _t->slot_OnHeaderView_click((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_SCIDownload_clicked(); break;
        case 7: _t->on_pushButton_Stop_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SCIDownloadWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SCIDownloadWidget::signal_sci_load_finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SCIDownloadWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SCIDownloadWidget::signal_sci_load_failed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SCIDownloadWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_SCIDownloadWidget.data,
    qt_meta_data_SCIDownloadWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SCIDownloadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCIDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCIDownloadWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "APCore::IPlatformOb"))
        return static_cast< APCore::IPlatformOb*>(this);
    return TabWidgetBase::qt_metacast(_clname);
}

int SCIDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SCIDownloadWidget::signal_sci_load_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SCIDownloadWidget::signal_sci_load_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
