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
** Form generated from reading UI file 'dbfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBFILEDIALOG_H
#define UI_DBFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DBFileDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *_list;
    QHBoxLayout *hboxLayout;
    QLabel *_lblReport;
    QLineEdit *_name;
    QLabel *_gradeLabel;
    QSpinBox *_grade;
    QVBoxLayout *vboxLayout;
    QPushButton *_btnOk;
    QPushButton *_btnCancel;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *DBFileDialog)
    {
        if (DBFileDialog->objectName().isEmpty())
            DBFileDialog->setObjectName(QString::fromUtf8("DBFileDialog"));
        DBFileDialog->resize(506, 291);
        horizontalLayout = new QHBoxLayout(DBFileDialog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _list = new QTreeWidget(DBFileDialog);
        _list->setObjectName(QString::fromUtf8("_list"));
        _list->setColumnCount(2);

        verticalLayout->addWidget(_list);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        _lblReport = new QLabel(DBFileDialog);
        _lblReport->setObjectName(QString::fromUtf8("_lblReport"));

        hboxLayout->addWidget(_lblReport);

        _name = new QLineEdit(DBFileDialog);
        _name->setObjectName(QString::fromUtf8("_name"));

        hboxLayout->addWidget(_name);

        _gradeLabel = new QLabel(DBFileDialog);
        _gradeLabel->setObjectName(QString::fromUtf8("_gradeLabel"));
        _gradeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(_gradeLabel);

        _grade = new QSpinBox(DBFileDialog);
        _grade->setObjectName(QString::fromUtf8("_grade"));
        _grade->setMinimum(-1);
        _grade->setValue(-1);

        hboxLayout->addWidget(_grade);


        verticalLayout->addLayout(hboxLayout);


        horizontalLayout->addLayout(verticalLayout);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _btnOk = new QPushButton(DBFileDialog);
        _btnOk->setObjectName(QString::fromUtf8("_btnOk"));

        vboxLayout->addWidget(_btnOk);

        _btnCancel = new QPushButton(DBFileDialog);
        _btnCancel->setObjectName(QString::fromUtf8("_btnCancel"));

        vboxLayout->addWidget(_btnCancel);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        horizontalLayout->addLayout(vboxLayout);

#if QT_CONFIG(shortcut)
        _lblReport->setBuddy(_name);
        _gradeLabel->setBuddy(_grade);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(_name, _grade);
        QWidget::setTabOrder(_grade, _btnOk);
        QWidget::setTabOrder(_btnOk, _btnCancel);
        QWidget::setTabOrder(_btnCancel, _list);

        retranslateUi(DBFileDialog);
        QObject::connect(_btnOk, SIGNAL(clicked()), DBFileDialog, SLOT(accept()));
        QObject::connect(_btnCancel, SIGNAL(clicked()), DBFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DBFileDialog);
    } // setupUi

    void retranslateUi(QDialog *DBFileDialog)
    {
        DBFileDialog->setWindowTitle(QCoreApplication::translate("DBFileDialog", "Database File", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = _list->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("DBFileDialog", "Grade", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("DBFileDialog", "Name", nullptr));
        _lblReport->setText(QCoreApplication::translate("DBFileDialog", "Report Name:", nullptr));
        _gradeLabel->setText(QCoreApplication::translate("DBFileDialog", "Grade:", nullptr));
        _grade->setSpecialValueText(QCoreApplication::translate("DBFileDialog", "##", nullptr));
        _btnOk->setText(QCoreApplication::translate("DBFileDialog", "&OK", nullptr));
        _btnCancel->setText(QCoreApplication::translate("DBFileDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBFileDialog: public Ui_DBFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBFILEDIALOG_H
