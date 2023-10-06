/****************************************************************************
** Meta object code from reading C++ file 'settingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/setting/settingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__SettingWidget_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__SettingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__SettingWidget_t qt_meta_stringdata_LibGUI__SettingWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LibGUI::SettingWidget"
QT_MOC_LITERAL(1, 22, 11), // "signChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "cashierPrintTypeChanged"
QT_MOC_LITERAL(4, 59, 11), // "saveClicked"
QT_MOC_LITERAL(5, 71, 10), // "tabChanged"
QT_MOC_LITERAL(6, 82, 16), // "printTestClicked"
QT_MOC_LITERAL(7, 99, 21), // "localeLanguageChanged"
QT_MOC_LITERAL(8, 121, 11), // "checkWidget"
QT_MOC_LITERAL(9, 133, 24) // "onCustomerDisplayClicked"

    },
    "LibGUI::SettingWidget\0signChanged\0\0"
    "cashierPrintTypeChanged\0saveClicked\0"
    "tabChanged\0printTestClicked\0"
    "localeLanguageChanged\0checkWidget\0"
    "onCustomerDisplayClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__SettingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::SettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingWidget *_t = static_cast<SettingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signChanged(); break;
        case 1: _t->cashierPrintTypeChanged(); break;
        case 2: _t->saveClicked(); break;
        case 3: _t->tabChanged(); break;
        case 4: _t->printTestClicked(); break;
        case 5: _t->localeLanguageChanged(); break;
        case 6: _t->checkWidget(); break;
        case 7: _t->onCustomerDisplayClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LibGUI::SettingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__SettingWidget.data,
      qt_meta_data_LibGUI__SettingWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::SettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::SettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__SettingWidget.stringdata0))
        return static_cast<void*>(const_cast< SettingWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< SettingWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::SettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
