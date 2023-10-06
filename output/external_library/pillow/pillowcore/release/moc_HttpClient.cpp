/****************************************************************************
** Meta object code from reading C++ file 'HttpClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external_library/pillow/pillowcore/HttpClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pillow__HttpClient_t {
    QByteArrayData data[16];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpClient_t qt_meta_stringdata_Pillow__HttpClient = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Pillow::HttpClient"
QT_MOC_LITERAL(1, 19, 16), // "headersCompleted"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "contentReadyRead"
QT_MOC_LITERAL(4, 54, 8), // "finished"
QT_MOC_LITERAL(5, 63, 12), // "device_error"
QT_MOC_LITERAL(6, 76, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 105, 5), // "error"
QT_MOC_LITERAL(8, 111, 16), // "device_connected"
QT_MOC_LITERAL(9, 128, 16), // "device_readyRead"
QT_MOC_LITERAL(10, 145, 5), // "Error"
QT_MOC_LITERAL(11, 151, 7), // "NoError"
QT_MOC_LITERAL(12, 159, 12), // "NetworkError"
QT_MOC_LITERAL(13, 172, 20), // "ResponseInvalidError"
QT_MOC_LITERAL(14, 193, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(15, 215, 12) // "AbortedError"

    },
    "Pillow::HttpClient\0headersCompleted\0"
    "\0contentReadyRead\0finished\0device_error\0"
    "QAbstractSocket::SocketError\0error\0"
    "device_connected\0device_readyRead\0"
    "Error\0NoError\0NetworkError\0"
    "ResponseInvalidError\0RemoteHostClosedError\0"
    "AbortedError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      10, 0x1,    5,   56,

 // enum data: key, value
      11, uint(Pillow::HttpClient::NoError),
      12, uint(Pillow::HttpClient::NetworkError),
      13, uint(Pillow::HttpClient::ResponseInvalidError),
      14, uint(Pillow::HttpClient::RemoteHostClosedError),
      15, uint(Pillow::HttpClient::AbortedError),

       0        // eod
};

void Pillow::HttpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpClient *_t = static_cast<HttpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->headersCompleted(); break;
        case 1: _t->contentReadyRead(); break;
        case 2: _t->finished(); break;
        case 3: _t->device_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->device_connected(); break;
        case 5: _t->device_readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::headersCompleted)) {
                *result = 0;
            }
        }
        {
            typedef void (HttpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::contentReadyRead)) {
                *result = 1;
            }
        }
        {
            typedef void (HttpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpClient::finished)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Pillow::HttpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pillow__HttpClient.data,
      qt_meta_data_Pillow__HttpClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpClient.stringdata0))
        return static_cast<void*>(const_cast< HttpClient*>(this));
    if (!strcmp(_clname, "HttpResponseParser"))
        return static_cast< HttpResponseParser*>(const_cast< HttpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int Pillow::HttpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Pillow::HttpClient::headersCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Pillow::HttpClient::contentReadyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Pillow::HttpClient::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_Pillow__NetworkAccessManager_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__NetworkAccessManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__NetworkAccessManager_t qt_meta_stringdata_Pillow__NetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Pillow::NetworkAccessManager"
QT_MOC_LITERAL(1, 29, 15), // "client_finished"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "Pillow::NetworkAccessManager\0"
    "client_finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__NetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Pillow::NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkAccessManager *_t = static_cast<NetworkAccessManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->client_finished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Pillow::NetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_Pillow__NetworkAccessManager.data,
      qt_meta_data_Pillow__NetworkAccessManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__NetworkAccessManager.stringdata0))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int Pillow::NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
