/********************************************************************************
** Form generated from reading UI file 'dmatrixrectconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMATRIXRECTCONFIG_H
#define UI_DMATRIXRECTCONFIG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DMatrixRectConfig
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *_LCapacite;
    QPushButton *_previewButton;
    QComboBox *_CFormat;

    void setupUi(QWidget *DMatrixRectConfig)
    {
        if (DMatrixRectConfig->objectName().isEmpty())
            DMatrixRectConfig->setObjectName(QString::fromUtf8("DMatrixRectConfig"));
        DMatrixRectConfig->resize(196, 100);
        gridLayout = new QGridLayout(DMatrixRectConfig);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(DMatrixRectConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        _LCapacite = new QLabel(groupBox);
        _LCapacite->setObjectName(QString::fromUtf8("_LCapacite"));

        gridLayout_2->addWidget(_LCapacite, 1, 1, 1, 1);

        _previewButton = new QPushButton(groupBox);
        _previewButton->setObjectName(QString::fromUtf8("_previewButton"));
        _previewButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        _previewButton->setCheckable(true);

        gridLayout_2->addWidget(_previewButton, 1, 2, 1, 1);

        _CFormat = new QComboBox(groupBox);
        _CFormat->addItem(QString());
        _CFormat->addItem(QString());
        _CFormat->addItem(QString());
        _CFormat->addItem(QString());
        _CFormat->addItem(QString());
        _CFormat->addItem(QString());
        _CFormat->setObjectName(QString::fromUtf8("_CFormat"));

        gridLayout_2->addWidget(_CFormat, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(DMatrixRectConfig);

        QMetaObject::connectSlotsByName(DMatrixRectConfig);
    } // setupUi

    void retranslateUi(QWidget *DMatrixRectConfig)
    {
        DMatrixRectConfig->setWindowTitle(QCoreApplication::translate("DMatrixRectConfig", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DMatrixRectConfig", "Datamatrix Format", nullptr));
        label->setText(QCoreApplication::translate("DMatrixRectConfig", "Format :", nullptr));
        label_2->setText(QCoreApplication::translate("DMatrixRectConfig", "Capacity :", nullptr));
        _LCapacite->setText(QCoreApplication::translate("DMatrixRectConfig", "10/6", nullptr));
        _previewButton->setText(QCoreApplication::translate("DMatrixRectConfig", "Preview", nullptr));
        _CFormat->setItemText(0, QCoreApplication::translate("DMatrixRectConfig", "8x18", nullptr));
        _CFormat->setItemText(1, QCoreApplication::translate("DMatrixRectConfig", "8x32", nullptr));
        _CFormat->setItemText(2, QCoreApplication::translate("DMatrixRectConfig", "12x26", nullptr));
        _CFormat->setItemText(3, QCoreApplication::translate("DMatrixRectConfig", "12x36", nullptr));
        _CFormat->setItemText(4, QCoreApplication::translate("DMatrixRectConfig", "16x36", nullptr));
        _CFormat->setItemText(5, QCoreApplication::translate("DMatrixRectConfig", "16x48", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DMatrixRectConfig: public Ui_DMatrixRectConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMATRIXRECTCONFIG_H
