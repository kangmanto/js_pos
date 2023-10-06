/****************************************************************************
** Meta object code from reading C++ file 'HttpConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external_library/pillow/pillowcore/HttpConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pillow__HttpConnection_t {
    QByteArrayData data[50];
    char stringdata0[682];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpConnection_t qt_meta_stringdata_Pillow__HttpConnection = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Pillow::HttpConnection"
QT_MOC_LITERAL(1, 23, 12), // "requestReady"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "Pillow::HttpConnection*"
QT_MOC_LITERAL(4, 61, 4), // "self"
QT_MOC_LITERAL(5, 66, 16), // "requestCompleted"
QT_MOC_LITERAL(6, 83, 6), // "closed"
QT_MOC_LITERAL(7, 90, 13), // "writeResponse"
QT_MOC_LITERAL(8, 104, 10), // "statusCode"
QT_MOC_LITERAL(9, 115, 28), // "Pillow::HttpHeaderCollection"
QT_MOC_LITERAL(10, 144, 7), // "headers"
QT_MOC_LITERAL(11, 152, 7), // "content"
QT_MOC_LITERAL(12, 160, 19), // "writeResponseString"
QT_MOC_LITERAL(13, 180, 12), // "writeHeaders"
QT_MOC_LITERAL(14, 193, 12), // "writeContent"
QT_MOC_LITERAL(15, 206, 10), // "endContent"
QT_MOC_LITERAL(16, 217, 5), // "flush"
QT_MOC_LITERAL(17, 223, 5), // "close"
QT_MOC_LITERAL(18, 229, 18), // "responseStatusCode"
QT_MOC_LITERAL(19, 248, 21), // "responseContentLength"
QT_MOC_LITERAL(20, 270, 12), // "processInput"
QT_MOC_LITERAL(21, 283, 5), // "drain"
QT_MOC_LITERAL(22, 289, 14), // "requestHeaders"
QT_MOC_LITERAL(23, 304, 18), // "requestHeaderValue"
QT_MOC_LITERAL(24, 323, 5), // "field"
QT_MOC_LITERAL(25, 329, 17), // "requestParamValue"
QT_MOC_LITERAL(26, 347, 4), // "name"
QT_MOC_LITERAL(27, 352, 15), // "setRequestParam"
QT_MOC_LITERAL(28, 368, 5), // "value"
QT_MOC_LITERAL(29, 374, 5), // "state"
QT_MOC_LITERAL(30, 380, 5), // "State"
QT_MOC_LITERAL(31, 386, 13), // "requestMethod"
QT_MOC_LITERAL(32, 400, 10), // "requestUri"
QT_MOC_LITERAL(33, 411, 17), // "requestUriDecoded"
QT_MOC_LITERAL(34, 429, 11), // "requestPath"
QT_MOC_LITERAL(35, 441, 18), // "requestPathDecoded"
QT_MOC_LITERAL(36, 460, 18), // "requestQueryString"
QT_MOC_LITERAL(37, 479, 25), // "requestQueryStringDecoded"
QT_MOC_LITERAL(38, 505, 15), // "requestFragment"
QT_MOC_LITERAL(39, 521, 22), // "requestFragmentDecoded"
QT_MOC_LITERAL(40, 544, 18), // "requestHttpVersion"
QT_MOC_LITERAL(41, 563, 14), // "requestContent"
QT_MOC_LITERAL(42, 578, 13), // "Uninitialized"
QT_MOC_LITERAL(43, 592, 16), // "ReceivingHeaders"
QT_MOC_LITERAL(44, 609, 16), // "ReceivingContent"
QT_MOC_LITERAL(45, 626, 14), // "SendingHeaders"
QT_MOC_LITERAL(46, 641, 14), // "SendingContent"
QT_MOC_LITERAL(47, 656, 9), // "Completed"
QT_MOC_LITERAL(48, 666, 8), // "Flushing"
QT_MOC_LITERAL(49, 675, 6) // "Closed"

    },
    "Pillow::HttpConnection\0requestReady\0"
    "\0Pillow::HttpConnection*\0self\0"
    "requestCompleted\0closed\0writeResponse\0"
    "statusCode\0Pillow::HttpHeaderCollection\0"
    "headers\0content\0writeResponseString\0"
    "writeHeaders\0writeContent\0endContent\0"
    "flush\0close\0responseStatusCode\0"
    "responseContentLength\0processInput\0"
    "drain\0requestHeaders\0requestHeaderValue\0"
    "field\0requestParamValue\0name\0"
    "setRequestParam\0value\0state\0State\0"
    "requestMethod\0requestUri\0requestUriDecoded\0"
    "requestPath\0requestPathDecoded\0"
    "requestQueryString\0requestQueryStringDecoded\0"
    "requestFragment\0requestFragmentDecoded\0"
    "requestHttpVersion\0requestContent\0"
    "Uninitialized\0ReceivingHeaders\0"
    "ReceivingContent\0SendingHeaders\0"
    "SendingContent\0Completed\0Flushing\0"
    "Closed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      12,  216, // properties
       1,  264, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    1,  147,    2, 0x06 /* Public */,
       6,    1,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,  153,    2, 0x0a /* Public */,
       7,    2,  160,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  165,    2, 0x2a /* Public | MethodCloned */,
       7,    0,  168,    2, 0x2a /* Public | MethodCloned */,
      12,    3,  169,    2, 0x0a /* Public */,
      12,    2,  176,    2, 0x2a /* Public | MethodCloned */,
      12,    1,  181,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  184,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  185,    2, 0x0a /* Public */,
      13,    1,  190,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  193,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  194,    2, 0x0a /* Public */,
      15,    0,  197,    2, 0x0a /* Public */,
      16,    0,  198,    2, 0x0a /* Public */,
      17,    0,  199,    2, 0x0a /* Public */,
      18,    0,  200,    2, 0x0a /* Public */,
      19,    0,  201,    2, 0x0a /* Public */,
      20,    0,  202,    2, 0x08 /* Private */,
      21,    0,  203,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  204,    2, 0x02 /* Public */,
      23,    1,  205,    2, 0x02 /* Public */,
      25,    1,  208,    2, 0x02 /* Public */,
      27,    2,  211,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, QMetaType::QByteArray,    8,   10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, QMetaType::QString,    8,   10,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::LongLong,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   24,
    QMetaType::QString, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   26,   28,

 // properties: name, type, flags
      29, 0x80000000 | 30, 0x00095009,
      31, QMetaType::QByteArray, 0x00495001,
      32, QMetaType::QByteArray, 0x00495001,
      33, QMetaType::QString, 0x00495001,
      34, QMetaType::QByteArray, 0x00495001,
      35, QMetaType::QString, 0x00495001,
      36, QMetaType::QByteArray, 0x00495001,
      37, QMetaType::QString, 0x00495001,
      38, QMetaType::QByteArray, 0x00495001,
      39, QMetaType::QString, 0x00495001,
      40, QMetaType::QByteArray, 0x00495001,
      41, QMetaType::QByteArray, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      30, 0x0,    8,  268,

 // enum data: key, value
      42, uint(Pillow::HttpConnection::Uninitialized),
      43, uint(Pillow::HttpConnection::ReceivingHeaders),
      44, uint(Pillow::HttpConnection::ReceivingContent),
      45, uint(Pillow::HttpConnection::SendingHeaders),
      46, uint(Pillow::HttpConnection::SendingContent),
      47, uint(Pillow::HttpConnection::Completed),
      48, uint(Pillow::HttpConnection::Flushing),
      49, uint(Pillow::HttpConnection::Closed),

       0        // eod
};

