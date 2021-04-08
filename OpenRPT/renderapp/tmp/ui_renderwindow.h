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
** Form generated from reading UI file 'renderwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERWINDOW_H
#define UI_RENDERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <parameter.h>
#include <QtXml/QDomProcessingInstruction>
#include <QtCore/QMutableMapIterator>
#include <QtCore/QVariantComparisonHelper>

QT_BEGIN_NAMESPACE

class Ui_RenderWindow
{
public:
    QAction *fileOpenAction;
    QAction *filePrintAction;
    QAction *fileExitAction;
    QAction *helpAboutAction;
    QAction *filePrintToPDFAction;
    QAction *fileLoadFromDB;
    QAction *filePrintPreviewAction;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *_reportLbl;
    QLabel *_report;
    QGroupBox *_reportInfo;
    QGridLayout *gridLayout;
    QTextEdit *_reportDescription;
    QLabel *_reportDescriptionLbl;
    QLabel *_reportNameLbl;
    QLabel *_reportTitle;
    QLabel *_reportName;
    QLabel *_reportTitleLbl;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout;
    QTableWidget *_table;
    QVBoxLayout *vboxLayout;
    QPushButton *_add;
    QPushButton *_edit;
    QPushButton *_list;
    QFrame *line2;
    QPushButton *_delete;
    QSpacerItem *spacerItem;
    QMenuBar *MenuBar;
    QMenu *helpMenu;
    QMenu *fileMenu;

