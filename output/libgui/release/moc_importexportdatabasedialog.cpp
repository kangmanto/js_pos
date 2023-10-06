/****************************************************************************
** Meta object code from reading C++ file 'importexportdatabasedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/admin/importexportdatabasedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importexportdatabasedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__ImportExportDatabaseDialog_t {
    QByteArrayData data[19];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__ImportExportDatabaseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__ImportExportDatabaseDialog_t qt_meta_stringdata_LibGUI__ImportExportDatabaseDialog = {
    {
QT_MOC_LITERAL(0, 0, 34), // "LibGUI::ImportExportDatabaseD..."
QT_MOC_LITERAL(1, 35, 10), // "exportFile"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "exportGDrive"
QT_MOC_LITERAL(4, 60, 10), // "importFile"
QT_MOC_LITERAL(5, 71, 12), // "importGDrive"
QT_MOC_LITERAL(6, 84, 15), // "onLinkingFailed"
QT_MOC_LITERAL(7, 100, 16), // "onLinkingSuccess"
QT_MOC_LITERAL(8, 117, 13), // "onOpenBrowser"
QT_MOC_LITERAL(9, 131, 3), // "url"
QT_MOC_LITERAL(10, 135, 14), // "onCloseBrowser"
QT_MOC_LITERAL(11, 150, 16), // "uploadGDriveDone"
QT_MOC_LITERAL(12, 167, 12), // "onFileListed"
QT_MOC_LITERAL(13, 180, 3), // "arr"
QT_MOC_LITERAL(14, 184, 16), // "onFileDownloaded"
QT_MOC_LITERAL(15, 201, 4), // "data"
QT_MOC_LITERAL(16, 206, 15), // "requestFinished"
QT_MOC_LITERAL(17, 222, 14), // "QNetworkReply*"
QT_MOC_LITERAL(18, 237, 5) // "reply"

    },
    "LibGUI::ImportExportDatabaseDialog\0"
    "exportFile\0\0exportGDrive\0importFile\0"
    "importGDrive\0onLinkingFailed\0"
    "onLinkingSuccess\0onOpenBrowser\0url\0"
    "onCloseBrowser\0uploadGDriveDone\0"
    "onFileListed\0arr\0onFileDownloaded\0"
    "data\0requestFinished\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__ImportExportDatabaseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,   13,
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void LibGUI::ImportExportDatabaseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportExportDatabaseDialog *_t = static_cast<ImportExportDatabaseDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exportFile(); break;
        case 1: _t->exportGDrive(); break;
        case 2: _t->importFile(); break;
        case 3: _t->importGDrive(); break;
        case 4: _t->onLinkingFailed(); break;
        case 5: _t->onLinkingSuccess(); break;
        case 6: _t->onOpenBrowser((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->onCloseBrowser(); break;
        case 8: _t->uploadGDriveDone(); break;
        case 9: _t->onFileListed((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 10: _t->onFileDownloaded((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->requestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject LibGUI::ImportExportDatabaseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__ImportExportDatabaseDialog.data,
      qt_meta_data_LibGUI__ImportExportDatabaseDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::ImportExportDatabaseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::ImportExportDatabaseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__ImportExportDatabaseDialog.stringdata0))
        return static_cast<void*>(const_cast< ImportExportDatabaseDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< ImportExportDatabaseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::ImportExportDatabaseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
