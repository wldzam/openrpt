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
** Form generated from reading UI file 'parameteredit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETEREDIT_H
#define UI_PARAMETEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParameterEdit
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *_table;
    QVBoxLayout *vboxLayout;
    QPushButton *_ok;
    QPushButton *_cancel;
    QFrame *_buttonDiv;
    QPushButton *_new;
    QPushButton *_edit;
    QPushButton *_list;
    QPushButton *_delete;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ParameterEdit)
    {
        if (ParameterEdit->objectName().isEmpty())
            ParameterEdit->setObjectName(QString::fromUtf8("ParameterEdit"));
        ParameterEdit->resize(600, 304);
        horizontalLayout = new QHBoxLayout(ParameterEdit);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _table = new QTableWidget(ParameterEdit);
        if (_table->columnCount() < 4)
            _table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        _table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        _table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        _table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        _table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        _table->setObjectName(QString::fromUtf8("_table"));

        horizontalLayout->addWidget(_table);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _ok = new QPushButton(ParameterEdit);
        _ok->setObjectName(QString::fromUtf8("_ok"));

        vboxLayout->addWidget(_ok);

        _cancel = new QPushButton(ParameterEdit);
        _cancel->setObjectName(QString::fromUtf8("_cancel"));

        vboxLayout->addWidget(_cancel);

        _buttonDiv = new QFrame(ParameterEdit);
        _buttonDiv->setObjectName(QString::fromUtf8("_buttonDiv"));
        _buttonDiv->setFrameShape(QFrame::HLine);
        _buttonDiv->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(_buttonDiv);

        _new = new QPushButton(ParameterEdit);
        _new->setObjectName(QString::fromUtf8("_new"));

        vboxLayout->addWidget(_new);

        _edit = new QPushButton(ParameterEdit);
        _edit->setObjectName(QString::fromUtf8("_edit"));

        vboxLayout->addWidget(_edit);

        _list = new QPushButton(ParameterEdit);
        _list->setObjectName(QString::fromUtf8("_list"));

        vboxLayout->addWidget(_list);

        _delete = new QPushButton(ParameterEdit);
        _delete->setObjectName(QString::fromUtf8("_delete"));

        vboxLayout->addWidget(_delete);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        horizontalLayout->addLayout(vboxLayout);

        QWidget::setTabOrder(_table, _ok);
        QWidget::setTabOrder(_ok, _cancel);
        QWidget::setTabOrder(_cancel, _new);
        QWidget::setTabOrder(_new, _edit);
        QWidget::setTabOrder(_edit, _list);
        QWidget::setTabOrder(_list, _delete);

        retranslateUi(ParameterEdit);

        QMetaObject::connectSlotsByName(ParameterEdit);
    } // setupUi

    void retranslateUi(QWidget *ParameterEdit)
    {
        ParameterEdit->setWindowTitle(QCoreApplication::translate("ParameterEdit", "Parameter List", nullptr));
        QTableWidgetItem *___qtablewidgetitem = _table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ParameterEdit", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = _table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ParameterEdit", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = _table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ParameterEdit", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = _table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ParameterEdit", "Value", nullptr));
        _ok->setText(QCoreApplication::translate("ParameterEdit", "&OK", nullptr));
#if QT_CONFIG(shortcut)
        _ok->setShortcut(QCoreApplication::translate("ParameterEdit", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        _cancel->setText(QCoreApplication::translate("ParameterEdit", "&Cancel", nullptr));
#if QT_CONFIG(shortcut)
        _cancel->setShortcut(QCoreApplication::translate("ParameterEdit", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        _new->setText(QCoreApplication::translate("ParameterEdit", "&New", nullptr));
#if QT_CONFIG(shortcut)
        _new->setShortcut(QCoreApplication::translate("ParameterEdit", "Alt+N", nullptr));
#endif // QT_CONFIG(shortcut)
        _edit->setText(QCoreApplication::translate("ParameterEdit", "&Edit", nullptr));
#if QT_CONFIG(shortcut)
        _edit->setShortcut(QCoreApplication::translate("ParameterEdit", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        _list->setText(QCoreApplication::translate("ParameterEdit", "List", nullptr));
#if QT_CONFIG(shortcut)
        _list->setShortcut(QCoreApplication::translate("ParameterEdit", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        _delete->setText(QCoreApplication::translate("ParameterEdit", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParameterEdit: public Ui_ParameterEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETEREDIT_H
