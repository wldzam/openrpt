/*
 * OpenRPT report writer and rendering engine
 * Copyright (C) 2001-2014 by OpenMFG, LLC
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * Please contact info@openmfg.com with any questions on this license.
*/

/********************************************************************************
** Form generated from reading UI file 'editpreferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPREFERENCES_H
#define UI_EDITPREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditPreferences
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *_cbLanguage;
    QGroupBox *_bgDefaultFont;
    QHBoxLayout *hboxLayout2;
    QLineEdit *_leDefaultFont;
    QPushButton *_btnChangeFont;
    QGroupBox *_gbGridOptions;
    QVBoxLayout *vboxLayout2;
    QCheckBox *_cbShowGrid;
    QCheckBox *_cbSnapGrid;
    QGroupBox *_gbGridSize;
    QGridLayout *gridLayout;
    QLabel *_lblGridSizeX;
    QLabel *_lblGridSizeY;
    QLineEdit *_leGridSizeX;
    QLineEdit *_leGridSizeY;
    QCheckBox *_cbGridSymetrical;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout3;
    QPushButton *_btnOk;
    QPushButton *_btnCancel;
    QSpacerItem *spacerItem2;

    void setupUi(QDialog *EditPreferences)
    {
        if (EditPreferences->objectName().isEmpty())
            EditPreferences->setObjectName(QString::fromUtf8("EditPreferences"));
        EditPreferences->resize(462, 361);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditPreferences->sizePolicy().hasHeightForWidth());
        EditPreferences->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(EditPreferences);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(EditPreferences);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(label);

        _cbLanguage = new QComboBox(EditPreferences);
        _cbLanguage->setObjectName(QString::fromUtf8("_cbLanguage"));

        hboxLayout1->addWidget(_cbLanguage);


        vboxLayout1->addLayout(hboxLayout1);

        _bgDefaultFont = new QGroupBox(EditPreferences);
        _bgDefaultFont->setObjectName(QString::fromUtf8("_bgDefaultFont"));
        hboxLayout2 = new QHBoxLayout(_bgDefaultFont);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        _leDefaultFont = new QLineEdit(_bgDefaultFont);
        _leDefaultFont->setObjectName(QString::fromUtf8("_leDefaultFont"));
        _leDefaultFont->setFrame(true);
        _leDefaultFont->setReadOnly(true);

        hboxLayout2->addWidget(_leDefaultFont);

        _btnChangeFont = new QPushButton(_bgDefaultFont);
        _btnChangeFont->setObjectName(QString::fromUtf8("_btnChangeFont"));

        hboxLayout2->addWidget(_btnChangeFont);


        vboxLayout1->addWidget(_bgDefaultFont);

        _gbGridOptions = new QGroupBox(EditPreferences);
        _gbGridOptions->setObjectName(QString::fromUtf8("_gbGridOptions"));
        vboxLayout2 = new QVBoxLayout(_gbGridOptions);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        _cbShowGrid = new QCheckBox(_gbGridOptions);
        _cbShowGrid->setObjectName(QString::fromUtf8("_cbShowGrid"));

        vboxLayout2->addWidget(_cbShowGrid);

        _cbSnapGrid = new QCheckBox(_gbGridOptions);
        _cbSnapGrid->setObjectName(QString::fromUtf8("_cbSnapGrid"));

        vboxLayout2->addWidget(_cbSnapGrid);

        _gbGridSize = new QGroupBox(_gbGridOptions);
        _gbGridSize->setObjectName(QString::fromUtf8("_gbGridSize"));
        sizePolicy.setHeightForWidth(_gbGridSize->sizePolicy().hasHeightForWidth());
        _gbGridSize->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(_gbGridSize);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        _lblGridSizeX = new QLabel(_gbGridSize);
        _lblGridSizeX->setObjectName(QString::fromUtf8("_lblGridSizeX"));
        _lblGridSizeX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_lblGridSizeX, 0, 0, 1, 1);

        _lblGridSizeY = new QLabel(_gbGridSize);
        _lblGridSizeY->setObjectName(QString::fromUtf8("_lblGridSizeY"));
        _lblGridSizeY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_lblGridSizeY, 1, 0, 1, 1);

        _leGridSizeX = new QLineEdit(_gbGridSize);
        _leGridSizeX->setObjectName(QString::fromUtf8("_leGridSizeX"));

        gridLayout->addWidget(_leGridSizeX, 0, 1, 1, 1);

        _leGridSizeY = new QLineEdit(_gbGridSize);
        _leGridSizeY->setObjectName(QString::fromUtf8("_leGridSizeY"));

        gridLayout->addWidget(_leGridSizeY, 1, 1, 1, 1);

        _cbGridSymetrical = new QCheckBox(_gbGridSize);
        _cbGridSymetrical->setObjectName(QString::fromUtf8("_cbGridSymetrical"));

        gridLayout->addWidget(_cbGridSymetrical, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);


        vboxLayout2->addWidget(_gbGridSize);


        vboxLayout1->addWidget(_gbGridOptions);


        vboxLayout->addLayout(vboxLayout1);

        spacerItem1 = new QSpacerItem(359, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        _btnOk = new QPushButton(EditPreferences);
        _btnOk->setObjectName(QString::fromUtf8("_btnOk"));

        vboxLayout3->addWidget(_btnOk);

        _btnCancel = new QPushButton(EditPreferences);
        _btnCancel->setObjectName(QString::fromUtf8("_btnCancel"));

        vboxLayout3->addWidget(_btnCancel);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout3);

#if QT_CONFIG(shortcut)
        label->setBuddy(_cbLanguage);
        _lblGridSizeX->setBuddy(_leGridSizeX);
        _lblGridSizeY->setBuddy(_leGridSizeY);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditPreferences);
        QObject::connect(_btnCancel, SIGNAL(clicked()), EditPreferences, SLOT(reject()));
        QObject::connect(_btnOk, SIGNAL(clicked()), EditPreferences, SLOT(accept()));
        QObject::connect(_cbGridSymetrical, SIGNAL(toggled(bool)), _lblGridSizeY, SLOT(setDisabled(bool)));
        QObject::connect(_cbGridSymetrical, SIGNAL(toggled(bool)), _leGridSizeY, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(EditPreferences);
    } // setupUi

    void retranslateUi(QDialog *EditPreferences)
    {
        EditPreferences->setWindowTitle(QCoreApplication::translate("EditPreferences", "Preferences", nullptr));
        label->setText(QCoreApplication::translate("EditPreferences", "Language :", nullptr));
        _bgDefaultFont->setTitle(QCoreApplication::translate("EditPreferences", "Default Font", nullptr));
        _btnChangeFont->setText(QCoreApplication::translate("EditPreferences", "&Font...", nullptr));
        _gbGridOptions->setTitle(QCoreApplication::translate("EditPreferences", "Grid Options", nullptr));
        _cbShowGrid->setText(QCoreApplication::translate("EditPreferences", "Show grid", nullptr));
        _cbSnapGrid->setText(QCoreApplication::translate("EditPreferences", "Snap to grid", nullptr));
        _gbGridSize->setTitle(QCoreApplication::translate("EditPreferences", "Grid Size Interval", nullptr));
        _lblGridSizeX->setText(QCoreApplication::translate("EditPreferences", "X Interval:", nullptr));
        _lblGridSizeY->setText(QCoreApplication::translate("EditPreferences", "Y Interval:", nullptr));
        _cbGridSymetrical->setText(QCoreApplication::translate("EditPreferences", "Symetrical values", nullptr));
        _btnOk->setText(QCoreApplication::translate("EditPreferences", "&OK", nullptr));
        _btnCancel->setText(QCoreApplication::translate("EditPreferences", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPreferences: public Ui_EditPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPREFERENCES_H
