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
** Form generated from reading UI file 'barcodeeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCODEEDITOR_H
#define UI_BARCODEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "querycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_BarcodeEditor
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *_princpalLayout;
    QGridLayout *gridLayout;
    QLabel *TextLabel1_3_2;
    QLineEdit *tbColumn;
    QLabel *TextLabel1;
    QLabel *TextLabel1_3;
    QComboBox *cbFormat;
    QueryComboBox *cbQuery;
    QGroupBox *buttonGroupAlign;
    QVBoxLayout *vboxLayout;
    QRadioButton *rbAlignLeft;
    QRadioButton *rbAlignCenter;
    QRadioButton *rbAlignRight;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1_3_3;
    QLineEdit *leXPos;
    QLabel *TextLabel3;
    QLineEdit *leWidth;
    QLabel *TextLabel2;
    QLineEdit *leYPos;
    QLabel *TextLabel4;
    QLineEdit *leHeight;
    QLabel *lnarrowBar;
    QLineEdit *leNarrowBarWidth;
    QLabel *TextLabel5;
    QVBoxLayout *vboxLayout1;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *BarcodeEditor)
    {
        if (BarcodeEditor->objectName().isEmpty())
            BarcodeEditor->setObjectName(QString::fromUtf8("BarcodeEditor"));
        BarcodeEditor->resize(365, 424);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BarcodeEditor->sizePolicy().hasHeightForWidth());
        BarcodeEditor->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(BarcodeEditor);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        _princpalLayout = new QVBoxLayout();
        _princpalLayout->setSpacing(6);
        _princpalLayout->setObjectName(QString::fromUtf8("_princpalLayout"));
        _princpalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel1_3_2 = new QLabel(BarcodeEditor);
        TextLabel1_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_2"));
        TextLabel1_3_2->setFrameShape(QFrame::NoFrame);
        TextLabel1_3_2->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(TextLabel1_3_2, 0, 0, 1, 1);

        tbColumn = new QLineEdit(BarcodeEditor);
        tbColumn->setObjectName(QString::fromUtf8("tbColumn"));

        gridLayout->addWidget(tbColumn, 2, 1, 1, 1);

        TextLabel1 = new QLabel(BarcodeEditor);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
        TextLabel1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(TextLabel1, 2, 0, 1, 1);

        TextLabel1_3 = new QLabel(BarcodeEditor);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        gridLayout->addWidget(TextLabel1_3, 1, 0, 1, 1);

        cbFormat = new QComboBox(BarcodeEditor);
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->setObjectName(QString::fromUtf8("cbFormat"));
        cbFormat->setInsertPolicy(QComboBox::InsertAtBottom);

        gridLayout->addWidget(cbFormat, 0, 1, 1, 1);

        cbQuery = new QueryComboBox(BarcodeEditor);
        cbQuery->setObjectName(QString::fromUtf8("cbQuery"));

        gridLayout->addWidget(cbQuery, 1, 1, 1, 1);


        _princpalLayout->addLayout(gridLayout);

        buttonGroupAlign = new QGroupBox(BarcodeEditor);
        buttonGroupAlign->setObjectName(QString::fromUtf8("buttonGroupAlign"));
        vboxLayout = new QVBoxLayout(buttonGroupAlign);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        rbAlignLeft = new QRadioButton(buttonGroupAlign);
        rbAlignLeft->setObjectName(QString::fromUtf8("rbAlignLeft"));
        rbAlignLeft->setChecked(true);

        vboxLayout->addWidget(rbAlignLeft);

        rbAlignCenter = new QRadioButton(buttonGroupAlign);
        rbAlignCenter->setObjectName(QString::fromUtf8("rbAlignCenter"));

        vboxLayout->addWidget(rbAlignCenter);

        rbAlignRight = new QRadioButton(buttonGroupAlign);
        rbAlignRight->setObjectName(QString::fromUtf8("rbAlignRight"));

        vboxLayout->addWidget(rbAlignRight);


        _princpalLayout->addWidget(buttonGroupAlign);

        GroupBox1 = new QGroupBox(BarcodeEditor);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout1 = new QGridLayout(GroupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TextLabel1_3_3 = new QLabel(GroupBox1);
        TextLabel1_3_3->setObjectName(QString::fromUtf8("TextLabel1_3_3"));

        gridLayout1->addWidget(TextLabel1_3_3, 0, 0, 1, 1);

        leXPos = new QLineEdit(GroupBox1);
        leXPos->setObjectName(QString::fromUtf8("leXPos"));

        gridLayout1->addWidget(leXPos, 0, 1, 1, 1);

        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout1->addWidget(TextLabel3, 0, 2, 1, 1);

        leWidth = new QLineEdit(GroupBox1);
        leWidth->setObjectName(QString::fromUtf8("leWidth"));

        gridLayout1->addWidget(leWidth, 0, 3, 1, 1);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout1->addWidget(TextLabel2, 1, 0, 1, 1);

        leYPos = new QLineEdit(GroupBox1);
        leYPos->setObjectName(QString::fromUtf8("leYPos"));

        gridLayout1->addWidget(leYPos, 1, 1, 1, 1);

        TextLabel4 = new QLabel(GroupBox1);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));

        gridLayout1->addWidget(TextLabel4, 1, 2, 1, 1);

        leHeight = new QLineEdit(GroupBox1);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));

        gridLayout1->addWidget(leHeight, 1, 3, 1, 1);

        lnarrowBar = new QLabel(GroupBox1);
        lnarrowBar->setObjectName(QString::fromUtf8("lnarrowBar"));
        lnarrowBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(lnarrowBar, 2, 1, 1, 2);

        leNarrowBarWidth = new QLineEdit(GroupBox1);
        leNarrowBarWidth->setObjectName(QString::fromUtf8("leNarrowBarWidth"));

        gridLayout1->addWidget(leNarrowBarWidth, 2, 3, 1, 1);

        TextLabel5 = new QLabel(GroupBox1);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica [Cronyx]"));
        font.setPointSize(6);
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        TextLabel5->setFont(font);
        TextLabel5->setTextFormat(Qt::AutoText);
        TextLabel5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(TextLabel5, 3, 3, 1, 1);


        _princpalLayout->addWidget(GroupBox1);


        hboxLayout->addLayout(_princpalLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        buttonOk = new QPushButton(BarcodeEditor);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);

        vboxLayout1->addWidget(buttonOk);

        buttonCancel = new QPushButton(BarcodeEditor);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        vboxLayout1->addWidget(buttonCancel);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        QWidget::setTabOrder(cbFormat, cbQuery);
        QWidget::setTabOrder(cbQuery, tbColumn);
        QWidget::setTabOrder(tbColumn, rbAlignLeft);
        QWidget::setTabOrder(rbAlignLeft, leXPos);
        QWidget::setTabOrder(leXPos, leWidth);
        QWidget::setTabOrder(leWidth, leYPos);
        QWidget::setTabOrder(leYPos, leHeight);
        QWidget::setTabOrder(leHeight, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(BarcodeEditor);
        QObject::connect(buttonOk, SIGNAL(clicked()), BarcodeEditor, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), BarcodeEditor, SLOT(reject()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(BarcodeEditor);
    } // setupUi

    void retranslateUi(QDialog *BarcodeEditor)
    {
        BarcodeEditor->setWindowTitle(QCoreApplication::translate("BarcodeEditor", "Bar Code Properties", nullptr));
        TextLabel1_3_2->setText(QCoreApplication::translate("BarcodeEditor", "Format:", nullptr));
        TextLabel1->setText(QCoreApplication::translate("BarcodeEditor", "Column:", nullptr));
        TextLabel1_3->setText(QCoreApplication::translate("BarcodeEditor", "Query Source:", nullptr));
        cbFormat->setItemText(0, QCoreApplication::translate("BarcodeEditor", "3of9", nullptr));
        cbFormat->setItemText(1, QCoreApplication::translate("BarcodeEditor", "3of9+", nullptr));
        cbFormat->setItemText(2, QCoreApplication::translate("BarcodeEditor", "128", nullptr));
        cbFormat->setItemText(3, QCoreApplication::translate("BarcodeEditor", "ean13", nullptr));
        cbFormat->setItemText(4, QCoreApplication::translate("BarcodeEditor", "ean8", nullptr));
        cbFormat->setItemText(5, QCoreApplication::translate("BarcodeEditor", "upc-a", nullptr));
        cbFormat->setItemText(6, QCoreApplication::translate("BarcodeEditor", "upc-e", nullptr));
        cbFormat->setItemText(7, QCoreApplication::translate("BarcodeEditor", "i2of5", nullptr));
        cbFormat->setItemText(8, QCoreApplication::translate("BarcodeEditor", "PDF417", nullptr));
        cbFormat->setItemText(9, QCoreApplication::translate("BarcodeEditor", "QR", nullptr));
        cbFormat->setItemText(10, QCoreApplication::translate("BarcodeEditor", "Datamatrix square", nullptr));
        cbFormat->setItemText(11, QCoreApplication::translate("BarcodeEditor", "Datamatrix rectangle", nullptr));

        buttonGroupAlign->setTitle(QCoreApplication::translate("BarcodeEditor", "Alignment", nullptr));
        rbAlignLeft->setText(QCoreApplication::translate("BarcodeEditor", "Left", nullptr));
        rbAlignCenter->setText(QCoreApplication::translate("BarcodeEditor", "Center", nullptr));
        rbAlignRight->setText(QCoreApplication::translate("BarcodeEditor", "Right", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("BarcodeEditor", "Position/Size", nullptr));
        TextLabel1_3_3->setText(QCoreApplication::translate("BarcodeEditor", "X:", nullptr));
        leXPos->setText(QCoreApplication::translate("BarcodeEditor", "0.00", nullptr));
        TextLabel3->setText(QCoreApplication::translate("BarcodeEditor", "Width:", nullptr));
        leWidth->setText(QCoreApplication::translate("BarcodeEditor", "0.01", nullptr));
        TextLabel2->setText(QCoreApplication::translate("BarcodeEditor", "Y:", nullptr));
        leYPos->setText(QCoreApplication::translate("BarcodeEditor", "0.00", nullptr));
        TextLabel4->setText(QCoreApplication::translate("BarcodeEditor", "Height:", nullptr));
        leHeight->setText(QCoreApplication::translate("BarcodeEditor", "0.01", nullptr));
        lnarrowBar->setText(QCoreApplication::translate("BarcodeEditor", "Narrow bar width:", nullptr));
        leNarrowBarWidth->setText(QCoreApplication::translate("BarcodeEditor", "0.00", nullptr));
        TextLabel5->setText(QCoreApplication::translate("BarcodeEditor", "in inches", nullptr));
        buttonOk->setText(QCoreApplication::translate("BarcodeEditor", "&OK", nullptr));
#if QT_CONFIG(shortcut)
        buttonOk->setShortcut(QCoreApplication::translate("BarcodeEditor", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        buttonCancel->setText(QCoreApplication::translate("BarcodeEditor", "&Cancel", nullptr));
#if QT_CONFIG(shortcut)
        buttonCancel->setShortcut(QCoreApplication::translate("BarcodeEditor", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class BarcodeEditor: public Ui_BarcodeEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCODEEDITOR_H
