/********************************************************************************
** Form generated from reading UI file 'selectmql.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTMQL_H
#define UI_SELECTMQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectMQL
{
public:
    QGridLayout *gridLayout;
    QLabel *_schemaLit;
    QComboBox *_schema;
    QDialogButtonBox *_buttons;
    QTreeView *_list;

    void setupUi(QWidget *SelectMQL)
    {
        if (SelectMQL->objectName().isEmpty())
            SelectMQL->setObjectName(QString::fromUtf8("SelectMQL"));
        SelectMQL->resize(470, 247);
        gridLayout = new QGridLayout(SelectMQL);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _schemaLit = new QLabel(SelectMQL);
        _schemaLit->setObjectName(QString::fromUtf8("_schemaLit"));

        gridLayout->addWidget(_schemaLit, 0, 0, 1, 1);

        _schema = new QComboBox(SelectMQL);
        _schema->setObjectName(QString::fromUtf8("_schema"));

        gridLayout->addWidget(_schema, 0, 1, 1, 1);

        _buttons = new QDialogButtonBox(SelectMQL);
        _buttons->setObjectName(QString::fromUtf8("_buttons"));
        _buttons->setOrientation(Qt::Vertical);
        _buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(_buttons, 0, 2, 2, 1);

        _list = new QTreeView(SelectMQL);
        _list->setObjectName(QString::fromUtf8("_list"));
        _list->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(_list, 1, 0, 1, 2);


        retranslateUi(SelectMQL);

        QMetaObject::connectSlotsByName(SelectMQL);
    } // setupUi

    void retranslateUi(QWidget *SelectMQL)
    {
        SelectMQL->setWindowTitle(QCoreApplication::translate("SelectMQL", "Choose a MetaSQL Query", nullptr));
        _schemaLit->setText(QCoreApplication::translate("SelectMQL", "Schema or Package:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectMQL: public Ui_SelectMQL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTMQL_H
