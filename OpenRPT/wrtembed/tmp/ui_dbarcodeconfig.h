/********************************************************************************
** Form generated from reading UI file 'dbarcodeconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBARCODECONFIG_H
#define UI_DBARCODECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBarcodeConfig
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSlider *_SliderMaxVal;
    QLabel *_LMaxVal;

    void setupUi(QWidget *DBarcodeConfig)
    {
        if (DBarcodeConfig->objectName().isEmpty())
            DBarcodeConfig->setObjectName(QString::fromUtf8("DBarcodeConfig"));
        DBarcodeConfig->resize(176, 84);
        gridLayout = new QGridLayout(DBarcodeConfig);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(DBarcodeConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _SliderMaxVal = new QSlider(groupBox);
        _SliderMaxVal->setObjectName(QString::fromUtf8("_SliderMaxVal"));
        _SliderMaxVal->setMinimum(1);
        _SliderMaxVal->setValue(5);
        _SliderMaxVal->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(_SliderMaxVal);

        _LMaxVal = new QLabel(groupBox);
        _LMaxVal->setObjectName(QString::fromUtf8("_LMaxVal"));

        horizontalLayout->addWidget(_LMaxVal);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(DBarcodeConfig);
        QObject::connect(_SliderMaxVal, SIGNAL(valueChanged(int)), _LMaxVal, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(DBarcodeConfig);
    } // setupUi

    void retranslateUi(QWidget *DBarcodeConfig)
    {
        DBarcodeConfig->setWindowTitle(QCoreApplication::translate("DBarcodeConfig", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DBarcodeConfig", "Maximum Length of Value", nullptr));
        _LMaxVal->setText(QCoreApplication::translate("DBarcodeConfig", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBarcodeConfig: public Ui_DBarcodeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBARCODECONFIG_H
