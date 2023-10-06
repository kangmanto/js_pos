/****************************************************************************
** Meta object code from reading C++ file 'HttpHandlerProxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external_library/pillow/pillowcore/HttpHandlerProxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpHandlerProxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pillow__HttpHandlerProxy_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerProxy_t qt_meta_stringdata_Pillow__HttpHandlerProxy = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Pillow::HttpHandlerProxy"

    },
    "Pillow::HttpHandlerProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Pillow::HttpHandlerProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandlerProxy::staticMetaObject = {
    { &Pillow::HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerProxy.data,
      qt_meta_data_Pillow__HttpHandlerProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerProxy.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerProxy*>(this));
    return Pillow::HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pillow::HttpHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Pillow__HttpHandlerProxyPipe_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerProxyPipe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerProxyPipe_t qt_meta_stringdata_Pillow__HttpHandlerProxyPipe = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Pillow::HttpHandlerProxyPipe"
QT_MOC_LITERAL(1, 29, 8), // "teardown"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "sendHeaders"
QT_MOC_LITERAL(4, 51, 4), // "pump"
QT_MOC_LITERAL(5, 56, 4), // "data"
QT_MOC_LITERAL(6, 61, 22), // "proxiedReply_readyRead"
QT_MOC_LITERAL(7, 84, 21) // "proxiedReply_finished"

    },
    "Pillow::HttpHandlerProxyPipe\0teardown\0"
    "\0sendHeaders\0pump\0data\0proxiedReply_readyRead\0"
    "proxiedReply_finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerProxyPipe[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    1,   41,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pillow::HttpHandlerProxyPipe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpHandlerProxyPipe *_t = static_cast<HttpHandlerProxyPipe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->teardown(); break;
        case 1: _t->sendHeaders(); break;
        case 2: _t->pump((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->proxiedReply_readyRead(); break;
        case 4: _t->proxiedReply_finished(); break;
        default: ;
        }
    }
}

const QMetaObject Pillow::HttpHandlerProxyPipe::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerProxyPipe.data,
      qt_meta_data_Pillow__HttpHandlerProxyPipe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerProxyPipe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerProxyPipe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerProxyPipe.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerProxyPipe*>(this));
    return QObject::qt_metacast(_clname);
}

int Pillow::HttpHandlerProxyPipe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Pillow__ElasticNetworkAccessManager_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__ElasticNetworkAccessManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__ElasticNetworkAccessManager_t qt_meta_stringdata_Pillow__ElasticNetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 35) // "Pillow::ElasticNetworkAccessM..."

    },
    "Pillow::ElasticNetworkAccessManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__ElasticNetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Pillow::ElasticNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Pillow::ElasticNetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_Pillow__ElasticNetworkAccessManager.data,
      qt_meta_data_Pillow__ElasticNetworkAccessManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::ElasticNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::ElasticNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__ElasticNetworkAccessManager.stringdata0))
        return static_cast<void*>(const_cast< ElasticNetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int Pillow::ElasticNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
