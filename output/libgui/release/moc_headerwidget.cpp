/****************************************************************************
** Meta object code from reading C++ file 'headerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/headerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__HeaderWidget_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__HeaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__HeaderWidget_t qt_meta_stringdata_LibGUI__HeaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LibGUI::HeaderWidget"
QT_MOC_LITERAL(1, 21, 18), // "filterValueChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 5), // "value"
QT_MOC_LITERAL(5, 53, 12), // "lineEditDone"
QT_MOC_LITERAL(6, 66, 12), // "comboChanged"
QT_MOC_LITERAL(7, 79, 11), // "dateChanged"
QT_MOC_LITERAL(8, 91, 19) // "dateStartEndChanged"

    },
    "LibGUI::HeaderWidget\0filterValueChanged\0"
    "\0index\0value\0lineEditDone\0comboChanged\0"
    "dateChanged\0dateStartEndChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__HeaderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::HeaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HeaderWidget *_t = static_cast<HeaderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->lineEditDone(); break;
        case 2: _t->comboChanged(); break;
        case 3: _t->dateChanged(); break;
        case 4: _t->dateStartEndChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HeaderWidget::*_t)(int , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeaderWidget::filterValueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibGUI::HeaderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__HeaderWidget.data,
      qt_meta_data_LibGUI__HeaderWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::HeaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::HeaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__HeaderWidget.stringdata0))
        return static_cast<void*>(const_cast< HeaderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::HeaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LibGUI::HeaderWidget::filterValueChanged(int _t1, QVariant _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
