/****************************************************************************
** Meta object code from reading C++ file 'parameterproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../parameterproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameterproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParameterProperties_t {
    QByteArrayData data[22];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterProperties_t qt_meta_stringdata_ParameterProperties = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ParameterProperties"
QT_MOC_LITERAL(1, 20, 14), // "languageChange"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "editItem"
QT_MOC_LITERAL(4, 45, 10), // "deleteItem"
QT_MOC_LITERAL(5, 56, 10), // "moveItemUp"
QT_MOC_LITERAL(6, 67, 12), // "moveItemDown"
QT_MOC_LITERAL(7, 80, 7), // "newItem"
QT_MOC_LITERAL(8, 88, 9), // "setActive"
QT_MOC_LITERAL(9, 98, 1), // "p"
QT_MOC_LITERAL(10, 100, 7), // "setList"
QT_MOC_LITERAL(11, 108, 1), // "l"
QT_MOC_LITERAL(12, 110, 7), // "setName"
QT_MOC_LITERAL(13, 118, 7), // "setType"
QT_MOC_LITERAL(14, 126, 14), // "QVariant::Type"
QT_MOC_LITERAL(15, 141, 8), // "setValue"
QT_MOC_LITERAL(16, 150, 6), // "active"
QT_MOC_LITERAL(17, 157, 4), // "list"
QT_MOC_LITERAL(18, 162, 4), // "name"
QT_MOC_LITERAL(19, 167, 4), // "type"
QT_MOC_LITERAL(20, 172, 8), // "typeName"
QT_MOC_LITERAL(21, 181, 5) // "value"

    },
    "ParameterProperties\0languageChange\0\0"
    "editItem\0deleteItem\0moveItemUp\0"
    "moveItemDown\0newItem\0setActive\0p\0"
    "setList\0l\0setName\0setType\0QVariant::Type\0"
    "setValue\0active\0list\0name\0type\0typeName\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterProperties[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    1,  110,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,
      12,    1,  116,    2, 0x0a /* Public */,
      13,    1,  119,    2, 0x0a /* Public */,
      13,    1,  122,    2, 0x0a /* Public */,
      15,    1,  125,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  128,    2, 0x02 /* Public */,
      17,    0,  129,    2, 0x02 /* Public */,
      18,    0,  130,    2, 0x02 /* Public */,
      19,    0,  131,    2, 0x02 /* Public */,
      20,    0,  132,    2, 0x02 /* Public */,
      21,    0,  133,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QVariantList,   11,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 14,    9,
    QMetaType::Void, QMetaType::QVariant,    9,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::QVariantList,
    QMetaType::QString,
    0x80000000 | 14,
    QMetaType::QString,
    QMetaType::QVariant,

       0        // eod
};

void ParameterProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->languageChange(); break;
        case 1: _t->editItem(); break;
        case 2: _t->deleteItem(); break;
        case 3: _t->moveItemUp(); break;
        case 4: _t->moveItemDown(); break;
        case 5: _t->newItem(); break;
        case 6: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setList((*reinterpret_cast< const QList<QVariant>(*)>(_a[1]))); break;
        case 8: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setType((*reinterpret_cast< QVariant::Type(*)>(_a[1]))); break;
        case 11: _t->setValue((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 12: { bool _r = _t->active();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QList<QVariant> _r = _t->list();
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QVariant::Type _r = _t->type();
            if (_a[0]) *reinterpret_cast< QVariant::Type*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->typeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QVariant _r = _t->value();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ParameterProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ParameterProperties.data,
    qt_meta_data_ParameterProperties,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterProperties.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ParameterProperties"))
        return static_cast< Ui::ParameterProperties*>(this);
    return QDialog::qt_metacast(_clname);
}

int ParameterProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
