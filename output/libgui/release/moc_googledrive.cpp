/****************************************************************************
** Meta object code from reading C++ file 'googledrive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/googledrive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googledrive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__GoogleDrive_t {
    QByteArrayData data[23];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__GoogleDrive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__GoogleDrive_t qt_meta_stringdata_LibGUI__GoogleDrive = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LibGUI::GoogleDrive"
QT_MOC_LITERAL(1, 20, 17), // "fileQueryAnswered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "list"
QT_MOC_LITERAL(4, 44, 12), // "fileUploaded"
QT_MOC_LITERAL(5, 57, 14), // "uploadProgress"
QT_MOC_LITERAL(6, 72, 5), // "value"
QT_MOC_LITERAL(7, 78, 16), // "downloadProgress"
QT_MOC_LITERAL(8, 95, 14), // "fileDownloaded"
QT_MOC_LITERAL(9, 110, 4), // "data"
QT_MOC_LITERAL(10, 115, 13), // "getFolderDone"
QT_MOC_LITERAL(11, 129, 2), // "id"
QT_MOC_LITERAL(12, 132, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(13, 160, 5), // "error"
QT_MOC_LITERAL(14, 166, 11), // "getFileDone"
QT_MOC_LITERAL(15, 178, 16), // "createFolderDone"
QT_MOC_LITERAL(16, 195, 14), // "uploadFileDone"
QT_MOC_LITERAL(17, 210, 16), // "onUploadProgress"
QT_MOC_LITERAL(18, 227, 8), // "uploaded"
QT_MOC_LITERAL(19, 236, 5), // "total"
QT_MOC_LITERAL(20, 242, 18), // "onDownloadProgress"
QT_MOC_LITERAL(21, 261, 10), // "downloaded"
QT_MOC_LITERAL(22, 272, 12) // "downloadDone"

    },
    "LibGUI::GoogleDrive\0fileQueryAnswered\0"
    "\0list\0fileUploaded\0uploadProgress\0"
    "value\0downloadProgress\0fileDownloaded\0"
    "data\0getFolderDone\0id\0QNetworkReply::NetworkError\0"
    "error\0getFileDone\0createFolderDone\0"
    "uploadFileDone\0onUploadProgress\0"
    "uploaded\0total\0onDownloadProgress\0"
    "downloaded\0downloadDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__GoogleDrive[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,
       7,    1,   91,    2, 0x06 /* Public */,
       8,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   97,    2, 0x08 /* Private */,
      14,    3,  104,    2, 0x08 /* Private */,
      15,    3,  111,    2, 0x08 /* Private */,
      16,    3,  118,    2, 0x08 /* Private */,
      17,    3,  125,    2, 0x08 /* Private */,
      20,    3,  132,    2, 0x08 /* Private */,
      22,    3,  139,    2, 0x08 /* Private */,
      20,    2,  146,    2, 0x08 /* Private */,
      22,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonArray,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QByteArray,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::QByteArray,   11,   13,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::QByteArray,   11,   13,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::QByteArray,   11,   13,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::QByteArray,   11,   13,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,   11,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,   11,   21,   19,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12, QMetaType::QByteArray,   11,   13,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   21,   19,
    QMetaType::Void,

       0        // eod
};

void LibGUI::GoogleDrive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GoogleDrive *_t = static_cast<GoogleDrive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileQueryAnswered((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 1: _t->fileUploaded(); break;
        case 2: _t->uploadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->fileDownloaded((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->getFolderDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 6: _t->getFileDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 7: _t->createFolderDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 8: _t->uploadFileDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 9: _t->onUploadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 10: _t->onDownloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 11: _t->downloadDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 12: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 13: _t->downloadDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GoogleDrive::*_t)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GoogleDrive::fileQueryAnswered)) {
                *result = 0;
            }
        }
        {
            typedef void (GoogleDrive::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GoogleDrive::fileUploaded)) {
                *result = 1;
            }
        }
        {
            typedef void (GoogleDrive::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GoogleDrive::uploadProgress)) {
                *result = 2;
            }
        }
        {
            typedef void (GoogleDrive::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GoogleDrive::downloadProgress)) {
                *result = 3;
            }
        }
        {
            typedef void (GoogleDrive::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GoogleDrive::fileDownloaded)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject LibGUI::GoogleDrive::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LibGUI__GoogleDrive.data,
      qt_meta_data_LibGUI__GoogleDrive,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::GoogleDrive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::GoogleDrive::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__GoogleDrive.stringdata0))
        return static_cast<void*>(const_cast< GoogleDrive*>(this));
    return QObject::qt_metacast(_clname);
}

int LibGUI::GoogleDrive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::GoogleDrive::fileQueryAnswered(const QJsonArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibGUI::GoogleDrive::fileUploaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void LibGUI::GoogleDrive::uploadProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibGUI::GoogleDrive::downloadProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LibGUI::GoogleDrive::fileDownloaded(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
