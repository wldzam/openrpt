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
** Form generated from reading UI file 'reportparameterlistitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPARAMETERLISTITEM_H
#define UI_REPORTPARAMETERLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReportParameterListItem
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *_lblLabel;
    QLabel *_lblValue;
    QLineEdit *_value;
    QLineEdit *_label;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout2;
    QPushButton *_accept;
    QPushButton *_cancel;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *ReportParameterListItem)
    {
        if (ReportParameterListItem->objectName().isEmpty())
            ReportParameterListItem->setObjectName(QString::fromUtf8("ReportParameterListItem"));
        ReportParameterListItem->resize(377, 89);
        hboxLayout = new QHBoxLayout(ReportParameterListItem);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _lblLabel = new QLabel(ReportParameterListItem);
        _lblLabel->setObjectName(QString::fromUtf8("_lblLabel"));
        _lblLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_lblLabel, 1, 0, 1, 1);

        _lblValue = new QLabel(ReportParameterListItem);
        _lblValue->setObjectName(QString::fromUtf8("_lblValue"));
        _lblValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_lblValue, 0, 0, 1, 1);

        _value = new QLineEdit(ReportParameterListItem);
        _value->setObjectName(QString::fromUtf8("_value"));

        gridLayout->addWidget(_value, 0, 1, 1, 1);

        _label = new QLineEdit(ReportParameterListItem);
        _label->setObjectName(QString::fromUtf8("_label"));

        gridLayout->addWidget(_label, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        _accept = new QPushButton(ReportParameterListItem);
        _accept->setObjectName(QString::fromUtf8("_accept"));

        vboxLayout2->addWidget(_accept);

        _cancel = new QPushButton(ReportParameterListItem);
        _cancel->setObjectName(QString::fromUtf8("_cancel"));

        vboxLayout2->addWidget(_cancel);


        vboxLayout1->addLayout(vboxLayout2);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout1);


        retranslateUi(ReportParameterListItem);
        QObject::connect(_cancel, SIGNAL(clicked()), ReportParameterListItem, SLOT(reject()));
        QObject::connect(_accept, SIGNAL(clicked()), ReportParameterListItem, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReportParameterListItem);
    } // setupUi

    void retranslateUi(QDialog *ReportParameterListItem)
    {
        ReportParameterListItem->setWindowTitle(QCoreApplication::translate("ReportParameterListItem", "List Item", nullptr));
        _lblLabel->setText(QCoreApplication::translate("ReportParameterListItem", "Label:", nullptr));
        _lblValue->setText(QCoreApplication::translate("ReportParameterListItem", "Value:", nullptr));
        _accept->setText(QCoreApplication::translate("ReportParameterListItem", "&OK", nullptr));
#if QT_CONFIG(shortcut)
        _accept->setShortcut(QCoreApplication::translate("ReportParameterListItem", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        _cancel->setText(QCoreApplication::translate("ReportParameterListItem", "&Cancel", nullptr));
#if QT_CONFIG(shortcut)
        _cancel->setShortcut(QCoreApplication::translate("ReportParameterListItem", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class ReportParameterListItem: public Ui_ReportParameterListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPARAMETERLISTITEM_H
