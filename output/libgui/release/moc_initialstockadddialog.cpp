/****************************************************************************
** Meta object code from reading C++ file 'initialstockadddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/initialstock/initialstockadddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initialstockadddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__InitialStockAddDialog_t {
    QByteArrayData data[11];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__InitialStockAddDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__InitialStockAddDialog_t qt_meta_stringdata_LibGUI__InitialStockAddDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "LibGUI::InitialStockAddDialog"
QT_MOC_LITERAL(1, 30, 10), // "addSuccess"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "barcodeDone"
QT_MOC_LITERAL(4, 54, 10), // "addClicked"
QT_MOC_LITERAL(5, 65, 15), // "addAgainClicked"
QT_MOC_LITERAL(6, 81, 9), // "checkDone"
QT_MOC_LITERAL(7, 91, 9), // "httpError"
QT_MOC_LITERAL(8, 101, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 129, 5), // "error"
QT_MOC_LITERAL(10, 135, 15) // "calculateMargin"

    },
    "LibGUI::InitialStockAddDialog\0addSuccess\0"
    "\0barcodeDone\0addClicked\0addAgainClicked\0"
    "checkDone\0httpError\0QNetworkReply::NetworkError\0"
    "error\0calculateMargin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__InitialStockAddDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void LibGUI::InitialStockAddDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InitialStockAddDialog *_t = static_cast<InitialStockAddDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSuccess(); break;
        case 1: _t->barcodeDone(); break;
        case 2: _t->addClicked(); break;
        case 3: _t->addAgainClicked(); break;
        case 4: _t->checkDone(); break;
        case 5: _t->httpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: _t->calculateMargin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InitialStockAddDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InitialStockAddDialog::addSuccess)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibGUI::InitialStockAddDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__InitialStockAddDialog.data,
      qt_meta_data_LibGUI__InitialStockAddDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::InitialStockAddDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::InitialStockAddDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__InitialStockAddDialog.stringdata0))
        return static_cast<void*>(const_cast< InitialStockAddDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< InitialStockAddDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::InitialStockAddDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::InitialStockAddDialog::addSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
