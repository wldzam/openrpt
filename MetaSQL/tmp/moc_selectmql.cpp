/****************************************************************************
** Meta object code from reading C++ file 'selectmql.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../selectmql.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectmql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectMQL_t {
    QByteArrayData data[15];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectMQL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectMQL_t qt_meta_stringdata_SelectMQL = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SelectMQL"
QT_MOC_LITERAL(1, 10, 13), // "selectedQuery"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 2), // "id"
QT_MOC_LITERAL(4, 28, 5), // "setId"
QT_MOC_LITERAL(5, 34, 14), // "languageChange"
QT_MOC_LITERAL(6, 49, 9), // "sAccepted"
QT_MOC_LITERAL(7, 59, 9), // "sPopulate"
QT_MOC_LITERAL(8, 69, 9), // "sRejected"
QT_MOC_LITERAL(9, 79, 5), // "grade"
QT_MOC_LITERAL(10, 85, 5), // "group"
QT_MOC_LITERAL(11, 91, 4), // "name"
QT_MOC_LITERAL(12, 96, 5), // "notes"
QT_MOC_LITERAL(13, 102, 5), // "query"
QT_MOC_LITERAL(14, 108, 6) // "schema"

    },
    "SelectMQL\0selectedQuery\0\0id\0setId\0"
    "languageChange\0sAccepted\0sPopulate\0"
    "sRejected\0grade\0group\0name\0notes\0query\0"
    "schema"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectMQL[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   82,    2, 0x0a /* Public */,
       5,    0,   85,    2, 0x09 /* Protected */,
       6,    0,   86,    2, 0x09 /* Protected */,
       7,    0,   87,    2, 0x09 /* Protected */,
       8,    0,   88,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   89,    2, 0x02 /* Public */,
      10,    0,   90,    2, 0x02 /* Public */,
       3,    0,   91,    2, 0x02 /* Public */,
      11,    0,   92,    2, 0x02 /* Public */,
      12,    0,   93,    2, 0x02 /* Public */,
      13,    0,   94,    2, 0x02 /* Public */,
      14,    0,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void SelectMQL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectMQL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedQuery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->sAccepted(); break;
        case 4: _t->sPopulate(); break;
        case 5: _t->sRejected(); break;
        case 6: { int _r = _t->grade();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->group();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->id();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->notes();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->query();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->schema();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectMQL::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectMQL::selectedQuery)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectMQL::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SelectMQL.data,
    qt_meta_data_SelectMQL,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectMQL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectMQL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectMQL.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SelectMQL"))
        return static_cast< Ui::SelectMQL*>(this);
    return QWidget::qt_metacast(_clname);
}

int SelectMQL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SelectMQL::selectedQuery(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
