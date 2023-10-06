/****************************************************************************
** Meta object code from reading C++ file 'additemunavailabledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/cashier/additemunavailabledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'additemunavailabledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__AddItemUnavailableDialog_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__AddItemUnavailableDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__AddItemUnavailableDialog_t qt_meta_stringdata_LibGUI__AddItemUnavailableDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "LibGUI::AddItemUnavailableDialog"
QT_MOC_LITERAL(1, 33, 10), // "addNewItem"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "data"
QT_MOC_LITERAL(4, 50, 11), // "saveClicked"
QT_MOC_LITERAL(5, 62, 16) // "sellPriceChanged"

    },
    "LibGUI::AddItemUnavailableDialog\0"
    "addNewItem\0\0data\0saveClicked\0"
    "sellPriceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__AddItemUnavailableDialog[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::AddItemUnavailableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddItemUnavailableDialog *_t = static_cast<AddItemUnavailableDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addNewItem((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->saveClicked(); break;
        case 2: _t->sellPriceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddItemUnavailableDialog::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddItemUnavailableDialog::addNewItem)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibGUI::AddItemUnavailableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__AddItemUnavailableDialog.data,
      qt_meta_data_LibGUI__AddItemUnavailableDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::AddItemUnavailableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::AddItemUnavailableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__AddItemUnavailableDialog.stringdata0))
        return static_cast<void*>(const_cast< AddItemUnavailableDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< AddItemUnavailableDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::AddItemUnavailableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void LibGUI::AddItemUnavailableDialog::addNewItem(const QVariantMap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
