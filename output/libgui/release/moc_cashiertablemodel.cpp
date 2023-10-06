/****************************************************************************
** Meta object code from reading C++ file 'cashiertablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/cashier/cashiertablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cashiertablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__CashierTableModel_t {
    QByteArrayData data[13];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__CashierTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__CashierTableModel_t qt_meta_stringdata_LibGUI__CashierTableModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LibGUI::CashierTableModel"
QT_MOC_LITERAL(1, 26, 12), // "totalChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "total"
QT_MOC_LITERAL(4, 46, 9), // "selectRow"
QT_MOC_LITERAL(5, 56, 5), // "index"
QT_MOC_LITERAL(6, 62, 11), // "poinChanged"
QT_MOC_LITERAL(7, 74, 4), // "poin"
QT_MOC_LITERAL(8, 79, 11), // "requestEdit"
QT_MOC_LITERAL(9, 91, 5), // "value"
QT_MOC_LITERAL(10, 97, 12), // "itemInserted"
QT_MOC_LITERAL(11, 110, 12), // "CashierItem*"
QT_MOC_LITERAL(12, 123, 4) // "item"

    },
    "LibGUI::CashierTableModel\0totalChanged\0"
    "\0total\0selectRow\0index\0poinChanged\0"
    "poin\0requestEdit\0value\0itemInserted\0"
    "CashierItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__CashierTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    2,   48,    2, 0x06 /* Public */,
      10,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QVariant,    5,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void LibGUI::CashierTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CashierTableModel *_t = static_cast<CashierTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->totalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->selectRow((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->poinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->requestEdit((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->itemInserted((*reinterpret_cast< CashierItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CashierTableModel::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CashierTableModel::totalChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CashierTableModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CashierTableModel::selectRow)) {
                *result = 1;
            }
        }
        {
            typedef void (CashierTableModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CashierTableModel::poinChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (CashierTableModel::*_t)(const QModelIndex & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CashierTableModel::requestEdit)) {
                *result = 3;
            }
        }
        {
            typedef void (CashierTableModel::*_t)(CashierItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CashierTableModel::itemInserted)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject LibGUI::CashierTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_LibGUI__CashierTableModel.data,
      qt_meta_data_LibGUI__CashierTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::CashierTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::CashierTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__CashierTableModel.stringdata0))
        return static_cast<void*>(const_cast< CashierTableModel*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< CashierTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int LibGUI::CashierTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void LibGUI::CashierTableModel::totalChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibGUI::CashierTableModel::selectRow(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibGUI::CashierTableModel::poinChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibGUI::CashierTableModel::requestEdit(const QModelIndex & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LibGUI::CashierTableModel::itemInserted(CashierItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
