/****************************************************************************
** Meta object code from reading C++ file 'reportparameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../reportparameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReportParameter_t {
    QByteArrayData data[14];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportParameter_t qt_meta_stringdata_ReportParameter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ReportParameter"
QT_MOC_LITERAL(1, 16, 9), // "paramName"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "paramData"
QT_MOC_LITERAL(4, 37, 11), // "ORParameter"
QT_MOC_LITERAL(5, 49, 12), // "setParamName"
QT_MOC_LITERAL(6, 62, 4), // "text"
QT_MOC_LITERAL(7, 67, 12), // "setParamData"
QT_MOC_LITERAL(8, 80, 5), // "param"
QT_MOC_LITERAL(9, 86, 17), // "sSelectionChanged"
QT_MOC_LITERAL(10, 104, 4), // "sAdd"
QT_MOC_LITERAL(11, 109, 5), // "sEdit"
QT_MOC_LITERAL(12, 115, 7), // "sRemove"
QT_MOC_LITERAL(13, 123, 14) // "languageChange"

    },
    "ReportParameter\0paramName\0\0paramData\0"
    "ORParameter\0setParamName\0text\0"
    "setParamData\0param\0sSelectionChanged\0"
    "sAdd\0sEdit\0sRemove\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportParameter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       5,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::QString,
    0x80000000 | 4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 4,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReportParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReportParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->paramName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { ORParameter _r = _t->paramData();
            if (_a[0]) *reinterpret_cast< ORParameter*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setParamName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setParamData((*reinterpret_cast< const ORParameter(*)>(_a[1]))); break;
        case 4: _t->sSelectionChanged(); break;
        case 5: _t->sAdd(); break;
        case 6: _t->sEdit(); break;
        case 7: _t->sRemove(); break;
        case 8: _t->languageChange(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReportParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ReportParameter.data,
    qt_meta_data_ReportParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReportParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReportParameter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ReportParameter"))
        return static_cast< Ui::ReportParameter*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReportParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
