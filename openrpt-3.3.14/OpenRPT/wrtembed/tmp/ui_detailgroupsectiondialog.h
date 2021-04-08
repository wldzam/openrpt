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
** Form generated from reading UI file 'detailgroupsectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILGROUPSECTIONDIALOG_H
#define UI_DETAILGROUPSECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DetailGroupSectionDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLineEdit *tbName;
    QLabel *lblColumn;
    QLabel *lblName;
    QLineEdit *tbColumn;
    QCheckBox *cbHead;
    QCheckBox *cbFoot;
    QCheckBox *breakAfterFooter;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *btnOk;
    QPushButton *bntCancel;

    void setupUi(QDialog *DetailGroupSectionDialog)
    {
        if (DetailGroupSectionDialog->objectName().isEmpty())
            DetailGroupSectionDialog->setObjectName(QString::fromUtf8("DetailGroupSectionDialog"));
        DetailGroupSectionDialog->resize(261, 204);
        vboxLayout = new QVBoxLayout(DetailGroupSectionDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tbName = new QLineEdit(DetailGroupSectionDialog);
        tbName->setObjectName(QString::fromUtf8("tbName"));

        gridLayout->addWidget(tbName, 0, 1, 1, 1);

        lblColumn = new QLabel(DetailGroupSectionDialog);
        lblColumn->setObjectName(QString::fromUtf8("lblColumn"));

        gridLayout->addWidget(lblColumn, 1, 0, 1, 1);

        lblName = new QLabel(DetailGroupSectionDialog);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        gridLayout->addWidget(lblName, 0, 0, 1, 1);

        tbColumn = new QLineEdit(DetailGroupSectionDialog);
        tbColumn->setObjectName(QString::fromUtf8("tbColumn"));

        gridLayout->addWidget(tbColumn, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        cbHead = new QCheckBox(DetailGroupSectionDialog);
        cbHead->setObjectName(QString::fromUtf8("cbHead"));

        vboxLayout->addWidget(cbHead);

        cbFoot = new QCheckBox(DetailGroupSectionDialog);
        cbFoot->setObjectName(QString::fromUtf8("cbFoot"));

        vboxLayout->addWidget(cbFoot);

        breakAfterFooter = new QCheckBox(DetailGroupSectionDialog);
        breakAfterFooter->setObjectName(QString::fromUtf8("breakAfterFooter"));

        vboxLayout->addWidget(breakAfterFooter);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        btnOk = new QPushButton(DetailGroupSectionDialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setAutoDefault(true);

        hboxLayout->addWidget(btnOk);

        bntCancel = new QPushButton(DetailGroupSectionDialog);
        bntCancel->setObjectName(QString::fromUtf8("bntCancel"));

        hboxLayout->addWidget(bntCancel);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(tbName, tbColumn);
        QWidget::setTabOrder(tbColumn, cbHead);
        QWidget::setTabOrder(cbHead, cbFoot);
        QWidget::setTabOrder(cbFoot, breakAfterFooter);
        QWidget::setTabOrder(breakAfterFooter, btnOk);
        QWidget::setTabOrder(btnOk, bntCancel);

        retranslateUi(DetailGroupSectionDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), DetailGroupSectionDialog, SLOT(accept()));
        QObject::connect(bntCancel, SIGNAL(clicked()), DetailGroupSectionDialog, SLOT(reject()));

        btnOk->setDefault(true);


        QMetaObject::connectSlotsByName(DetailGroupSectionDialog);
    } // setupUi

    void retranslateUi(QDialog *DetailGroupSectionDialog)
    {
        DetailGroupSectionDialog->setWindowTitle(QCoreApplication::translate("DetailGroupSectionDialog", "Group Section Editor", nullptr));
        lblColumn->setText(QCoreApplication::translate("DetailGroupSectionDialog", "Column:", nullptr));
        lblName->setText(QCoreApplication::translate("DetailGroupSectionDialog", "Group Name:", nullptr));
        cbHead->setText(QCoreApplication::translate("DetailGroupSectionDialog", "Show Group Header", nullptr));
        cbFoot->setText(QCoreApplication::translate("DetailGroupSectionDialog", "Show Group Footer", nullptr));
        breakAfterFooter->setText(QCoreApplication::translate("DetailGroupSectionDialog", "Insert Page Break After this Footer", nullptr));
        btnOk->setText(QCoreApplication::translate("DetailGroupSectionDialog", "&OK", nullptr));
        bntCancel->setText(QCoreApplication::translate("DetailGroupSectionDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailGroupSectionDialog: public Ui_DetailGroupSectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILGROUPSECTIONDIALOG_H
