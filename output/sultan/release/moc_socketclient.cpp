/****************************************************************************
** Meta object code from reading C++ file 'socketclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sultan/socket/socketclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SocketClient_t {
    QByteArrayData data[19];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketClient_t qt_meta_stringdata_SocketClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SocketClient"
QT_MOC_LITERAL(1, 13, 15), // "socketConnected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "socketError"
QT_MOC_LITERAL(4, 42, 18), // "socketDisconnected"
QT_MOC_LITERAL(5, 61, 15), // "messageReceived"
QT_MOC_LITERAL(6, 77, 14), // "LibG::Message*"
QT_MOC_LITERAL(7, 92, 3), // "msg"
QT_MOC_LITERAL(8, 96, 17), // "connectionTimeout"
QT_MOC_LITERAL(9, 114, 11), // "sendMessage"
QT_MOC_LITERAL(10, 126, 15), // "checkConnection"
QT_MOC_LITERAL(11, 142, 11), // "errorOccure"
QT_MOC_LITERAL(12, 154, 12), // "stateChanged"
QT_MOC_LITERAL(13, 167, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(14, 196, 5), // "state"
QT_MOC_LITERAL(15, 202, 21), // "binaryMessageReceived"
QT_MOC_LITERAL(16, 224, 4), // "data"
QT_MOC_LITERAL(17, 229, 9), // "startPing"
QT_MOC_LITERAL(18, 239, 4) // "pong"

    },
    "SocketClient\0socketConnected\0\0socketError\0"
    "socketDisconnected\0messageReceived\0"
    "LibG::Message*\0msg\0connectionTimeout\0"
    "sendMessage\0checkConnection\0errorOccure\0"
    "stateChanged\0QAbstractSocket::SocketState\0"
    "state\0binaryMessageReceived\0data\0"
    "startPing\0pong"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   81,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      15,    1,   89,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketClient *_t = static_cast<SocketClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->socketConnected(); break;
        case 1: _t->socketError(); break;
        case 2: _t->socketDisconnected(); break;
        case 3: _t->messageReceived((*reinterpret_cast< LibG::Message*(*)>(_a[1]))); break;
        case 4: _t->connectionTimeout(); break;
        case 5: _t->sendMessage((*reinterpret_cast< LibG::Message*(*)>(_a[1]))); break;
        case 6: _t->checkConnection(); break;
        case 7: _t->errorOccure(); break;
        case 8: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 9: _t->binaryMessageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: _t->startPing(); break;
        case 11: _t->pong(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SocketClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketClient::socketConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (SocketClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketClient::socketError)) {
                *result = 1;
            }
        }
        {
            typedef void (SocketClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketClient::socketDisconnected)) {
                *result = 2;
            }
        }
        {
            typedef void (SocketClient::*_t)(LibG::Message * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketClient::messageReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (SocketClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketClient::connectionTimeout)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject SocketClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SocketClient.data,
      qt_meta_data_SocketClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SocketClient.stringdata0))
        return static_cast<void*>(const_cast< SocketClient*>(this));
    return QObject::qt_metacast(_clname);
}

int SocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SocketClient::socketConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SocketClient::socketError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SocketClient::socketDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SocketClient::messageReceived(LibG::Message * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SocketClient::connectionTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
