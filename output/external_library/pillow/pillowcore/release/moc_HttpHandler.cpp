/****************************************************************************
** Meta object code from reading C++ file 'HttpHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external_library/pillow/pillowcore/HttpHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pillow__HttpHandler_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandler_t qt_meta_stringdata_Pillow__HttpHandler = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Pillow::HttpHandler"
QT_MOC_LITERAL(1, 20, 13), // "handleRequest"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "Pillow::HttpConnection*"
QT_MOC_LITERAL(4, 59, 10) // "connection"

    },
    "Pillow::HttpHandler\0handleRequest\0\0"
    "Pillow::HttpConnection*\0connection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandler[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

       0        // eod
};

void Pillow::HttpHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpHandler *_t = static_cast<HttpHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->handleRequest((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Pillow::HttpHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandler.data,
      qt_meta_data_Pillow__HttpHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandler.stringdata0))
        return static_cast<void*>(const_cast< HttpHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int Pillow::HttpHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Pillow__HttpHandlerStack_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerStack_t qt_meta_stringdata_Pillow__HttpHandlerStack = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Pillow::HttpHandlerStack"

    },
    "Pillow::HttpHandlerStack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerStack[] = {

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

void Pillow::HttpHandlerStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandlerStack::staticMetaObject = {
    { &HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerStack.data,
      qt_meta_data_Pillow__HttpHandlerStack,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerStack::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerStack.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerStack*>(this));
    return HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Pillow__HttpHandlerFixed_t {
    QByteArrayData data[7];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerFixed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerFixed_t qt_meta_stringdata_Pillow__HttpHandlerFixed = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Pillow::HttpHandlerFixed"
QT_MOC_LITERAL(1, 25, 7), // "changed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "setStatusCode"
QT_MOC_LITERAL(4, 48, 10), // "statusCode"
QT_MOC_LITERAL(5, 59, 10), // "setContent"
QT_MOC_LITERAL(6, 70, 7) // "content"

    },
    "Pillow::HttpHandlerFixed\0changed\0\0"
    "setStatusCode\0statusCode\0setContent\0"
    "content"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerFixed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00495103,
       6, QMetaType::QByteArray, 0x00495103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void Pillow::HttpHandlerFixed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpHandlerFixed *_t = static_cast<HttpHandlerFixed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setStatusCode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setContent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpHandlerFixed::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpHandlerFixed::changed)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpHandlerFixed *_t = static_cast<HttpHandlerFixed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->statusCode(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->content(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpHandlerFixed *_t = static_cast<HttpHandlerFixed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStatusCode(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setContent(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Pillow::HttpHandlerFixed::staticMetaObject = {
    { &HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerFixed.data,
      qt_meta_data_Pillow__HttpHandlerFixed,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerFixed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerFixed::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerFixed.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerFixed*>(this));
    return HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerFixed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpHandler::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Pillow::HttpHandlerFixed::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_Pillow__HttpHandler404_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandler404_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandler404_t qt_meta_stringdata_Pillow__HttpHandler404 = {
    {
QT_MOC_LITERAL(0, 0, 22) // "Pillow::HttpHandler404"

    },
    "Pillow::HttpHandler404"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandler404[] = {

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

void Pillow::HttpHandler404::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandler404::staticMetaObject = {
    { &HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandler404.data,
      qt_meta_data_Pillow__HttpHandler404,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandler404::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandler404::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandler404.stringdata0))
        return static_cast<void*>(const_cast< HttpHandler404*>(this));
    return HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandler404::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Pillow__HttpHandlerFunction_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerFunction_t qt_meta_stringdata_Pillow__HttpHandlerFunction = {
    {
QT_MOC_LITERAL(0, 0, 27) // "Pillow::HttpHandlerFunction"

    },
    "Pillow::HttpHandlerFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerFunction[] = {

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

void Pillow::HttpHandlerFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandlerFunction::staticMetaObject = {
    { &HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerFunction.data,
      qt_meta_data_Pillow__HttpHandlerFunction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerFunction.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerFunction*>(this));
    return HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Pillow__HttpHandlerLog_t {
    QByteArrayData data[17];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerLog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerLog_t qt_meta_stringdata_Pillow__HttpHandlerLog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Pillow::HttpHandlerLog"
QT_MOC_LITERAL(1, 23, 7), // "setMode"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "Mode"
QT_MOC_LITERAL(4, 37, 4), // "mode"
QT_MOC_LITERAL(5, 42, 9), // "setDevice"
QT_MOC_LITERAL(6, 52, 10), // "QIODevice*"
QT_MOC_LITERAL(7, 63, 6), // "device"
QT_MOC_LITERAL(8, 70, 16), // "requestCompleted"
QT_MOC_LITERAL(9, 87, 23), // "Pillow::HttpConnection*"
QT_MOC_LITERAL(10, 111, 10), // "connection"
QT_MOC_LITERAL(11, 122, 13), // "requestClosed"
QT_MOC_LITERAL(12, 136, 16), // "requestDestroyed"
QT_MOC_LITERAL(13, 153, 3), // "log"
QT_MOC_LITERAL(14, 157, 5), // "entry"
QT_MOC_LITERAL(15, 163, 20), // "LogCompletedRequests"
QT_MOC_LITERAL(16, 184, 13) // "TraceRequests"

    },
    "Pillow::HttpHandlerLog\0setMode\0\0Mode\0"
    "mode\0setDevice\0QIODevice*\0device\0"
    "requestCompleted\0Pillow::HttpConnection*\0"
    "connection\0requestClosed\0requestDestroyed\0"
    "log\0entry\0LogCompletedRequests\0"
    "TraceRequests"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerLog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x08 /* Private */,
      11,    1,   53,    2, 0x08 /* Private */,
      12,    1,   56,    2, 0x08 /* Private */,
      13,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, QMetaType::QString,   14,

 // enums: name, flags, count, data
       3, 0x0,    2,   66,

 // enum data: key, value
      15, uint(Pillow::HttpHandlerLog::LogCompletedRequests),
      16, uint(Pillow::HttpHandlerLog::TraceRequests),

       0        // eod
};

