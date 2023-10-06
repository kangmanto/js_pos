/****************************************************************************
** Meta object code from reading C++ file 'autoupdatedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/about/autoupdatedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoupdatedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__AutoUpdateDialog_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__AutoUpdateDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__AutoUpdateDialog_t qt_meta_stringdata_LibGUI__AutoUpdateDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LibGUI::AutoUpdateDialog"
QT_MOC_LITERAL(1, 25, 9), // "checkDone"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "httpError"
QT_MOC_LITERAL(4, 46, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 74, 5), // "error"
QT_MOC_LITERAL(6, 80, 13), // "updateClicked"
QT_MOC_LITERAL(7, 94, 12), // "downloadDone"
QT_MOC_LITERAL(8, 107, 16), // "downloadProgress"
QT_MOC_LITERAL(9, 124, 7), // "receive"
QT_MOC_LITERAL(10, 132, 5) // "total"

    },
    "LibGUI::AutoUpdateDialog\0checkDone\0\0"
    "httpError\0QNetworkReply::NetworkError\0"
    "error\0updateClicked\0downloadDone\0"
    "downloadProgress\0receive\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__AutoUpdateDialog[] = {

 // content:
       7,       // revision
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
       3,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,

       0        // eod
};

void LibGUI::AutoUpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoUpdateDialog *_t = static_cast<AutoUpdateDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkDone(); break;
        case 1: _t->httpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->updateClicked(); break;
        case 3: _t->downloadDone(); break;
        case 4: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject LibGUI::AutoUpdateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__AutoUpdateDialog.data,
      qt_meta_data_LibGUI__AutoUpdateDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::AutoUpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::AutoUpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__AutoUpdateDialog.stringdata0))
        return static_cast<void*>(const_cast< AutoUpdateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::AutoUpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
