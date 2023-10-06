/****************************************************************************
** Meta object code from reading C++ file 'tablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/tablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__TableModel_t {
    QByteArrayData data[13];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__TableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__TableModel_t qt_meta_stringdata_LibGUI__TableModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LibGUI::TableModel"
QT_MOC_LITERAL(1, 19, 15), // "firstDataLoaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "maxPageChanged"
QT_MOC_LITERAL(4, 51, 5), // "value"
QT_MOC_LITERAL(5, 57, 18), // "currentPageChanged"
QT_MOC_LITERAL(6, 76, 7), // "refresh"
QT_MOC_LITERAL(7, 84, 11), // "resfreshOne"
QT_MOC_LITERAL(8, 96, 2), // "id"
QT_MOC_LITERAL(9, 99, 13), // "filterChanged"
QT_MOC_LITERAL(10, 113, 5), // "index"
QT_MOC_LITERAL(11, 119, 8), // "loadPage"
QT_MOC_LITERAL(12, 128, 4) // "page"

    },
    "LibGUI::TableModel\0firstDataLoaded\0\0"
    "maxPageChanged\0value\0currentPageChanged\0"
    "refresh\0resfreshOne\0id\0filterChanged\0"
    "index\0loadPage\0page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__TableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   56,    2, 0x0a /* Public */,
       7,    1,   57,    2, 0x0a /* Public */,
       9,    2,   60,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,   10,    4,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void LibGUI::TableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableModel *_t = static_cast<TableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstDataLoaded(); break;
        case 1: _t->maxPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->refresh(); break;
        case 4: _t->resfreshOne((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->filterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->loadPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TableModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableModel::firstDataLoaded)) {
                *result = 0;
            }
        }
        {
            typedef void (TableModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableModel::maxPageChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (TableModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableModel::currentPageChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject LibGUI::TableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_LibGUI__TableModel.data,
      qt_meta_data_LibGUI__TableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::TableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::TableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__TableModel.stringdata0))
        return static_cast<void*>(const_cast< TableModel*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< TableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int LibGUI::TableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::TableModel::firstDataLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LibGUI::TableModel::maxPageChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibGUI::TableModel::currentPageChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
