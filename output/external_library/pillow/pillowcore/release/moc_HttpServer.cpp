/****************************************************************************
** Meta object code from reading C++ file 'HttpServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external_library/pillow/pillowcore/HttpServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pillow__HttpServer_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpServer_t qt_meta_stringdata_Pillow__HttpServer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Pillow::HttpServer"
QT_MOC_LITERAL(1, 19, 12), // "requestReady"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "Pillow::HttpConnection*"
QT_MOC_LITERAL(4, 57, 10), // "connection"
QT_MOC_LITERAL(5, 68, 17), // "connection_closed"
QT_MOC_LITERAL(6, 86, 7), // "request"
QT_MOC_LITERAL(7, 94, 13), // "serverAddress"
QT_MOC_LITERAL(8, 108, 12), // "QHostAddress"
QT_MOC_LITERAL(9, 121, 10), // "serverPort"
QT_MOC_LITERAL(10, 132, 9) // "listening"

    },
    "Pillow::HttpServer\0requestReady\0\0"
    "Pillow::HttpConnection*\0connection\0"
    "connection_closed\0request\0serverAddress\0"
    "QHostAddress\0serverPort\0listening"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00095009,
       9, QMetaType::Int, 0x00095001,
      10, QMetaType::Bool, 0x00095001,

       0        // eod
};

void Pillow::HttpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpServer *_t = static_cast<HttpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestReady((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 1: _t->connection_closed((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpServer::*_t)(Pillow::HttpConnection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::requestReady)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpServer *_t = static_cast<HttpServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QHostAddress*>(_v) = _t->serverAddress(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->serverPort(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isListening(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Pillow::HttpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Pillow__HttpServer.data,
      qt_meta_data_Pillow__HttpServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpServer.stringdata0))
        return static_cast<void*>(const_cast< HttpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Pillow::HttpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Pillow::HttpServer::requestReady(Pillow::HttpConnection * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Pillow__HttpLocalServer_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpLocalServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpLocalServer_t qt_meta_stringdata_Pillow__HttpLocalServer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Pillow::HttpLocalServer"
QT_MOC_LITERAL(1, 24, 12), // "requestReady"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "Pillow::HttpConnection*"
QT_MOC_LITERAL(4, 62, 10), // "connection"
QT_MOC_LITERAL(5, 73, 18), // "this_newConnection"
QT_MOC_LITERAL(6, 92, 17), // "connection_closed"
QT_MOC_LITERAL(7, 110, 7) // "request"

    },
    "Pillow::HttpLocalServer\0requestReady\0"
    "\0Pillow::HttpConnection*\0connection\0"
    "this_newConnection\0connection_closed\0"
    "request"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpLocalServer[] = {

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
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    7,

       0        // eod
};

void Pillow::HttpLocalServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpLocalServer *_t = static_cast<HttpLocalServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestReady((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 1: _t->this_newConnection(); break;
        case 2: _t->connection_closed((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpLocalServer::*_t)(Pillow::HttpConnection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpLocalServer::requestReady)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Pillow::HttpLocalServer::staticMetaObject = {
    { &QLocalServer::staticMetaObject, qt_meta_stringdata_Pillow__HttpLocalServer.data,
      qt_meta_data_Pillow__HttpLocalServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpLocalServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpLocalServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpLocalServer.stringdata0))
        return static_cast<void*>(const_cast< HttpLocalServer*>(this));
    return QLocalServer::qt_metacast(_clname);
}

int Pillow::HttpLocalServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLocalServer::qt_metacall(_c, _id, _a);
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
void Pillow::HttpLocalServer::requestReady(Pillow::HttpConnection * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
