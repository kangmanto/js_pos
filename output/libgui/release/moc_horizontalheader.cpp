/****************************************************************************
** Meta object code from reading C++ file 'horizontalheader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/horizontalheader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'horizontalheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__HorizontalHeader_t {
    QByteArrayData data[11];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__HorizontalHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__HorizontalHeader_t qt_meta_stringdata_LibGUI__HorizontalHeader = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LibGUI::HorizontalHeader"
QT_MOC_LITERAL(1, 25, 18), // "filterValueChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "index"
QT_MOC_LITERAL(4, 51, 5), // "value"
QT_MOC_LITERAL(5, 57, 20), // "handleSectionResized"
QT_MOC_LITERAL(6, 78, 1), // "i"
QT_MOC_LITERAL(7, 80, 18), // "handleSectionMoved"
QT_MOC_LITERAL(8, 99, 7), // "logical"
QT_MOC_LITERAL(9, 107, 14), // "oldVisualIndex"
QT_MOC_LITERAL(10, 122, 14) // "newVisualIndex"

    },
    "LibGUI::HorizontalHeader\0filterValueChanged\0"
    "\0index\0value\0handleSectionResized\0i\0"
    "handleSectionMoved\0logical\0oldVisualIndex\0"
    "newVisualIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__HorizontalHeader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   34,    2, 0x08 /* Private */,
       7,    3,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,

       0        // eod
};

void LibGUI::HorizontalHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HorizontalHeader *_t = static_cast<HorizontalHeader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->handleSectionResized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->handleSectionMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HorizontalHeader::*_t)(int , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HorizontalHeader::filterValueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibGUI::HorizontalHeader::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_LibGUI__HorizontalHeader.data,
      qt_meta_data_LibGUI__HorizontalHeader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::HorizontalHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::HorizontalHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__HorizontalHeader.stringdata0))
        return static_cast<void*>(const_cast< HorizontalHeader*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int LibGUI::HorizontalHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::HorizontalHeader::filterValueChanged(int _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
