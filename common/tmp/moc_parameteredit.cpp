/****************************************************************************
** Meta object code from reading C++ file 'parameteredit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../parameteredit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameteredit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParameterEdit_t {
    QByteArrayData data[26];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterEdit_t qt_meta_stringdata_ParameterEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ParameterEdit"
QT_MOC_LITERAL(1, 14, 5), // "clear"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "languageChange"
QT_MOC_LITERAL(4, 36, 7), // "newItem"
QT_MOC_LITERAL(5, 44, 4), // "edit"
QT_MOC_LITERAL(6, 49, 8), // "editItem"
QT_MOC_LITERAL(7, 58, 3), // "row"
QT_MOC_LITERAL(8, 62, 12), // "editItemList"
QT_MOC_LITERAL(9, 75, 11), // "doubleClick"
QT_MOC_LITERAL(10, 87, 3), // "col"
QT_MOC_LITERAL(11, 91, 15), // "selectionChange"
QT_MOC_LITERAL(12, 107, 10), // "deleteItem"
QT_MOC_LITERAL(13, 118, 19), // "ParameterEditDialog"
QT_MOC_LITERAL(14, 138, 8), // "QDialog*"
QT_MOC_LITERAL(15, 147, 14), // "ParameterEdit*"
QT_MOC_LITERAL(16, 162, 1), // "p"
QT_MOC_LITERAL(17, 164, 8), // "QWidget*"
QT_MOC_LITERAL(18, 173, 6), // "parent"
QT_MOC_LITERAL(19, 180, 15), // "Qt::WindowFlags"
QT_MOC_LITERAL(20, 196, 1), // "f"
QT_MOC_LITERAL(21, 198, 16), // "getParameterList"
QT_MOC_LITERAL(22, 215, 13), // "ParameterList"
QT_MOC_LITERAL(23, 229, 11), // "setDocument"
QT_MOC_LITERAL(24, 241, 12), // "QDomDocument"
QT_MOC_LITERAL(25, 254, 3) // "doc"

    },
    "ParameterEdit\0clear\0\0languageChange\0"
    "newItem\0edit\0editItem\0row\0editItemList\0"
    "doubleClick\0col\0selectionChange\0"
    "deleteItem\0ParameterEditDialog\0QDialog*\0"
    "ParameterEdit*\0p\0QWidget*\0parent\0"
    "Qt::WindowFlags\0f\0getParameterList\0"
    "ParameterList\0setDocument\0QDomDocument\0"
    "doc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x09 /* Protected */,
       4,    0,   86,    2, 0x09 /* Protected */,
       5,    0,   87,    2, 0x09 /* Protected */,
       6,    1,   88,    2, 0x09 /* Protected */,
       8,    0,   91,    2, 0x09 /* Protected */,
       9,    2,   92,    2, 0x09 /* Protected */,
      11,    0,   97,    2, 0x09 /* Protected */,
      12,    0,   98,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      13,    3,   99,    2, 0x02 /* Public */,
      13,    2,  106,    2, 0x22 /* Public | MethodCloned */,
      13,    1,  111,    2, 0x22 /* Public | MethodCloned */,
      21,    0,  114,    2, 0x02 /* Public */,
      23,    1,  115,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,   10,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 14, 0x80000000 | 15, 0x80000000 | 17, 0x80000000 | 19,   16,   18,   20,
    0x80000000 | 14, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    0x80000000 | 14, 0x80000000 | 15,   16,
    0x80000000 | 22,
    QMetaType::Bool, 0x80000000 | 24,   25,

       0        // eod
};

void ParameterEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->languageChange(); break;
        case 2: _t->newItem(); break;
        case 3: _t->edit(); break;
        case 4: _t->editItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->editItemList(); break;
        case 6: _t->doubleClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->selectionChange(); break;
        case 8: _t->deleteItem(); break;
        case 9: { QDialog* _r = _t->ParameterEditDialog((*reinterpret_cast< ParameterEdit*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 10: { QDialog* _r = _t->ParameterEditDialog((*reinterpret_cast< ParameterEdit*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 11: { QDialog* _r = _t->ParameterEditDialog((*reinterpret_cast< ParameterEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 12: { ParameterList _r = _t->getParameterList();
            if (_a[0]) *reinterpret_cast< ParameterList*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->setDocument((*reinterpret_cast< const QDomDocument(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ParameterEdit* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ParameterEdit* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ParameterEdit* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ParameterEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ParameterEdit.data,
    qt_meta_data_ParameterEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ParameterEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ParameterEdit"))
        return static_cast< Ui::ParameterEdit*>(this);
    return QWidget::qt_metacast(_clname);
}

int ParameterEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
