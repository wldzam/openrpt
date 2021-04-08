/****************************************************************************
** Meta object code from reading C++ file 'dbfiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../wrtembed/dbfiledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbfiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBFileDialog_t {
    QByteArrayData data[14];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBFileDialog_t qt_meta_stringdata_DBFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DBFileDialog"
QT_MOC_LITERAL(1, 13, 5), // "getId"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "getName"
QT_MOC_LITERAL(4, 28, 8), // "getGrade"
QT_MOC_LITERAL(5, 37, 9), // "getSource"
QT_MOC_LITERAL(6, 47, 11), // "getNameById"
QT_MOC_LITERAL(7, 59, 12), // "getGradeById"
QT_MOC_LITERAL(8, 72, 13), // "sGradeChanged"
QT_MOC_LITERAL(9, 86, 14), // "languageChange"
QT_MOC_LITERAL(10, 101, 15), // "sSelectedReport"
QT_MOC_LITERAL(11, 117, 12), // "sNameChanged"
QT_MOC_LITERAL(12, 130, 4), // "text"
QT_MOC_LITERAL(13, 135, 17) // "sNameGradeChanged"

    },
    "DBFileDialog\0getId\0\0getName\0getGrade\0"
    "getSource\0getNameById\0getGradeById\0"
    "sGradeChanged\0languageChange\0"
    "sSelectedReport\0sNameChanged\0text\0"
    "sNameGradeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x09 /* Protected */,
      10,    0,   79,    2, 0x09 /* Protected */,
      11,    1,   80,    2, 0x09 /* Protected */,
      13,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void DBFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBFileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->getId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->getGrade();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getSource();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getNameById();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->getGradeById();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->sGradeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->languageChange(); break;
        case 8: _t->sSelectedReport(); break;
        case 9: _t->sNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->sNameGradeChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DBFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DBFileDialog.data,
    qt_meta_data_DBFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBFileDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DBFileDialog"))
        return static_cast< Ui::DBFileDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int DBFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
