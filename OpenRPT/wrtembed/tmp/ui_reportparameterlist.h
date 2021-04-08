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
** Form generated from reading UI file 'reportparameterlist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPARAMETERLIST_H
#define UI_REPORTPARAMETERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReportParameterList
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *_lblParameters;
    QListWidget *_lbParameters;
    QVBoxLayout *vboxLayout1;
    QPushButton *_btnClose;
    QFrame *_line;
    QPushButton *_btnAdd;
    QPushButton *_btnEdit;
    QPushButton *_btnDelete;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *ReportParameterList)
    {
        if (ReportParameterList->objectName().isEmpty())
            ReportParameterList->setObjectName(QString::fromUtf8("ReportParameterList"));
        ReportParameterList->resize(388, 256);
        hboxLayout = new QHBoxLayout(ReportParameterList);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _lblParameters = new QLabel(ReportParameterList);
        _lblParameters->setObjectName(QString::fromUtf8("_lblParameters"));

        vboxLayout->addWidget(_lblParameters);

        _lbParameters = new QListWidget(ReportParameterList);
        _lbParameters->setObjectName(QString::fromUtf8("_lbParameters"));

        vboxLayout->addWidget(_lbParameters);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        _btnClose = new QPushButton(ReportParameterList);
        _btnClose->setObjectName(QString::fromUtf8("_btnClose"));

        vboxLayout1->addWidget(_btnClose);

        _line = new QFrame(ReportParameterList);
        _line->setObjectName(QString::fromUtf8("_line"));
        _line->setFrameShape(QFrame::HLine);
        _line->setFrameShadow(QFrame::Sunken);
        _line->setFrameShape(QFrame::HLine);

        vboxLayout1->addWidget(_line);

        _btnAdd = new QPushButton(ReportParameterList);
        _btnAdd->setObjectName(QString::fromUtf8("_btnAdd"));

        vboxLayout1->addWidget(_btnAdd);

        _btnEdit = new QPushButton(ReportParameterList);
        _btnEdit->setObjectName(QString::fromUtf8("_btnEdit"));

        vboxLayout1->addWidget(_btnEdit);

        _btnDelete = new QPushButton(ReportParameterList);
        _btnDelete->setObjectName(QString::fromUtf8("_btnDelete"));

        vboxLayout1->addWidget(_btnDelete);

        spacerItem = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

#if QT_CONFIG(shortcut)
        _lblParameters->setBuddy(_lbParameters);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(_lbParameters, _btnAdd);
        QWidget::setTabOrder(_btnAdd, _btnEdit);
        QWidget::setTabOrder(_btnEdit, _btnDelete);
        QWidget::setTabOrder(_btnDelete, _btnClose);

        retranslateUi(ReportParameterList);
        QObject::connect(_btnClose, SIGNAL(clicked()), ReportParameterList, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReportParameterList);
    } // setupUi

    void retranslateUi(QDialog *ReportParameterList)
    {
        ReportParameterList->setWindowTitle(QCoreApplication::translate("ReportParameterList", "Parameter List", nullptr));
        _lblParameters->setText(QCoreApplication::translate("ReportParameterList", "Parameters:", nullptr));
        _btnClose->setText(QCoreApplication::translate("ReportParameterList", "&Close", nullptr));
        _btnAdd->setText(QCoreApplication::translate("ReportParameterList", "&Add", nullptr));
        _btnEdit->setText(QCoreApplication::translate("ReportParameterList", "&Edit", nullptr));
        _btnDelete->setText(QCoreApplication::translate("ReportParameterList", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportParameterList: public Ui_ReportParameterList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPARAMETERLIST_H
