/****************************************************************************
** Meta object code from reading C++ file 'sockethandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sultan/socket/sockethandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sockethandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SocketHandler_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketHandler_t qt_meta_stringdata_SocketHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SocketHandler"
QT_MOC_LITERAL(1, 14, 10), // "newMessage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "LibG::Message*"
QT_MOC_LITERAL(4, 41, 3), // "msg"
QT_MOC_LITERAL(5, 45, 10), // "disconnect"
QT_MOC_LITERAL(6, 56, 21), // "binaryMessageRecieved"
QT_MOC_LITERAL(7, 78, 4) // "data"

    },
    "SocketHandler\0newMessage\0\0LibG::Message*\0"
    "msg\0disconnect\0binaryMessageRecieved\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    7,

       0        // eod
};

void SocketHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketHandler *_t = static_cast<SocketHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< LibG::Message*(*)>(_a[1]))); break;
        case 1: _t->disconnect(); break;
        case 2: _t->binaryMessageRecieved((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SocketHandler::*_t)(LibG::Message * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketHandler::newMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (SocketHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketHandler::disconnect)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SocketHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SocketHandler.data,
      qt_meta_data_SocketHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SocketHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SocketHandler.stringdata0))
        return static_cast<void*>(const_cast< SocketHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int SocketHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SocketHandler::newMessage(LibG::Message * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketHandler::disconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