void Pillow::HttpHandlerLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpHandlerLog *_t = static_cast<HttpHandlerLog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 1: _t->setDevice((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 2: _t->requestCompleted((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 3: _t->requestClosed((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 4: _t->requestDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Pillow::HttpHandlerLog::staticMetaObject = {
    { &HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerLog.data,
      qt_meta_data_Pillow__HttpHandlerLog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerLog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerLog.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerLog*>(this));
    return HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_Pillow__HttpHandlerFile_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerFile_t qt_meta_stringdata_Pillow__HttpHandlerFile = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Pillow::HttpHandlerFile"
QT_MOC_LITERAL(1, 24, 7), // "changed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10) // "publicPath"

    },
    "Pillow::HttpHandlerFile\0changed\0\0"
    "publicPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Pillow::HttpHandlerFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpHandlerFile *_t = static_cast<HttpHandlerFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpHandlerFile::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpHandlerFile::changed)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpHandlerFile *_t = static_cast<HttpHandlerFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->publicPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpHandlerFile *_t = static_cast<HttpHandlerFile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPublicPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandlerFile::staticMetaObject = {
    { &HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerFile.data,
      qt_meta_data_Pillow__HttpHandlerFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerFile.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerFile*>(this));
    return HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HttpHandler::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Pillow::HttpHandlerFile::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_Pillow__HttpHandlerFileTransfer_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerFileTransfer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerFileTransfer_t qt_meta_stringdata_Pillow__HttpHandlerFileTransfer = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Pillow::HttpHandlerFileTransfer"
QT_MOC_LITERAL(1, 32, 8), // "finished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16) // "writeNextPayload"

    },
    "Pillow::HttpHandlerFileTransfer\0"
    "finished\0\0writeNextPayload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerFileTransfer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Pillow::HttpHandlerFileTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpHandlerFileTransfer *_t = static_cast<HttpHandlerFileTransfer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->writeNextPayload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpHandlerFileTransfer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpHandlerFileTransfer::finished)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandlerFileTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerFileTransfer.data,
      qt_meta_data_Pillow__HttpHandlerFileTransfer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerFileTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerFileTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerFileTransfer.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerFileTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int Pillow::HttpHandlerFileTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Pillow::HttpHandlerFileTransfer::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