    void setupUi(QMainWindow *RenderWindow)
    {
        if (RenderWindow->objectName().isEmpty())
            RenderWindow->setObjectName(QString::fromUtf8("RenderWindow"));
        RenderWindow->resize(605, 557);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        RenderWindow->setWindowIcon(icon);
        fileOpenAction = new QAction(RenderWindow);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("image1"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon1);
        filePrintAction = new QAction(RenderWindow);
        filePrintAction->setObjectName(QString::fromUtf8("filePrintAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image2"), QSize(), QIcon::Normal, QIcon::Off);
        filePrintAction->setIcon(icon2);
        fileExitAction = new QAction(RenderWindow);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        helpAboutAction = new QAction(RenderWindow);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        filePrintToPDFAction = new QAction(RenderWindow);
        filePrintToPDFAction->setObjectName(QString::fromUtf8("filePrintToPDFAction"));
        fileLoadFromDB = new QAction(RenderWindow);
        fileLoadFromDB->setObjectName(QString::fromUtf8("fileLoadFromDB"));
        filePrintPreviewAction = new QAction(RenderWindow);
        filePrintPreviewAction->setObjectName(QString::fromUtf8("filePrintPreviewAction"));
        widget = new QWidget(RenderWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        _reportLbl = new QLabel(widget);
        _reportLbl->setObjectName(QString::fromUtf8("_reportLbl"));
        _reportLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(_reportLbl);

        _report = new QLabel(widget);
        _report->setObjectName(QString::fromUtf8("_report"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(_report->sizePolicy().hasHeightForWidth());
        _report->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(_report);


        verticalLayout->addLayout(hboxLayout);

        _reportInfo = new QGroupBox(widget);
        _reportInfo->setObjectName(QString::fromUtf8("_reportInfo"));
        _reportInfo->setEnabled(false);
        gridLayout = new QGridLayout(_reportInfo);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _reportDescription = new QTextEdit(_reportInfo);
        _reportDescription->setObjectName(QString::fromUtf8("_reportDescription"));
        _reportDescription->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_reportDescription->sizePolicy().hasHeightForWidth());
        _reportDescription->setSizePolicy(sizePolicy1);
        _reportDescription->setReadOnly(true);

        gridLayout->addWidget(_reportDescription, 2, 1, 1, 1);

        _reportDescriptionLbl = new QLabel(_reportInfo);
        _reportDescriptionLbl->setObjectName(QString::fromUtf8("_reportDescriptionLbl"));
        _reportDescriptionLbl->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(_reportDescriptionLbl, 2, 0, 1, 1);

        _reportNameLbl = new QLabel(_reportInfo);
        _reportNameLbl->setObjectName(QString::fromUtf8("_reportNameLbl"));
        _reportNameLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_reportNameLbl, 0, 0, 1, 1);

        _reportTitle = new QLabel(_reportInfo);
        _reportTitle->setObjectName(QString::fromUtf8("_reportTitle"));

        gridLayout->addWidget(_reportTitle, 1, 1, 1, 1);

        _reportName = new QLabel(_reportInfo);
        _reportName->setObjectName(QString::fromUtf8("_reportName"));

        gridLayout->addWidget(_reportName, 0, 1, 1, 1);

        _reportTitleLbl = new QLabel(_reportInfo);
        _reportTitleLbl->setObjectName(QString::fromUtf8("_reportTitleLbl"));
        _reportTitleLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_reportTitleLbl, 1, 0, 1, 1);


        verticalLayout->addWidget(_reportInfo);

        groupBox1 = new QGroupBox(widget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        horizontalLayout = new QHBoxLayout(groupBox1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _table = new QTableWidget(groupBox1);
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
        _table->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(_table);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _add = new QPushButton(groupBox1);
        _add->setObjectName(QString::fromUtf8("_add"));

        vboxLayout->addWidget(_add);

        _edit = new QPushButton(groupBox1);
        _edit->setObjectName(QString::fromUtf8("_edit"));
        _edit->setEnabled(false);

        vboxLayout->addWidget(_edit);

        _list = new QPushButton(groupBox1);
        _list->setObjectName(QString::fromUtf8("_list"));
        _list->setEnabled(false);

        vboxLayout->addWidget(_list);

        line2 = new QFrame(groupBox1);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);
        line2->setFrameShape(QFrame::HLine);

        vboxLayout->addWidget(line2);

        _delete = new QPushButton(groupBox1);
        _delete->setObjectName(QString::fromUtf8("_delete"));
        _delete->setEnabled(false);

        vboxLayout->addWidget(_delete);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        horizontalLayout->addLayout(vboxLayout);


        verticalLayout->addWidget(groupBox1);

        RenderWindow->setCentralWidget(widget);
        MenuBar = new QMenuBar(RenderWindow);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 605, 26));
        helpMenu = new QMenu(MenuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        fileMenu = new QMenu(MenuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        RenderWindow->setMenuBar(MenuBar);
#if QT_CONFIG(shortcut)
        _reportDescriptionLbl->setBuddy(_reportDescription);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(_reportDescription, _add);
        QWidget::setTabOrder(_add, _edit);
        QWidget::setTabOrder(_edit, _list);
        QWidget::setTabOrder(_list, _delete);

        MenuBar->addAction(fileMenu->menuAction());
        MenuBar->addSeparator();
        MenuBar->addAction(helpMenu->menuAction());
        helpMenu->addAction(helpAboutAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileLoadFromDB);
        fileMenu->addSeparator();
        fileMenu->addAction(filePrintPreviewAction);
        fileMenu->addAction(filePrintAction);
        fileMenu->addAction(filePrintToPDFAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);

        retranslateUi(RenderWindow);

        QMetaObject::connectSlotsByName(RenderWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RenderWindow)
    {
        RenderWindow->setWindowTitle(QCoreApplication::translate("RenderWindow", "OpenRPT Renderer", nullptr));
        fileOpenAction->setText(QCoreApplication::translate("RenderWindow", "&Open...", nullptr));
        fileOpenAction->setIconText(QCoreApplication::translate("RenderWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        fileOpenAction->setShortcut(QCoreApplication::translate("RenderWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        filePrintAction->setText(QCoreApplication::translate("RenderWindow", "&Print...", nullptr));
        filePrintAction->setIconText(QCoreApplication::translate("RenderWindow", "Print", nullptr));
#if QT_CONFIG(shortcut)
        filePrintAction->setShortcut(QCoreApplication::translate("RenderWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        fileExitAction->setText(QCoreApplication::translate("RenderWindow", "E&xit", nullptr));
        fileExitAction->setIconText(QCoreApplication::translate("RenderWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        fileExitAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        helpAboutAction->setText(QCoreApplication::translate("RenderWindow", "&About", nullptr));
        helpAboutAction->setIconText(QCoreApplication::translate("RenderWindow", "About", nullptr));
#if QT_CONFIG(shortcut)
        helpAboutAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        filePrintToPDFAction->setText(QCoreApplication::translate("RenderWindow", "Print to PDF...", nullptr));
        fileLoadFromDB->setText(QCoreApplication::translate("RenderWindow", "Load from Database...", nullptr));
        filePrintPreviewAction->setText(QCoreApplication::translate("RenderWindow", "Print Preview...", nullptr));
        _reportLbl->setText(QCoreApplication::translate("RenderWindow", "Report Definition:", nullptr));
        _report->setText(QCoreApplication::translate("RenderWindow", "Not Loaded", nullptr));
        _reportInfo->setTitle(QCoreApplication::translate("RenderWindow", "Report Information", nullptr));
        _reportDescriptionLbl->setText(QCoreApplication::translate("RenderWindow", "Description:", nullptr));
        _reportNameLbl->setText(QCoreApplication::translate("RenderWindow", "Name:", nullptr));
        _reportTitle->setText(QString());
        _reportName->setText(QString());
        _reportTitleLbl->setText(QCoreApplication::translate("RenderWindow", "Title:", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("RenderWindow", "Parameters", nullptr));
        QTableWidgetItem *___qtablewidgetitem = _table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RenderWindow", "Active", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = _table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RenderWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = _table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RenderWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = _table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RenderWindow", "Value", nullptr));
        _add->setText(QCoreApplication::translate("RenderWindow", "&Add", nullptr));
#if QT_CONFIG(shortcut)
        _add->setShortcut(QCoreApplication::translate("RenderWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        _edit->setText(QCoreApplication::translate("RenderWindow", "&Edit", nullptr));
#if QT_CONFIG(shortcut)
        _edit->setShortcut(QCoreApplication::translate("RenderWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        _list->setText(QCoreApplication::translate("RenderWindow", "&List", nullptr));
#if QT_CONFIG(shortcut)
        _list->setShortcut(QCoreApplication::translate("RenderWindow", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        _delete->setText(QCoreApplication::translate("RenderWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        _delete->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        helpMenu->setTitle(QCoreApplication::translate("RenderWindow", "&Help", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("RenderWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenderWindow: public Ui_RenderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERWINDOW_H
