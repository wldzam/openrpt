/****************************************************************************
** Meta object code from reading C++ file 'querylist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../querylist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querylist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QueryList_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QueryList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QueryList_t qt_meta_stringdata_QueryList = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QueryList"
QT_MOC_LITERAL(1, 10, 9), // "editQuery"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 38, 15), // "btnEdit_clicked"
QT_MOC_LITERAL(5, 54, 17), // "btnDelete_clicked"
QT_MOC_LITERAL(6, 72, 14), // "btnAdd_clicked"
QT_MOC_LITERAL(7, 87, 4), // "init"
QT_MOC_LITERAL(8, 92, 16), // "QuerySourceList*"
QT_MOC_LITERAL(9, 109, 14) // "languageChange"

    },
    "QueryList\0editQuery\0\0QListWidgetItem*\0"
    "btnEdit_clicked\0btnDelete_clicked\0"
    "btnAdd_clicked\0init\0QuerySourceList*\0"
    "languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QueryList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,

       0        // eod
};

void QueryList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QueryList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editQuery((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->btnEdit_clicked(); break;
        case 2: _t->btnDelete_clicked(); break;
        case 3: _t->btnAdd_clicked(); break;
        case 4: _t->init((*reinterpret_cast< QuerySourceList*(*)>(_a[1]))); break;
        case 5: _t->languageChange(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QueryList::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QueryList.data,
    qt_meta_data_QueryList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QueryList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueryList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QueryList.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QueryList"))
        return static_cast< Ui::QueryList*>(this);
    return QDialog::qt_metacast(_clname);
}

int QueryList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
