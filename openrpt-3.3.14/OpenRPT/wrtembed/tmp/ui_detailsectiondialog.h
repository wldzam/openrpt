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
** Form generated from reading UI file 'detailsectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSECTIONDIALOG_H
#define UI_DETAILSECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "querycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_DetailSectionDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *TextLabel1;
    QLineEdit *tbName;
    QLabel *TextLabel2;
    QueryComboBox *cbQuery;
    QCheckBox *breakAtEnd;
    QGroupBox *GroupBox1;
    QHBoxLayout *hboxLayout;
    QListWidget *lbGroups;
    QVBoxLayout *vboxLayout1;
    QPushButton *btnAdd;
    QPushButton *btnEdit;
    QPushButton *btnRemove;
    QPushButton *btnMoveUp;
    QPushButton *brnMoveDown;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;

    void setupUi(QDialog *DetailSectionDialog)
    {
        if (DetailSectionDialog->objectName().isEmpty())
            DetailSectionDialog->setObjectName(QString::fromUtf8("DetailSectionDialog"));
        DetailSectionDialog->resize(294, 369);
        DetailSectionDialog->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(DetailSectionDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel1 = new QLabel(DetailSectionDialog);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout->addWidget(TextLabel1, 0, 0, 1, 1);

        tbName = new QLineEdit(DetailSectionDialog);
        tbName->setObjectName(QString::fromUtf8("tbName"));

        gridLayout->addWidget(tbName, 0, 1, 1, 1);

        TextLabel2 = new QLabel(DetailSectionDialog);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout->addWidget(TextLabel2, 1, 0, 1, 1);

        cbQuery = new QueryComboBox(DetailSectionDialog);
        cbQuery->setObjectName(QString::fromUtf8("cbQuery"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbQuery->sizePolicy().hasHeightForWidth());
        cbQuery->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbQuery, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        breakAtEnd = new QCheckBox(DetailSectionDialog);
        breakAtEnd->setObjectName(QString::fromUtf8("breakAtEnd"));

        vboxLayout->addWidget(breakAtEnd);

        GroupBox1 = new QGroupBox(DetailSectionDialog);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        hboxLayout = new QHBoxLayout(GroupBox1);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        lbGroups = new QListWidget(GroupBox1);
        lbGroups->setObjectName(QString::fromUtf8("lbGroups"));

        hboxLayout->addWidget(lbGroups);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(GroupBox1);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        vboxLayout1->addWidget(btnAdd);

        btnEdit = new QPushButton(GroupBox1);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        vboxLayout1->addWidget(btnEdit);

        btnRemove = new QPushButton(GroupBox1);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));

        vboxLayout1->addWidget(btnRemove);

        btnMoveUp = new QPushButton(GroupBox1);
        btnMoveUp->setObjectName(QString::fromUtf8("btnMoveUp"));

        vboxLayout1->addWidget(btnMoveUp);

        brnMoveDown = new QPushButton(GroupBox1);
        brnMoveDown->setObjectName(QString::fromUtf8("brnMoveDown"));

        vboxLayout1->addWidget(brnMoveDown);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addWidget(GroupBox1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        buttonOk = new QPushButton(DetailSectionDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);

        hboxLayout1->addWidget(buttonOk);


        vboxLayout->addLayout(hboxLayout1);

#if QT_CONFIG(shortcut)
        TextLabel1->setBuddy(tbName);
        TextLabel2->setBuddy(cbQuery);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tbName, cbQuery);
        QWidget::setTabOrder(cbQuery, breakAtEnd);
        QWidget::setTabOrder(breakAtEnd, lbGroups);
        QWidget::setTabOrder(lbGroups, btnAdd);
        QWidget::setTabOrder(btnAdd, btnEdit);
        QWidget::setTabOrder(btnEdit, btnRemove);
        QWidget::setTabOrder(btnRemove, btnMoveUp);
        QWidget::setTabOrder(btnMoveUp, brnMoveDown);
        QWidget::setTabOrder(brnMoveDown, buttonOk);

        retranslateUi(DetailSectionDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), DetailSectionDialog, SLOT(accept()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(DetailSectionDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailSectionDialog)
    {
        DetailSectionDialog->setWindowTitle(QCoreApplication::translate("DetailSectionDialog", "Detail Section Properties", nullptr));
        TextLabel1->setText(QCoreApplication::translate("DetailSectionDialog", "Section Name:", nullptr));
        TextLabel2->setText(QCoreApplication::translate("DetailSectionDialog", "Query Source:", nullptr));
        breakAtEnd->setText(QCoreApplication::translate("DetailSectionDialog", "Insert Page Break At End of Last Section", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("DetailSectionDialog", "Group Sections", nullptr));
        btnAdd->setText(QCoreApplication::translate("DetailSectionDialog", "&Add", nullptr));
        btnEdit->setText(QCoreApplication::translate("DetailSectionDialog", "&Edit", nullptr));
        btnRemove->setText(QCoreApplication::translate("DetailSectionDialog", "Delete", nullptr));
        btnMoveUp->setText(QCoreApplication::translate("DetailSectionDialog", "Move &Up", nullptr));
        brnMoveDown->setText(QCoreApplication::translate("DetailSectionDialog", "Move &Down", nullptr));
        buttonOk->setText(QCoreApplication::translate("DetailSectionDialog", "&Close", nullptr));
#if QT_CONFIG(shortcut)
        buttonOk->setShortcut(QCoreApplication::translate("DetailSectionDialog", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class DetailSectionDialog: public Ui_DetailSectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSECTIONDIALOG_H
