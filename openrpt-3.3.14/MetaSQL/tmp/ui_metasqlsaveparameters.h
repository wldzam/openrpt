/********************************************************************************
** Form generated from reading UI file 'metasqlsaveparameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METASQLSAVEPARAMETERS_H
#define UI_METASQLSAVEPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MetaSQLSaveParameters
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *_schemaLit;
    QLabel *_groupLit;
    QLabel *_nameLit;
    QComboBox *_schema;
    QComboBox *_group;
    QLineEdit *_name;
    QLabel *_gradeLit;
    QSpinBox *_grade;
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *_notes;
    QLabel *_notesLit;

    void setupUi(QDialog *MetaSQLSaveParameters)
    {
        if (MetaSQLSaveParameters->objectName().isEmpty())
            MetaSQLSaveParameters->setObjectName(QString::fromUtf8("MetaSQLSaveParameters"));
        MetaSQLSaveParameters->resize(407, 264);
        gridLayout = new QGridLayout(MetaSQLSaveParameters);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        _schemaLit = new QLabel(MetaSQLSaveParameters);
        _schemaLit->setObjectName(QString::fromUtf8("_schemaLit"));

        formLayout->setWidget(0, QFormLayout::LabelRole, _schemaLit);

        _groupLit = new QLabel(MetaSQLSaveParameters);
        _groupLit->setObjectName(QString::fromUtf8("_groupLit"));

        formLayout->setWidget(1, QFormLayout::LabelRole, _groupLit);

        _nameLit = new QLabel(MetaSQLSaveParameters);
        _nameLit->setObjectName(QString::fromUtf8("_nameLit"));

        formLayout->setWidget(2, QFormLayout::LabelRole, _nameLit);

        _schema = new QComboBox(MetaSQLSaveParameters);
        _schema->setObjectName(QString::fromUtf8("_schema"));

        formLayout->setWidget(0, QFormLayout::FieldRole, _schema);

        _group = new QComboBox(MetaSQLSaveParameters);
        _group->setObjectName(QString::fromUtf8("_group"));
        _group->setEditable(true);
        _group->setInsertPolicy(QComboBox::InsertAlphabetically);

        formLayout->setWidget(1, QFormLayout::FieldRole, _group);

        _name = new QLineEdit(MetaSQLSaveParameters);
        _name->setObjectName(QString::fromUtf8("_name"));

        formLayout->setWidget(2, QFormLayout::FieldRole, _name);

        _gradeLit = new QLabel(MetaSQLSaveParameters);
        _gradeLit->setObjectName(QString::fromUtf8("_gradeLit"));

        formLayout->setWidget(3, QFormLayout::LabelRole, _gradeLit);

        _grade = new QSpinBox(MetaSQLSaveParameters);
        _grade->setObjectName(QString::fromUtf8("_grade"));
        _grade->setMinimum(-1);
        _grade->setValue(-1);

        formLayout->setWidget(3, QFormLayout::FieldRole, _grade);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MetaSQLSaveParameters);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 1, 1, 1);

        _notes = new QPlainTextEdit(MetaSQLSaveParameters);
        _notes->setObjectName(QString::fromUtf8("_notes"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        _notes->setFont(font);

        gridLayout->addWidget(_notes, 2, 0, 1, 2);

        _notesLit = new QLabel(MetaSQLSaveParameters);
        _notesLit->setObjectName(QString::fromUtf8("_notesLit"));

        gridLayout->addWidget(_notesLit, 1, 0, 1, 1);


        retranslateUi(MetaSQLSaveParameters);
        QObject::connect(buttonBox, SIGNAL(accepted()), MetaSQLSaveParameters, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MetaSQLSaveParameters, SLOT(reject()));

        QMetaObject::connectSlotsByName(MetaSQLSaveParameters);
    } // setupUi

    void retranslateUi(QDialog *MetaSQLSaveParameters)
    {
        MetaSQLSaveParameters->setWindowTitle(QCoreApplication::translate("MetaSQLSaveParameters", "MetaSQL Save Parameters", nullptr));
        _schemaLit->setText(QCoreApplication::translate("MetaSQLSaveParameters", "Schema:", nullptr));
        _groupLit->setText(QCoreApplication::translate("MetaSQLSaveParameters", "Group:", nullptr));
        _nameLit->setText(QCoreApplication::translate("MetaSQLSaveParameters", "Name:", nullptr));
        _gradeLit->setText(QCoreApplication::translate("MetaSQLSaveParameters", "Grade:", nullptr));
        _grade->setSpecialValueText(QCoreApplication::translate("MetaSQLSaveParameters", "##", nullptr));
        _notesLit->setText(QCoreApplication::translate("MetaSQLSaveParameters", "Notes:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MetaSQLSaveParameters: public Ui_MetaSQLSaveParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METASQLSAVEPARAMETERS_H
