/********************************************************************************
** Form generated from reading UI file 'pdf417config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDF417CONFIG_H
#define UI_PDF417CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDF417Config
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *_columnsLit;
    QComboBox *_columns;
    QLabel *_errorCorrectionLit;
    QComboBox *_errorCorrection;
    QLabel *_codewordsLit;
    QSpinBox *_codewords;
    QRadioButton *_standard;
    QRadioButton *_truncated;

    void setupUi(QWidget *PDF417Config)
    {
        if (PDF417Config->objectName().isEmpty())
            PDF417Config->setObjectName(QString::fromUtf8("PDF417Config"));
        PDF417Config->resize(390, 141);
        verticalLayout = new QVBoxLayout(PDF417Config);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _columnsLit = new QLabel(PDF417Config);
        _columnsLit->setObjectName(QString::fromUtf8("_columnsLit"));
        _columnsLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_columnsLit, 0, 0, 1, 1);

        _columns = new QComboBox(PDF417Config);
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->addItem(QString());
        _columns->setObjectName(QString::fromUtf8("_columns"));

        gridLayout->addWidget(_columns, 0, 1, 1, 1);

        _errorCorrectionLit = new QLabel(PDF417Config);
        _errorCorrectionLit->setObjectName(QString::fromUtf8("_errorCorrectionLit"));
        _errorCorrectionLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_errorCorrectionLit, 1, 0, 1, 1);

        _errorCorrection = new QComboBox(PDF417Config);
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->addItem(QString());
        _errorCorrection->setObjectName(QString::fromUtf8("_errorCorrection"));

        gridLayout->addWidget(_errorCorrection, 1, 1, 1, 1);

        _codewordsLit = new QLabel(PDF417Config);
        _codewordsLit->setObjectName(QString::fromUtf8("_codewordsLit"));
        _codewordsLit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(_codewordsLit, 2, 0, 1, 1);

        _codewords = new QSpinBox(PDF417Config);
        _codewords->setObjectName(QString::fromUtf8("_codewords"));
        _codewords->setMinimum(928);
        _codewords->setMaximum(1800);
        _codewords->setValue(928);

        gridLayout->addWidget(_codewords, 2, 1, 1, 1);

        _standard = new QRadioButton(PDF417Config);
        _standard->setObjectName(QString::fromUtf8("_standard"));
        _standard->setChecked(true);

        gridLayout->addWidget(_standard, 3, 0, 1, 1);

        _truncated = new QRadioButton(PDF417Config);
        _truncated->setObjectName(QString::fromUtf8("_truncated"));

        gridLayout->addWidget(_truncated, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

#if QT_CONFIG(shortcut)
        _columnsLit->setBuddy(_columns);
        _errorCorrectionLit->setBuddy(_errorCorrection);
        _codewordsLit->setBuddy(_codewords);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PDF417Config);

        QMetaObject::connectSlotsByName(PDF417Config);
    } // setupUi

    void retranslateUi(QWidget *PDF417Config)
    {
        PDF417Config->setWindowTitle(QCoreApplication::translate("PDF417Config", "Form", nullptr));
        _columnsLit->setText(QCoreApplication::translate("PDF417Config", "&Number of Data Columns:", nullptr));
        _columns->setItemText(0, QCoreApplication::translate("PDF417Config", "Automatic", nullptr));
        _columns->setItemText(1, QCoreApplication::translate("PDF417Config", "1", nullptr));
        _columns->setItemText(2, QCoreApplication::translate("PDF417Config", "2", nullptr));
        _columns->setItemText(3, QCoreApplication::translate("PDF417Config", "3", nullptr));
        _columns->setItemText(4, QCoreApplication::translate("PDF417Config", "4", nullptr));
        _columns->setItemText(5, QCoreApplication::translate("PDF417Config", "5", nullptr));
        _columns->setItemText(6, QCoreApplication::translate("PDF417Config", "6", nullptr));
        _columns->setItemText(7, QCoreApplication::translate("PDF417Config", "7", nullptr));
        _columns->setItemText(8, QCoreApplication::translate("PDF417Config", "8", nullptr));
        _columns->setItemText(9, QCoreApplication::translate("PDF417Config", "9", nullptr));
        _columns->setItemText(10, QCoreApplication::translate("PDF417Config", "10", nullptr));
        _columns->setItemText(11, QCoreApplication::translate("PDF417Config", "11", nullptr));
        _columns->setItemText(12, QCoreApplication::translate("PDF417Config", "12", nullptr));
        _columns->setItemText(13, QCoreApplication::translate("PDF417Config", "13", nullptr));
        _columns->setItemText(14, QCoreApplication::translate("PDF417Config", "14", nullptr));
        _columns->setItemText(15, QCoreApplication::translate("PDF417Config", "15", nullptr));
        _columns->setItemText(16, QCoreApplication::translate("PDF417Config", "16", nullptr));
        _columns->setItemText(17, QCoreApplication::translate("PDF417Config", "17", nullptr));
        _columns->setItemText(18, QCoreApplication::translate("PDF417Config", "18", nullptr));
        _columns->setItemText(19, QCoreApplication::translate("PDF417Config", "19", nullptr));
        _columns->setItemText(20, QCoreApplication::translate("PDF417Config", "20", nullptr));

        _errorCorrectionLit->setText(QCoreApplication::translate("PDF417Config", "&Error Correction Capacity:", nullptr));
        _errorCorrection->setItemText(0, QCoreApplication::translate("PDF417Config", "Automatic", nullptr));
        _errorCorrection->setItemText(1, QCoreApplication::translate("PDF417Config", "2 words", nullptr));
        _errorCorrection->setItemText(2, QCoreApplication::translate("PDF417Config", "4 words", nullptr));
        _errorCorrection->setItemText(3, QCoreApplication::translate("PDF417Config", "8 words", nullptr));
        _errorCorrection->setItemText(4, QCoreApplication::translate("PDF417Config", "16 words", nullptr));
        _errorCorrection->setItemText(5, QCoreApplication::translate("PDF417Config", "32 words", nullptr));
        _errorCorrection->setItemText(6, QCoreApplication::translate("PDF417Config", "64 words", nullptr));
        _errorCorrection->setItemText(7, QCoreApplication::translate("PDF417Config", "128 words", nullptr));
        _errorCorrection->setItemText(8, QCoreApplication::translate("PDF417Config", "256 words", nullptr));
        _errorCorrection->setItemText(9, QCoreApplication::translate("PDF417Config", "512 words", nullptr));

        _codewordsLit->setText(QCoreApplication::translate("PDF417Config", "Ma&ximum Codeword Lengh:", nullptr));
        _standard->setText(QCoreApplication::translate("PDF417Config", "S&tandard", nullptr));
        _truncated->setText(QCoreApplication::translate("PDF417Config", "&Truncated", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDF417Config: public Ui_PDF417Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDF417CONFIG_H