void Pillow::HttpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpConnection *_t = static_cast<HttpConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestReady((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 1: _t->requestCompleted((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 2: _t->closed((*reinterpret_cast< Pillow::HttpConnection*(*)>(_a[1]))); break;
        case 3: _t->writeResponse((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Pillow::HttpHeaderCollection(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 4: _t->writeResponse((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Pillow::HttpHeaderCollection(*)>(_a[2]))); break;
        case 5: _t->writeResponse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->writeResponse(); break;
        case 7: _t->writeResponseString((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Pillow::HttpHeaderCollection(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->writeResponseString((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Pillow::HttpHeaderCollection(*)>(_a[2]))); break;
        case 9: _t->writeResponseString((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->writeResponseString(); break;
        case 11: _t->writeHeaders((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Pillow::HttpHeaderCollection(*)>(_a[2]))); break;
        case 12: _t->writeHeaders((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->writeHeaders(); break;
        case 14: _t->writeContent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 15: _t->endContent(); break;
        case 16: _t->flush(); break;
        case 17: _t->close(); break;
        case 18: { int _r = _t->responseStatusCode();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { qint64 _r = _t->responseContentLength();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 20: _t->processInput(); break;
        case 21: _t->drain(); break;
        case 22: _t->requestHeaders(); break;
        case 23: _t->requestHeaderValue((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 24: { QString _r = _t->requestParamValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: _t->setRequestParam((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpConnection* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpConnection* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpConnection* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpHeaderCollection >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpHeaderCollection >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpHeaderCollection >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpHeaderCollection >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pillow::HttpHeaderCollection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpConnection::*_t)(Pillow::HttpConnection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpConnection::requestReady)) {
                *result = 0;
            }
        }
        {
            typedef void (HttpConnection::*_t)(Pillow::HttpConnection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpConnection::requestCompleted)) {
                *result = 1;
            }
        }
        {
            typedef void (HttpConnection::*_t)(Pillow::HttpConnection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpConnection::closed)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpConnection *_t = static_cast<HttpConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->requestMethod(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = _t->requestUri(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->requestUriDecoded(); break;
        case 4: *reinterpret_cast< QByteArray*>(_v) = _t->requestPath(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->requestPathDecoded(); break;
        case 6: *reinterpret_cast< QByteArray*>(_v) = _t->requestQueryString(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->requestQueryStringDecoded(); break;
        case 8: *reinterpret_cast< QByteArray*>(_v) = _t->requestFragment(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->requestFragmentDecoded(); break;
        case 10: *reinterpret_cast< QByteArray*>(_v) = _t->requestHttpVersion(); break;
        case 11: *reinterpret_cast< QByteArray*>(_v) = _t->requestContent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Pillow::HttpConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pillow__HttpConnection.data,
      qt_meta_data_Pillow__HttpConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpConnection.stringdata0))
        return static_cast<void*>(const_cast< HttpConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int Pillow::HttpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Pillow::HttpConnection::requestReady(Pillow::HttpConnection * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pillow::HttpConnection::requestCompleted(Pillow::HttpConnection * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Pillow::HttpConnection::closed(Pillow::HttpConnection * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
