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
** Form generated from reading UI file 'mqledit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQLEDIT_H
#define UI_MQLEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MQLEdit
{
public:
    QAction *fileNewAction;
    QAction *fileOpenAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *filePrintAction;
    QAction *fileExitAction;
    QAction *editUndoAction;
    QAction *editRedoAction;
    QAction *editCutAction;
    QAction *editCopyAction;
    QAction *editPasteAction;
    QAction *editFindAction;
    QAction *helpContentsAction;
    QAction *helpIndexAction;
    QAction *helpAboutAction;
    QAction *fileDatabaseAction;
    QAction *fileDatabaseConnectAction;
    QAction *fileDatabaseDisconnectAction;
    QAction *fileUnnamedAction;
    QAction *viewParameter_ListAction;
    QAction *viewLog_OutputAction;
    QAction *viewResultsAction;
    QAction *toolsParse_QueryAction;
    QAction *toolsExecute_QueryAction;
    QAction *viewExecuted_SQLAction;
    QAction *fileDatabaseOpenAction;
    QAction *fileDatabaseSaveAsAction;
    QAction *toolsTest_ModeAction;
    QAction *searchForParametersAction;
    QVBoxLayout *verticalLayout;
    QMenuBar *MenuBar;
    QMenu *ToolsMenu;
    QMenu *helpMenu;
    QMenu *ViewMenu;
    QMenu *editMenu;
    QMenu *fileMenu;
    QToolBar *toolBar;
    QVBoxLayout *vboxLayout;
    QTextEdit *_text;

    void setupUi(QWidget *MQLEdit)
    {
        if (MQLEdit->objectName().isEmpty())
            MQLEdit->setObjectName(QString::fromUtf8("MQLEdit"));
        MQLEdit->resize(800, 600);
        fileNewAction = new QAction(MQLEdit);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/document_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewAction->setIcon(icon);
        fileOpenAction = new QAction(MQLEdit);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/folder_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon1);
        fileSaveAction = new QAction(MQLEdit);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/diskette_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon2);
        fileSaveAsAction = new QAction(MQLEdit);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        filePrintAction = new QAction(MQLEdit);
        filePrintAction->setObjectName(QString::fromUtf8("filePrintAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/printer_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        filePrintAction->setIcon(icon3);
        fileExitAction = new QAction(MQLEdit);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        editUndoAction = new QAction(MQLEdit);
        editUndoAction->setObjectName(QString::fromUtf8("editUndoAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/undo_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        editUndoAction->setIcon(icon4);
        editRedoAction = new QAction(MQLEdit);
        editRedoAction->setObjectName(QString::fromUtf8("editRedoAction"));
        editCutAction = new QAction(MQLEdit);
        editCutAction->setObjectName(QString::fromUtf8("editCutAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/scissors_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        editCutAction->setIcon(icon5);
        editCopyAction = new QAction(MQLEdit);
        editCopyAction->setObjectName(QString::fromUtf8("editCopyAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/copy_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        editCopyAction->setIcon(icon6);
        editPasteAction = new QAction(MQLEdit);
        editPasteAction->setObjectName(QString::fromUtf8("editPasteAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/paste_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        editPasteAction->setIcon(icon7);
        editFindAction = new QAction(MQLEdit);
        editFindAction->setObjectName(QString::fromUtf8("editFindAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("image9"), QSize(), QIcon::Normal, QIcon::Off);
        editFindAction->setIcon(icon8);
        helpContentsAction = new QAction(MQLEdit);
        helpContentsAction->setObjectName(QString::fromUtf8("helpContentsAction"));
        helpIndexAction = new QAction(MQLEdit);
        helpIndexAction->setObjectName(QString::fromUtf8("helpIndexAction"));
        helpAboutAction = new QAction(MQLEdit);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/help_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpAboutAction->setIcon(icon9);
        fileDatabaseAction = new QAction(MQLEdit);
        fileDatabaseAction->setObjectName(QString::fromUtf8("fileDatabaseAction"));
        fileDatabaseConnectAction = new QAction(MQLEdit);
        fileDatabaseConnectAction->setObjectName(QString::fromUtf8("fileDatabaseConnectAction"));
        fileDatabaseDisconnectAction = new QAction(MQLEdit);
        fileDatabaseDisconnectAction->setObjectName(QString::fromUtf8("fileDatabaseDisconnectAction"));
        fileUnnamedAction = new QAction(MQLEdit);
        fileUnnamedAction->setObjectName(QString::fromUtf8("fileUnnamedAction"));
        viewParameter_ListAction = new QAction(MQLEdit);
        viewParameter_ListAction->setObjectName(QString::fromUtf8("viewParameter_ListAction"));
        viewLog_OutputAction = new QAction(MQLEdit);
        viewLog_OutputAction->setObjectName(QString::fromUtf8("viewLog_OutputAction"));
        viewResultsAction = new QAction(MQLEdit);
        viewResultsAction->setObjectName(QString::fromUtf8("viewResultsAction"));
        toolsParse_QueryAction = new QAction(MQLEdit);
        toolsParse_QueryAction->setObjectName(QString::fromUtf8("toolsParse_QueryAction"));
        toolsExecute_QueryAction = new QAction(MQLEdit);
        toolsExecute_QueryAction->setObjectName(QString::fromUtf8("toolsExecute_QueryAction"));
        viewExecuted_SQLAction = new QAction(MQLEdit);
        viewExecuted_SQLAction->setObjectName(QString::fromUtf8("viewExecuted_SQLAction"));
        fileDatabaseOpenAction = new QAction(MQLEdit);
        fileDatabaseOpenAction->setObjectName(QString::fromUtf8("fileDatabaseOpenAction"));
        fileDatabaseSaveAsAction = new QAction(MQLEdit);
        fileDatabaseSaveAsAction->setObjectName(QString::fromUtf8("fileDatabaseSaveAsAction"));
        toolsTest_ModeAction = new QAction(MQLEdit);
        toolsTest_ModeAction->setObjectName(QString::fromUtf8("toolsTest_ModeAction"));
        toolsTest_ModeAction->setCheckable(true);
        toolsTest_ModeAction->setChecked(true);
        searchForParametersAction = new QAction(MQLEdit);
        searchForParametersAction->setObjectName(QString::fromUtf8("searchForParametersAction"));
        verticalLayout = new QVBoxLayout(MQLEdit);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MenuBar = new QMenuBar(MQLEdit);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        ToolsMenu = new QMenu(MenuBar);
        ToolsMenu->setObjectName(QString::fromUtf8("ToolsMenu"));
        helpMenu = new QMenu(MenuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        ViewMenu = new QMenu(MenuBar);
        ViewMenu->setObjectName(QString::fromUtf8("ViewMenu"));
        editMenu = new QMenu(MenuBar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        fileMenu = new QMenu(MenuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));

        verticalLayout->addWidget(MenuBar);

        toolBar = new QToolBar(MQLEdit);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(toolBar);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _text = new QTextEdit(MQLEdit);
        _text->setObjectName(QString::fromUtf8("_text"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        _text->setFont(font);

        vboxLayout->addWidget(_text);


        verticalLayout->addLayout(vboxLayout);


        MenuBar->addAction(fileMenu->menuAction());
        MenuBar->addAction(editMenu->menuAction());
        MenuBar->addAction(ViewMenu->menuAction());
        MenuBar->addAction(ToolsMenu->menuAction());
        MenuBar->addAction(helpMenu->menuAction());
        ToolsMenu->addAction(toolsParse_QueryAction);
        ToolsMenu->addAction(toolsExecute_QueryAction);
        ToolsMenu->addSeparator();
        ToolsMenu->addAction(toolsTest_ModeAction);
        ToolsMenu->addSeparator();
        ToolsMenu->addAction(searchForParametersAction);
        helpMenu->addAction(helpContentsAction);
        helpMenu->addAction(helpIndexAction);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAboutAction);
        ViewMenu->addAction(viewParameter_ListAction);
        ViewMenu->addAction(viewLog_OutputAction);
        ViewMenu->addAction(viewResultsAction);
        ViewMenu->addAction(viewExecuted_SQLAction);
        editMenu->addAction(editUndoAction);
        editMenu->addAction(editRedoAction);
        editMenu->addSeparator();
        editMenu->addAction(editCutAction);
        editMenu->addAction(editCopyAction);
        editMenu->addAction(editPasteAction);
        editMenu->addSeparator();
        editMenu->addAction(editFindAction);
        fileMenu->addAction(fileNewAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileDatabaseConnectAction);
        fileMenu->addAction(fileDatabaseDisconnectAction);
        fileMenu->addAction(fileDatabaseOpenAction);
        fileMenu->addAction(fileDatabaseSaveAsAction);
        fileMenu->addSeparator();
        fileMenu->addAction(filePrintAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        toolBar->addAction(fileNewAction);
        toolBar->addAction(fileOpenAction);
        toolBar->addAction(fileSaveAction);
        toolBar->addSeparator();
        toolBar->addAction(editUndoAction);
        toolBar->addSeparator();
        toolBar->addAction(editCutAction);
        toolBar->addAction(editCopyAction);
        toolBar->addAction(editPasteAction);
        toolBar->addAction(helpAboutAction);

        retranslateUi(MQLEdit);
        QObject::connect(editUndoAction, SIGNAL(activated()), _text, SLOT(undo()));
        QObject::connect(editRedoAction, SIGNAL(activated()), _text, SLOT(redo()));
        QObject::connect(editCutAction, SIGNAL(activated()), _text, SLOT(cut()));
        QObject::connect(editCopyAction, SIGNAL(activated()), _text, SLOT(copy()));
        QObject::connect(editPasteAction, SIGNAL(activated()), _text, SLOT(paste()));

        QMetaObject::connectSlotsByName(MQLEdit);
    } // setupUi

    void retranslateUi(QWidget *MQLEdit)
    {
        MQLEdit->setWindowTitle(QCoreApplication::translate("MQLEdit", "[*]MetaSQL Editor", nullptr));
        fileNewAction->setText(QCoreApplication::translate("MQLEdit", "&New", nullptr));
        fileNewAction->setIconText(QCoreApplication::translate("MQLEdit", "New", nullptr));
#if QT_CONFIG(shortcut)
        fileNewAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        fileOpenAction->setText(QCoreApplication::translate("MQLEdit", "&Open...", nullptr));
        fileOpenAction->setIconText(QCoreApplication::translate("MQLEdit", "Open", nullptr));
#if QT_CONFIG(shortcut)
        fileOpenAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        fileSaveAction->setText(QCoreApplication::translate("MQLEdit", "&Save", nullptr));
        fileSaveAction->setIconText(QCoreApplication::translate("MQLEdit", "Save", nullptr));
#if QT_CONFIG(shortcut)
        fileSaveAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        fileSaveAsAction->setText(QCoreApplication::translate("MQLEdit", "Save &As... (File)", nullptr));
        fileSaveAsAction->setIconText(QCoreApplication::translate("MQLEdit", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        fileSaveAsAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        filePrintAction->setText(QCoreApplication::translate("MQLEdit", "&Print...", nullptr));
        filePrintAction->setIconText(QCoreApplication::translate("MQLEdit", "Print", nullptr));
#if QT_CONFIG(shortcut)
        filePrintAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        fileExitAction->setText(QCoreApplication::translate("MQLEdit", "E&xit", nullptr));
        fileExitAction->setIconText(QCoreApplication::translate("MQLEdit", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        fileExitAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        editUndoAction->setText(QCoreApplication::translate("MQLEdit", "&Undo", nullptr));
        editUndoAction->setIconText(QCoreApplication::translate("MQLEdit", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        editUndoAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        editRedoAction->setText(QCoreApplication::translate("MQLEdit", "&Redo", nullptr));
        editRedoAction->setIconText(QCoreApplication::translate("MQLEdit", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        editRedoAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        editCutAction->setText(QCoreApplication::translate("MQLEdit", "&Cut", nullptr));
        editCutAction->setIconText(QCoreApplication::translate("MQLEdit", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        editCutAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        editCopyAction->setText(QCoreApplication::translate("MQLEdit", "C&opy", nullptr));
        editCopyAction->setIconText(QCoreApplication::translate("MQLEdit", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        editCopyAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        editPasteAction->setText(QCoreApplication::translate("MQLEdit", "&Paste", nullptr));
        editPasteAction->setIconText(QCoreApplication::translate("MQLEdit", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        editPasteAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        editFindAction->setText(QCoreApplication::translate("MQLEdit", "&Find...", nullptr));
        editFindAction->setIconText(QCoreApplication::translate("MQLEdit", "Find", nullptr));
#if QT_CONFIG(shortcut)
        editFindAction->setShortcut(QCoreApplication::translate("MQLEdit", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        helpContentsAction->setText(QCoreApplication::translate("MQLEdit", "&Contents...", nullptr));
        helpContentsAction->setIconText(QCoreApplication::translate("MQLEdit", "Contents", nullptr));
#if QT_CONFIG(shortcut)
        helpContentsAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        helpIndexAction->setText(QCoreApplication::translate("MQLEdit", "&Index...", nullptr));
        helpIndexAction->setIconText(QCoreApplication::translate("MQLEdit", "Index", nullptr));
#if QT_CONFIG(shortcut)
        helpIndexAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        helpAboutAction->setText(QCoreApplication::translate("MQLEdit", "&About", nullptr));
        helpAboutAction->setIconText(QCoreApplication::translate("MQLEdit", "About", nullptr));
#if QT_CONFIG(shortcut)
        helpAboutAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        fileDatabaseAction->setText(QCoreApplication::translate("MQLEdit", "Database", nullptr));
        fileDatabaseAction->setIconText(QCoreApplication::translate("MQLEdit", "Database", nullptr));
        fileDatabaseConnectAction->setText(QCoreApplication::translate("MQLEdit", "Connect to Database...", nullptr));
        fileDatabaseConnectAction->setIconText(QCoreApplication::translate("MQLEdit", "Connect...", nullptr));
        fileDatabaseDisconnectAction->setText(QCoreApplication::translate("MQLEdit", "Disconnect From Database", nullptr));
        fileDatabaseDisconnectAction->setIconText(QCoreApplication::translate("MQLEdit", "Disconnect", nullptr));
        fileUnnamedAction->setText(QCoreApplication::translate("MQLEdit", "Unnamed", nullptr));
        fileUnnamedAction->setIconText(QCoreApplication::translate("MQLEdit", "Unnamed", nullptr));
        viewParameter_ListAction->setText(QCoreApplication::translate("MQLEdit", "Parameter List...", nullptr));
        viewParameter_ListAction->setIconText(QCoreApplication::translate("MQLEdit", "Parameter List...", nullptr));
        viewLog_OutputAction->setText(QCoreApplication::translate("MQLEdit", "Log Output...", nullptr));
        viewLog_OutputAction->setIconText(QCoreApplication::translate("MQLEdit", "Log Output...", nullptr));
        viewResultsAction->setText(QCoreApplication::translate("MQLEdit", "Results...", nullptr));
        viewResultsAction->setIconText(QCoreApplication::translate("MQLEdit", "Results...", nullptr));
        toolsParse_QueryAction->setText(QCoreApplication::translate("MQLEdit", "Parse Query", nullptr));
        toolsParse_QueryAction->setIconText(QCoreApplication::translate("MQLEdit", "Parse Query", nullptr));
        toolsExecute_QueryAction->setText(QCoreApplication::translate("MQLEdit", "Execute Query", nullptr));
        toolsExecute_QueryAction->setIconText(QCoreApplication::translate("MQLEdit", "Execute Query", nullptr));
        viewExecuted_SQLAction->setText(QCoreApplication::translate("MQLEdit", "Executed SQL...", nullptr));
        viewExecuted_SQLAction->setIconText(QCoreApplication::translate("MQLEdit", "Executed SQL...", nullptr));
        fileDatabaseOpenAction->setText(QCoreApplication::translate("MQLEdit", "Open... (Database)", nullptr));
        fileDatabaseSaveAsAction->setText(QCoreApplication::translate("MQLEdit", "Save As... (Database)", nullptr));
        toolsTest_ModeAction->setText(QCoreApplication::translate("MQLEdit", "Test Mode", nullptr));
        searchForParametersAction->setText(QCoreApplication::translate("MQLEdit", "Search For Parameters", nullptr));
        ToolsMenu->setTitle(QCoreApplication::translate("MQLEdit", "&Tools", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("MQLEdit", "&Help", nullptr));
        ViewMenu->setTitle(QCoreApplication::translate("MQLEdit", "&View", nullptr));
        editMenu->setTitle(QCoreApplication::translate("MQLEdit", "&Edit", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MQLEdit", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MQLEdit: public Ui_MQLEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQLEDIT_H
