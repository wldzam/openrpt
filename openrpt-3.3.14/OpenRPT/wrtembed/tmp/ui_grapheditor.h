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
** Form generated from reading UI file 'grapheditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHEDITOR_H
#define UI_GRAPHEDITOR_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "querycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_GraphEditor
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *_tabWidget;
    QWidget *generalTab;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_3;
    QueryComboBox *cbQuery;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout;
    QLineEdit *leHeight;
    QLineEdit *leWidth;
    QLabel *TextLabel2;
    QLabel *TextLabel4;
    QLabel *TextLabel1_3_2;
    QLabel *TextLabel3;
    QLabel *TextLabel5;
    QLineEdit *leYPos;
    QLineEdit *leXPos;
    QGroupBox *GroupBoxPadding;
    QGridLayout *gridLayout1;
    QLabel *_vPadLabel;
    QLabel *_hPadLabel;
    QSpinBox *_hPadSpinbox;
    QSpinBox *_vPadSpinbox;
    QGroupBox *GroupBox2;
    QHBoxLayout *hboxLayout1;
    QLineEdit *_leBaseFont;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *spacerItem;
    QPushButton *_btnBaseFont;
    QGroupBox *_gbTitle;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout2;
    QLabel *_lblTitle;
    QLineEdit *_leTitle;
    QCheckBox *_cbTitleUseBase;
    QGroupBox *_gbTitleFont;
    QHBoxLayout *hboxLayout3;
    QLineEdit *_leTitleFont;
    QVBoxLayout *vboxLayout4;
    QSpacerItem *spacerItem1;
    QPushButton *_btnTitleFont;
    QWidget *dataTab;
    QVBoxLayout *vboxLayout5;
    QGroupBox *_gbDataAxis;
    QVBoxLayout *vboxLayout6;
    QHBoxLayout *hboxLayout4;
    QLabel *_lblData;
    QLineEdit *_leData;
    QCheckBox *_cbDataUseBase;
    QGroupBox *_gbDataFont;
    QHBoxLayout *hboxLayout5;
    QLineEdit *_leDataFont;
    QVBoxLayout *vboxLayout7;
    QSpacerItem *spacerItem2;
    QPushButton *_btnDataFont;
    QGroupBox *_gbDataAxisTitle;
    QVBoxLayout *vboxLayout8;
    QHBoxLayout *hboxLayout6;
    QLabel *_lblDataTitle;
    QLineEdit *_leDataTitle;
    QCheckBox *_cbDataTitleUseBase;
    QGroupBox *_gbDataTitleFont;
    QHBoxLayout *hboxLayout7;
    QLineEdit *_leDataTitleFont;
    QVBoxLayout *vboxLayout9;
    QSpacerItem *spacerItem3;
    QPushButton *_btnDataTitleFont;
    QWidget *valueTab;
    QVBoxLayout *vboxLayout10;
    QHBoxLayout *hboxLayout8;
    QLabel *_lblMin;
    QLineEdit *_leMin;
    QLabel *_lblMax;
    QLineEdit *_leMax;
    QCheckBox *_cbAutoMinMax;
    QCheckBox *_cbValueUseBase;
    QGroupBox *_gbValueFont;
    QHBoxLayout *hboxLayout9;
    QLineEdit *_leValueFont;
    QVBoxLayout *vboxLayout11;
    QSpacerItem *spacerItem4;
    QPushButton *_btnValueFont;
    QGroupBox *_gbDataAxisTitle_2;
    QVBoxLayout *vboxLayout12;
    QHBoxLayout *hboxLayout10;
    QLabel *_lblValueTitle;
    QLineEdit *_leValueTitle;
    QCheckBox *_cbValueTitleUseBase;
    QGroupBox *_gbValueTitleFont;
    QHBoxLayout *hboxLayout11;
    QLineEdit *_leValueTitleFont;
    QVBoxLayout *vboxLayout13;
    QSpacerItem *spacerItem5;
    QPushButton *_btnValueTitleFont;
    QWidget *seriesTab;
    QVBoxLayout *vboxLayout14;
    QHBoxLayout *hboxLayout12;
    QVBoxLayout *vboxLayout15;
    QHBoxLayout *hboxLayout13;
    QLabel *_lblSeries;
    QComboBox *_cbSeries;
    QSpacerItem *spacerItem6;
    QVBoxLayout *vboxLayout16;
    QPushButton *_btnNewSeries;
    QPushButton *_btnRemoveSeries;
    QGroupBox *_gbSeriesProperties;
    QVBoxLayout *vboxLayout17;
    QGridLayout *gridLayout2;
    QLineEdit *_leSeriesName;
    QLabel *_lblSeriesColor;
    QHBoxLayout *hboxLayout14;
    QComboBox *_cbColors;
    QPushButton *_btnEditColors;
    QLineEdit *_leSeriesColumn;
    QLabel *_lblSeriesName;
    QLabel *_lblSeriesColumn;
    QGroupBox *_gbSeriesStyle;
    QVBoxLayout *vboxLayout18;
    QCheckBox *_cbSeriesStyleBars;
    QCheckBox *_cbSeriesStyleLines;
    QCheckBox *_cbSeriesStylePoints;
    QHBoxLayout *hboxLayout15;
    QSpacerItem *spacerItem7;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *GraphEditor)
    {
        if (GraphEditor->objectName().isEmpty())
            GraphEditor->setObjectName(QString::fromUtf8("GraphEditor"));
        GraphEditor->resize(377, 562);
        vboxLayout = new QVBoxLayout(GraphEditor);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        _tabWidget = new QTabWidget(GraphEditor);
        _tabWidget->setObjectName(QString::fromUtf8("_tabWidget"));
        generalTab = new QWidget();
        generalTab->setObjectName(QString::fromUtf8("generalTab"));
        vboxLayout1 = new QVBoxLayout(generalTab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel1_3 = new QLabel(generalTab);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        hboxLayout->addWidget(TextLabel1_3);

        cbQuery = new QueryComboBox(generalTab);
        cbQuery->setObjectName(QString::fromUtf8("cbQuery"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbQuery->sizePolicy().hasHeightForWidth());
        cbQuery->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(cbQuery);


        vboxLayout1->addLayout(hboxLayout);

        GroupBox1 = new QGroupBox(generalTab);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout = new QGridLayout(GroupBox1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        leHeight = new QLineEdit(GroupBox1);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));

        gridLayout->addWidget(leHeight, 1, 3, 1, 1);

        leWidth = new QLineEdit(GroupBox1);
        leWidth->setObjectName(QString::fromUtf8("leWidth"));

        gridLayout->addWidget(leWidth, 0, 3, 1, 1);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout->addWidget(TextLabel2, 1, 0, 1, 1);

        TextLabel4 = new QLabel(GroupBox1);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));

        gridLayout->addWidget(TextLabel4, 1, 2, 1, 1);

        TextLabel1_3_2 = new QLabel(GroupBox1);
        TextLabel1_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_2"));

        gridLayout->addWidget(TextLabel1_3_2, 0, 0, 1, 1);

        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout->addWidget(TextLabel3, 0, 2, 1, 1);

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

        gridLayout->addWidget(TextLabel5, 2, 3, 1, 1);

        leYPos = new QLineEdit(GroupBox1);
        leYPos->setObjectName(QString::fromUtf8("leYPos"));

        gridLayout->addWidget(leYPos, 1, 1, 1, 1);

        leXPos = new QLineEdit(GroupBox1);
        leXPos->setObjectName(QString::fromUtf8("leXPos"));

        gridLayout->addWidget(leXPos, 0, 1, 1, 1);


        vboxLayout1->addWidget(GroupBox1);

        GroupBoxPadding = new QGroupBox(generalTab);
        GroupBoxPadding->setObjectName(QString::fromUtf8("GroupBoxPadding"));
        gridLayout1 = new QGridLayout(GroupBoxPadding);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        _vPadLabel = new QLabel(GroupBoxPadding);
        _vPadLabel->setObjectName(QString::fromUtf8("_vPadLabel"));
        _vPadLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(_vPadLabel, 1, 0, 1, 1);

        _hPadLabel = new QLabel(GroupBoxPadding);
        _hPadLabel->setObjectName(QString::fromUtf8("_hPadLabel"));
        _hPadLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(_hPadLabel, 0, 0, 1, 1);

        _hPadSpinbox = new QSpinBox(GroupBoxPadding);
        _hPadSpinbox->setObjectName(QString::fromUtf8("_hPadSpinbox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_hPadSpinbox->sizePolicy().hasHeightForWidth());
        _hPadSpinbox->setSizePolicy(sizePolicy1);
        _hPadSpinbox->setValue(5);

        gridLayout1->addWidget(_hPadSpinbox, 0, 1, 1, 1);

        _vPadSpinbox = new QSpinBox(GroupBoxPadding);
        _vPadSpinbox->setObjectName(QString::fromUtf8("_vPadSpinbox"));
        sizePolicy1.setHeightForWidth(_vPadSpinbox->sizePolicy().hasHeightForWidth());
        _vPadSpinbox->setSizePolicy(sizePolicy1);
        _vPadSpinbox->setValue(5);

        gridLayout1->addWidget(_vPadSpinbox, 1, 1, 1, 1);


        vboxLayout1->addWidget(GroupBoxPadding);

        GroupBox2 = new QGroupBox(generalTab);
        GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
        hboxLayout1 = new QHBoxLayout(GroupBox2);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        _leBaseFont = new QLineEdit(GroupBox2);
        _leBaseFont->setObjectName(QString::fromUtf8("_leBaseFont"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(_leBaseFont->sizePolicy().hasHeightForWidth());
        _leBaseFont->setSizePolicy(sizePolicy2);
        _leBaseFont->setReadOnly(true);

        hboxLayout1->addWidget(_leBaseFont);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem);

        _btnBaseFont = new QPushButton(GroupBox2);
        _btnBaseFont->setObjectName(QString::fromUtf8("_btnBaseFont"));

        vboxLayout2->addWidget(_btnBaseFont);


        hboxLayout1->addLayout(vboxLayout2);


        vboxLayout1->addWidget(GroupBox2);

        _gbTitle = new QGroupBox(generalTab);
        _gbTitle->setObjectName(QString::fromUtf8("_gbTitle"));
        vboxLayout3 = new QVBoxLayout(_gbTitle);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        _lblTitle = new QLabel(_gbTitle);
        _lblTitle->setObjectName(QString::fromUtf8("_lblTitle"));

        hboxLayout2->addWidget(_lblTitle);

        _leTitle = new QLineEdit(_gbTitle);
        _leTitle->setObjectName(QString::fromUtf8("_leTitle"));

        hboxLayout2->addWidget(_leTitle);


        vboxLayout3->addLayout(hboxLayout2);

        _cbTitleUseBase = new QCheckBox(_gbTitle);
        _cbTitleUseBase->setObjectName(QString::fromUtf8("_cbTitleUseBase"));

        vboxLayout3->addWidget(_cbTitleUseBase);

        _gbTitleFont = new QGroupBox(_gbTitle);
        _gbTitleFont->setObjectName(QString::fromUtf8("_gbTitleFont"));
        hboxLayout3 = new QHBoxLayout(_gbTitleFont);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(11, 11, 11, 11);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(11, 11, 11, 11);
        _leTitleFont = new QLineEdit(_gbTitleFont);
        _leTitleFont->setObjectName(QString::fromUtf8("_leTitleFont"));
        sizePolicy2.setHeightForWidth(_leTitleFont->sizePolicy().hasHeightForWidth());
        _leTitleFont->setSizePolicy(sizePolicy2);
        _leTitleFont->setReadOnly(true);

        hboxLayout3->addWidget(_leTitleFont);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem1);

        _btnTitleFont = new QPushButton(_gbTitleFont);
        _btnTitleFont->setObjectName(QString::fromUtf8("_btnTitleFont"));

        vboxLayout4->addWidget(_btnTitleFont);


        hboxLayout3->addLayout(vboxLayout4);


        vboxLayout3->addWidget(_gbTitleFont);


        vboxLayout1->addWidget(_gbTitle);

        _tabWidget->addTab(generalTab, QString());
        dataTab = new QWidget();
        dataTab->setObjectName(QString::fromUtf8("dataTab"));
        vboxLayout5 = new QVBoxLayout(dataTab);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setContentsMargins(11, 11, 11, 11);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(11, 11, 11, 11);
        _gbDataAxis = new QGroupBox(dataTab);
        _gbDataAxis->setObjectName(QString::fromUtf8("_gbDataAxis"));
        vboxLayout6 = new QVBoxLayout(_gbDataAxis);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setContentsMargins(11, 11, 11, 11);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        vboxLayout6->setContentsMargins(11, 11, 11, 11);
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        _lblData = new QLabel(_gbDataAxis);
        _lblData->setObjectName(QString::fromUtf8("_lblData"));

        hboxLayout4->addWidget(_lblData);

        _leData = new QLineEdit(_gbDataAxis);
        _leData->setObjectName(QString::fromUtf8("_leData"));

        hboxLayout4->addWidget(_leData);


        vboxLayout6->addLayout(hboxLayout4);

        _cbDataUseBase = new QCheckBox(_gbDataAxis);
        _cbDataUseBase->setObjectName(QString::fromUtf8("_cbDataUseBase"));

        vboxLayout6->addWidget(_cbDataUseBase);

        _gbDataFont = new QGroupBox(_gbDataAxis);
        _gbDataFont->setObjectName(QString::fromUtf8("_gbDataFont"));
        hboxLayout5 = new QHBoxLayout(_gbDataFont);
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(11, 11, 11, 11);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        hboxLayout5->setContentsMargins(11, 11, 11, 11);
        _leDataFont = new QLineEdit(_gbDataFont);
        _leDataFont->setObjectName(QString::fromUtf8("_leDataFont"));
        sizePolicy2.setHeightForWidth(_leDataFont->sizePolicy().hasHeightForWidth());
        _leDataFont->setSizePolicy(sizePolicy2);
        _leDataFont->setReadOnly(true);

        hboxLayout5->addWidget(_leDataFont);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(6);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem2);

        _btnDataFont = new QPushButton(_gbDataFont);
        _btnDataFont->setObjectName(QString::fromUtf8("_btnDataFont"));

        vboxLayout7->addWidget(_btnDataFont);


        hboxLayout5->addLayout(vboxLayout7);


        vboxLayout6->addWidget(_gbDataFont);


        vboxLayout5->addWidget(_gbDataAxis);

        _gbDataAxisTitle = new QGroupBox(dataTab);
        _gbDataAxisTitle->setObjectName(QString::fromUtf8("_gbDataAxisTitle"));
        vboxLayout8 = new QVBoxLayout(_gbDataAxisTitle);
        vboxLayout8->setSpacing(6);
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        vboxLayout8->setContentsMargins(11, 11, 11, 11);
        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        _lblDataTitle = new QLabel(_gbDataAxisTitle);
        _lblDataTitle->setObjectName(QString::fromUtf8("_lblDataTitle"));

        hboxLayout6->addWidget(_lblDataTitle);

        _leDataTitle = new QLineEdit(_gbDataAxisTitle);
        _leDataTitle->setObjectName(QString::fromUtf8("_leDataTitle"));

        hboxLayout6->addWidget(_leDataTitle);


        vboxLayout8->addLayout(hboxLayout6);

        _cbDataTitleUseBase = new QCheckBox(_gbDataAxisTitle);
        _cbDataTitleUseBase->setObjectName(QString::fromUtf8("_cbDataTitleUseBase"));

        vboxLayout8->addWidget(_cbDataTitleUseBase);

        _gbDataTitleFont = new QGroupBox(_gbDataAxisTitle);
        _gbDataTitleFont->setObjectName(QString::fromUtf8("_gbDataTitleFont"));
        hboxLayout7 = new QHBoxLayout(_gbDataTitleFont);
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(11, 11, 11, 11);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        hboxLayout7->setContentsMargins(11, 11, 11, 11);
        _leDataTitleFont = new QLineEdit(_gbDataTitleFont);
        _leDataTitleFont->setObjectName(QString::fromUtf8("_leDataTitleFont"));
        sizePolicy2.setHeightForWidth(_leDataTitleFont->sizePolicy().hasHeightForWidth());
        _leDataTitleFont->setSizePolicy(sizePolicy2);
        _leDataTitleFont->setReadOnly(true);

        hboxLayout7->addWidget(_leDataTitleFont);

        vboxLayout9 = new QVBoxLayout();
        vboxLayout9->setSpacing(6);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        vboxLayout9->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout9->addItem(spacerItem3);

        _btnDataTitleFont = new QPushButton(_gbDataTitleFont);
        _btnDataTitleFont->setObjectName(QString::fromUtf8("_btnDataTitleFont"));

        vboxLayout9->addWidget(_btnDataTitleFont);


        hboxLayout7->addLayout(vboxLayout9);


        vboxLayout8->addWidget(_gbDataTitleFont);


        vboxLayout5->addWidget(_gbDataAxisTitle);

        _tabWidget->addTab(dataTab, QString());
        valueTab = new QWidget();
        valueTab->setObjectName(QString::fromUtf8("valueTab"));
        vboxLayout10 = new QVBoxLayout(valueTab);
        vboxLayout10->setSpacing(6);
        vboxLayout10->setContentsMargins(11, 11, 11, 11);
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        vboxLayout10->setContentsMargins(11, 11, 11, 11);
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        _lblMin = new QLabel(valueTab);
        _lblMin->setObjectName(QString::fromUtf8("_lblMin"));
        _lblMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout8->addWidget(_lblMin);

        _leMin = new QLineEdit(valueTab);
        _leMin->setObjectName(QString::fromUtf8("_leMin"));

        hboxLayout8->addWidget(_leMin);

        _lblMax = new QLabel(valueTab);
        _lblMax->setObjectName(QString::fromUtf8("_lblMax"));
        _lblMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout8->addWidget(_lblMax);

        _leMax = new QLineEdit(valueTab);
        _leMax->setObjectName(QString::fromUtf8("_leMax"));

        hboxLayout8->addWidget(_leMax);


        vboxLayout10->addLayout(hboxLayout8);

        _cbAutoMinMax = new QCheckBox(valueTab);
        _cbAutoMinMax->setObjectName(QString::fromUtf8("_cbAutoMinMax"));

        vboxLayout10->addWidget(_cbAutoMinMax);

        _cbValueUseBase = new QCheckBox(valueTab);
        _cbValueUseBase->setObjectName(QString::fromUtf8("_cbValueUseBase"));

        vboxLayout10->addWidget(_cbValueUseBase);

        _gbValueFont = new QGroupBox(valueTab);
        _gbValueFont->setObjectName(QString::fromUtf8("_gbValueFont"));
        hboxLayout9 = new QHBoxLayout(_gbValueFont);
        hboxLayout9->setSpacing(6);
        hboxLayout9->setContentsMargins(11, 11, 11, 11);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        hboxLayout9->setContentsMargins(11, 11, 11, 11);
        _leValueFont = new QLineEdit(_gbValueFont);
        _leValueFont->setObjectName(QString::fromUtf8("_leValueFont"));
        sizePolicy2.setHeightForWidth(_leValueFont->sizePolicy().hasHeightForWidth());
        _leValueFont->setSizePolicy(sizePolicy2);
        _leValueFont->setReadOnly(true);

        hboxLayout9->addWidget(_leValueFont);

        vboxLayout11 = new QVBoxLayout();
        vboxLayout11->setSpacing(6);
        vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
        vboxLayout11->setContentsMargins(0, 0, 0, 0);
        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout11->addItem(spacerItem4);

        _btnValueFont = new QPushButton(_gbValueFont);
        _btnValueFont->setObjectName(QString::fromUtf8("_btnValueFont"));

        vboxLayout11->addWidget(_btnValueFont);


        hboxLayout9->addLayout(vboxLayout11);


        vboxLayout10->addWidget(_gbValueFont);

        _gbDataAxisTitle_2 = new QGroupBox(valueTab);
        _gbDataAxisTitle_2->setObjectName(QString::fromUtf8("_gbDataAxisTitle_2"));
        vboxLayout12 = new QVBoxLayout(_gbDataAxisTitle_2);
        vboxLayout12->setSpacing(6);
        vboxLayout12->setContentsMargins(11, 11, 11, 11);
        vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
        vboxLayout12->setContentsMargins(11, 11, 11, 11);
        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        _lblValueTitle = new QLabel(_gbDataAxisTitle_2);
        _lblValueTitle->setObjectName(QString::fromUtf8("_lblValueTitle"));

        hboxLayout10->addWidget(_lblValueTitle);

        _leValueTitle = new QLineEdit(_gbDataAxisTitle_2);
        _leValueTitle->setObjectName(QString::fromUtf8("_leValueTitle"));

        hboxLayout10->addWidget(_leValueTitle);


        vboxLayout12->addLayout(hboxLayout10);

        _cbValueTitleUseBase = new QCheckBox(_gbDataAxisTitle_2);
        _cbValueTitleUseBase->setObjectName(QString::fromUtf8("_cbValueTitleUseBase"));

        vboxLayout12->addWidget(_cbValueTitleUseBase);

        _gbValueTitleFont = new QGroupBox(_gbDataAxisTitle_2);
        _gbValueTitleFont->setObjectName(QString::fromUtf8("_gbValueTitleFont"));
        hboxLayout11 = new QHBoxLayout(_gbValueTitleFont);
        hboxLayout11->setSpacing(6);
        hboxLayout11->setContentsMargins(11, 11, 11, 11);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        hboxLayout11->setContentsMargins(11, 11, 11, 11);
        _leValueTitleFont = new QLineEdit(_gbValueTitleFont);
        _leValueTitleFont->setObjectName(QString::fromUtf8("_leValueTitleFont"));
        sizePolicy2.setHeightForWidth(_leValueTitleFont->sizePolicy().hasHeightForWidth());
        _leValueTitleFont->setSizePolicy(sizePolicy2);
        _leValueTitleFont->setReadOnly(true);

        hboxLayout11->addWidget(_leValueTitleFont);

        vboxLayout13 = new QVBoxLayout();
        vboxLayout13->setSpacing(6);
        vboxLayout13->setObjectName(QString::fromUtf8("vboxLayout13"));
        vboxLayout13->setContentsMargins(0, 0, 0, 0);
        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout13->addItem(spacerItem5);

        _btnValueTitleFont = new QPushButton(_gbValueTitleFont);
        _btnValueTitleFont->setObjectName(QString::fromUtf8("_btnValueTitleFont"));

        vboxLayout13->addWidget(_btnValueTitleFont);


        hboxLayout11->addLayout(vboxLayout13);


        vboxLayout12->addWidget(_gbValueTitleFont);


        vboxLayout10->addWidget(_gbDataAxisTitle_2);

        _tabWidget->addTab(valueTab, QString());
        seriesTab = new QWidget();
        seriesTab->setObjectName(QString::fromUtf8("seriesTab"));
        vboxLayout14 = new QVBoxLayout(seriesTab);
        vboxLayout14->setSpacing(6);
        vboxLayout14->setContentsMargins(11, 11, 11, 11);
        vboxLayout14->setObjectName(QString::fromUtf8("vboxLayout14"));
        vboxLayout14->setContentsMargins(11, 11, 11, 11);
        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        vboxLayout15 = new QVBoxLayout();
        vboxLayout15->setSpacing(6);
        vboxLayout15->setObjectName(QString::fromUtf8("vboxLayout15"));
        vboxLayout15->setContentsMargins(0, 0, 0, 0);
        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
        _lblSeries = new QLabel(seriesTab);
        _lblSeries->setObjectName(QString::fromUtf8("_lblSeries"));

        hboxLayout13->addWidget(_lblSeries);

        _cbSeries = new QComboBox(seriesTab);
        _cbSeries->setObjectName(QString::fromUtf8("_cbSeries"));
        sizePolicy.setHeightForWidth(_cbSeries->sizePolicy().hasHeightForWidth());
        _cbSeries->setSizePolicy(sizePolicy);

        hboxLayout13->addWidget(_cbSeries);


        vboxLayout15->addLayout(hboxLayout13);

        spacerItem6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        vboxLayout15->addItem(spacerItem6);


        hboxLayout12->addLayout(vboxLayout15);

        vboxLayout16 = new QVBoxLayout();
        vboxLayout16->setSpacing(6);
        vboxLayout16->setObjectName(QString::fromUtf8("vboxLayout16"));
        vboxLayout16->setContentsMargins(0, 0, 0, 0);
        _btnNewSeries = new QPushButton(seriesTab);
        _btnNewSeries->setObjectName(QString::fromUtf8("_btnNewSeries"));

        vboxLayout16->addWidget(_btnNewSeries);

        _btnRemoveSeries = new QPushButton(seriesTab);
        _btnRemoveSeries->setObjectName(QString::fromUtf8("_btnRemoveSeries"));

        vboxLayout16->addWidget(_btnRemoveSeries);


        hboxLayout12->addLayout(vboxLayout16);


        vboxLayout14->addLayout(hboxLayout12);

        _gbSeriesProperties = new QGroupBox(seriesTab);
        _gbSeriesProperties->setObjectName(QString::fromUtf8("_gbSeriesProperties"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(_gbSeriesProperties->sizePolicy().hasHeightForWidth());
        _gbSeriesProperties->setSizePolicy(sizePolicy3);
        vboxLayout17 = new QVBoxLayout(_gbSeriesProperties);
        vboxLayout17->setSpacing(6);
        vboxLayout17->setContentsMargins(11, 11, 11, 11);
        vboxLayout17->setObjectName(QString::fromUtf8("vboxLayout17"));
        vboxLayout17->setContentsMargins(11, 11, 11, 11);
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        _leSeriesName = new QLineEdit(_gbSeriesProperties);
        _leSeriesName->setObjectName(QString::fromUtf8("_leSeriesName"));

        gridLayout2->addWidget(_leSeriesName, 0, 1, 1, 1);

        _lblSeriesColor = new QLabel(_gbSeriesProperties);
        _lblSeriesColor->setObjectName(QString::fromUtf8("_lblSeriesColor"));

        gridLayout2->addWidget(_lblSeriesColor, 2, 0, 1, 1);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setSpacing(6);
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        _cbColors = new QComboBox(_gbSeriesProperties);
        _cbColors->setObjectName(QString::fromUtf8("_cbColors"));
        sizePolicy.setHeightForWidth(_cbColors->sizePolicy().hasHeightForWidth());
        _cbColors->setSizePolicy(sizePolicy);
        _cbColors->setDuplicatesEnabled(false);

        hboxLayout14->addWidget(_cbColors);

        _btnEditColors = new QPushButton(_gbSeriesProperties);
        _btnEditColors->setObjectName(QString::fromUtf8("_btnEditColors"));

        hboxLayout14->addWidget(_btnEditColors);


        gridLayout2->addLayout(hboxLayout14, 2, 1, 1, 1);

        _leSeriesColumn = new QLineEdit(_gbSeriesProperties);
        _leSeriesColumn->setObjectName(QString::fromUtf8("_leSeriesColumn"));

        gridLayout2->addWidget(_leSeriesColumn, 1, 1, 1, 1);

        _lblSeriesName = new QLabel(_gbSeriesProperties);
        _lblSeriesName->setObjectName(QString::fromUtf8("_lblSeriesName"));

        gridLayout2->addWidget(_lblSeriesName, 0, 0, 1, 1);

        _lblSeriesColumn = new QLabel(_gbSeriesProperties);
        _lblSeriesColumn->setObjectName(QString::fromUtf8("_lblSeriesColumn"));

        gridLayout2->addWidget(_lblSeriesColumn, 1, 0, 1, 1);


        vboxLayout17->addLayout(gridLayout2);

        _gbSeriesStyle = new QGroupBox(_gbSeriesProperties);
        _gbSeriesStyle->setObjectName(QString::fromUtf8("_gbSeriesStyle"));
        vboxLayout18 = new QVBoxLayout(_gbSeriesStyle);
        vboxLayout18->setSpacing(6);
        vboxLayout18->setContentsMargins(11, 11, 11, 11);
        vboxLayout18->setObjectName(QString::fromUtf8("vboxLayout18"));
        vboxLayout18->setContentsMargins(11, 11, 11, 11);
        _cbSeriesStyleBars = new QCheckBox(_gbSeriesStyle);
        _cbSeriesStyleBars->setObjectName(QString::fromUtf8("_cbSeriesStyleBars"));

        vboxLayout18->addWidget(_cbSeriesStyleBars);

        _cbSeriesStyleLines = new QCheckBox(_gbSeriesStyle);
        _cbSeriesStyleLines->setObjectName(QString::fromUtf8("_cbSeriesStyleLines"));

        vboxLayout18->addWidget(_cbSeriesStyleLines);

        _cbSeriesStylePoints = new QCheckBox(_gbSeriesStyle);
        _cbSeriesStylePoints->setObjectName(QString::fromUtf8("_cbSeriesStylePoints"));

        vboxLayout18->addWidget(_cbSeriesStylePoints);


        vboxLayout17->addWidget(_gbSeriesStyle);


        vboxLayout14->addWidget(_gbSeriesProperties);

        _tabWidget->addTab(seriesTab, QString());

        vboxLayout->addWidget(_tabWidget);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setSpacing(6);
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        hboxLayout15->setContentsMargins(0, 0, 0, 0);
        spacerItem7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout15->addItem(spacerItem7);

        buttonOk = new QPushButton(GraphEditor);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);

        hboxLayout15->addWidget(buttonOk);

        buttonCancel = new QPushButton(GraphEditor);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout15->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout15);

#if QT_CONFIG(shortcut)
        _vPadLabel->setBuddy(_vPadSpinbox);
        _hPadLabel->setBuddy(_hPadSpinbox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(_tabWidget, cbQuery);
        QWidget::setTabOrder(cbQuery, leXPos);
        QWidget::setTabOrder(leXPos, leWidth);
        QWidget::setTabOrder(leWidth, leYPos);
        QWidget::setTabOrder(leYPos, leHeight);
        QWidget::setTabOrder(leHeight, _leBaseFont);
        QWidget::setTabOrder(_leBaseFont, _btnBaseFont);
        QWidget::setTabOrder(_btnBaseFont, _leTitle);
        QWidget::setTabOrder(_leTitle, _cbTitleUseBase);
        QWidget::setTabOrder(_cbTitleUseBase, _leTitleFont);
        QWidget::setTabOrder(_leTitleFont, _btnTitleFont);
        QWidget::setTabOrder(_btnTitleFont, _leData);
        QWidget::setTabOrder(_leData, _cbDataUseBase);
        QWidget::setTabOrder(_cbDataUseBase, _leDataFont);
        QWidget::setTabOrder(_leDataFont, _btnDataFont);
        QWidget::setTabOrder(_btnDataFont, _leDataTitle);
        QWidget::setTabOrder(_leDataTitle, _cbDataTitleUseBase);
        QWidget::setTabOrder(_cbDataTitleUseBase, _leDataTitleFont);
        QWidget::setTabOrder(_leDataTitleFont, _btnDataTitleFont);
        QWidget::setTabOrder(_btnDataTitleFont, _leMin);
        QWidget::setTabOrder(_leMin, _leMax);
        QWidget::setTabOrder(_leMax, _cbAutoMinMax);
        QWidget::setTabOrder(_cbAutoMinMax, _cbValueUseBase);
        QWidget::setTabOrder(_cbValueUseBase, _leValueFont);
        QWidget::setTabOrder(_leValueFont, _btnValueFont);
        QWidget::setTabOrder(_btnValueFont, _leValueTitle);
        QWidget::setTabOrder(_leValueTitle, _cbValueTitleUseBase);
        QWidget::setTabOrder(_cbValueTitleUseBase, _leValueTitleFont);
        QWidget::setTabOrder(_leValueTitleFont, _btnValueTitleFont);
        QWidget::setTabOrder(_btnValueTitleFont, _cbSeries);
        QWidget::setTabOrder(_cbSeries, _btnNewSeries);
        QWidget::setTabOrder(_btnNewSeries, _btnRemoveSeries);
        QWidget::setTabOrder(_btnRemoveSeries, _leSeriesName);
        QWidget::setTabOrder(_leSeriesName, _leSeriesColumn);
        QWidget::setTabOrder(_leSeriesColumn, _cbColors);
        QWidget::setTabOrder(_cbColors, _btnEditColors);
        QWidget::setTabOrder(_btnEditColors, _cbSeriesStyleBars);
        QWidget::setTabOrder(_cbSeriesStyleBars, _cbSeriesStyleLines);
        QWidget::setTabOrder(_cbSeriesStyleLines, _cbSeriesStylePoints);
        QWidget::setTabOrder(_cbSeriesStylePoints, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(GraphEditor);
        QObject::connect(buttonOk, SIGNAL(clicked()), GraphEditor, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), GraphEditor, SLOT(reject()));
        QObject::connect(_cbTitleUseBase, SIGNAL(toggled(bool)), _gbTitleFont, SLOT(setDisabled(bool)));
        QObject::connect(_cbDataTitleUseBase, SIGNAL(toggled(bool)), _gbDataTitleFont, SLOT(setDisabled(bool)));
        QObject::connect(_cbDataUseBase, SIGNAL(toggled(bool)), _gbDataFont, SLOT(setDisabled(bool)));
        QObject::connect(_cbValueTitleUseBase, SIGNAL(toggled(bool)), _gbValueTitleFont, SLOT(setDisabled(bool)));
        QObject::connect(_cbValueUseBase, SIGNAL(toggled(bool)), _gbValueFont, SLOT(setDisabled(bool)));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(GraphEditor);
    } // setupUi

    void retranslateUi(QDialog *GraphEditor)
    {
        GraphEditor->setWindowTitle(QCoreApplication::translate("GraphEditor", "Graph Editor", nullptr));
        TextLabel1_3->setText(QCoreApplication::translate("GraphEditor", "Query Source:", nullptr));
        GroupBox1->setTitle(QCoreApplication::translate("GraphEditor", "Position/Size", nullptr));
        leHeight->setText(QCoreApplication::translate("GraphEditor", "0.01", nullptr));
        leWidth->setText(QCoreApplication::translate("GraphEditor", "0.01", nullptr));
        TextLabel2->setText(QCoreApplication::translate("GraphEditor", "Y:", nullptr));
        TextLabel4->setText(QCoreApplication::translate("GraphEditor", "Height:", nullptr));
        TextLabel1_3_2->setText(QCoreApplication::translate("GraphEditor", "X:", nullptr));
        TextLabel3->setText(QCoreApplication::translate("GraphEditor", "Width:", nullptr));
        TextLabel5->setText(QCoreApplication::translate("GraphEditor", "in inches", nullptr));
        leYPos->setText(QCoreApplication::translate("GraphEditor", "0.00", nullptr));
        leXPos->setText(QCoreApplication::translate("GraphEditor", "0.00", nullptr));
        GroupBoxPadding->setTitle(QCoreApplication::translate("GraphEditor", "Padding (in pixels)", nullptr));
        _vPadLabel->setText(QCoreApplication::translate("GraphEditor", "Vertical:", nullptr));
        _hPadLabel->setText(QCoreApplication::translate("GraphEditor", "Horizontal:", nullptr));
        GroupBox2->setTitle(QCoreApplication::translate("GraphEditor", "Base Font", nullptr));
        _btnBaseFont->setText(QCoreApplication::translate("GraphEditor", "Font...", nullptr));
        _gbTitle->setTitle(QCoreApplication::translate("GraphEditor", "Title", nullptr));
        _lblTitle->setText(QCoreApplication::translate("GraphEditor", "Title:", nullptr));
        _cbTitleUseBase->setText(QCoreApplication::translate("GraphEditor", "Use Base Font", nullptr));
        _gbTitleFont->setTitle(QCoreApplication::translate("GraphEditor", "Title Font", nullptr));
        _btnTitleFont->setText(QCoreApplication::translate("GraphEditor", "Font...", nullptr));
        _tabWidget->setTabText(_tabWidget->indexOf(generalTab), QCoreApplication::translate("GraphEditor", "General", nullptr));
        _gbDataAxis->setTitle(QCoreApplication::translate("GraphEditor", "Data Axis Labels", nullptr));
        _lblData->setText(QCoreApplication::translate("GraphEditor", "Column:", nullptr));
        _cbDataUseBase->setText(QCoreApplication::translate("GraphEditor", "Use Base Font", nullptr));
        _gbDataFont->setTitle(QCoreApplication::translate("GraphEditor", "Data Axis Font", nullptr));
        _btnDataFont->setText(QCoreApplication::translate("GraphEditor", "Font...", nullptr));
        _gbDataAxisTitle->setTitle(QCoreApplication::translate("GraphEditor", "Data Axis Title", nullptr));
        _lblDataTitle->setText(QCoreApplication::translate("GraphEditor", "Title:", nullptr));
        _cbDataTitleUseBase->setText(QCoreApplication::translate("GraphEditor", "Use Base Font", nullptr));
        _gbDataTitleFont->setTitle(QCoreApplication::translate("GraphEditor", "Data Axis Title Font", nullptr));
        _btnDataTitleFont->setText(QCoreApplication::translate("GraphEditor", "Font...", nullptr));
        _tabWidget->setTabText(_tabWidget->indexOf(dataTab), QCoreApplication::translate("GraphEditor", "Data Axis", nullptr));
        _lblMin->setText(QCoreApplication::translate("GraphEditor", "Min:", nullptr));
        _lblMax->setText(QCoreApplication::translate("GraphEditor", "Max:", nullptr));
        _cbAutoMinMax->setText(QCoreApplication::translate("GraphEditor", "Expand Min/Max if needed", nullptr));
        _cbValueUseBase->setText(QCoreApplication::translate("GraphEditor", "Use Base Font", nullptr));
        _gbValueFont->setTitle(QCoreApplication::translate("GraphEditor", "Value Axis Font", nullptr));
        _btnValueFont->setText(QCoreApplication::translate("GraphEditor", "Font...", nullptr));
        _gbDataAxisTitle_2->setTitle(QCoreApplication::translate("GraphEditor", "Value Axis Title", nullptr));
        _lblValueTitle->setText(QCoreApplication::translate("GraphEditor", "Title:", nullptr));
        _cbValueTitleUseBase->setText(QCoreApplication::translate("GraphEditor", "Use Base Font", nullptr));
        _gbValueTitleFont->setTitle(QCoreApplication::translate("GraphEditor", "Value Axis Title Font", nullptr));
        _btnValueTitleFont->setText(QCoreApplication::translate("GraphEditor", "Font...", nullptr));
        _tabWidget->setTabText(_tabWidget->indexOf(valueTab), QCoreApplication::translate("GraphEditor", "Value Axis", nullptr));
        _lblSeries->setText(QCoreApplication::translate("GraphEditor", "Series:", nullptr));
        _btnNewSeries->setText(QCoreApplication::translate("GraphEditor", "New", nullptr));
        _btnRemoveSeries->setText(QCoreApplication::translate("GraphEditor", "Remove", nullptr));
        _gbSeriesProperties->setTitle(QCoreApplication::translate("GraphEditor", "Series Properties", nullptr));
        _lblSeriesColor->setText(QCoreApplication::translate("GraphEditor", "Color:", nullptr));
        _btnEditColors->setText(QCoreApplication::translate("GraphEditor", "Edit", nullptr));
        _lblSeriesName->setText(QCoreApplication::translate("GraphEditor", "Name:", nullptr));
        _lblSeriesColumn->setText(QCoreApplication::translate("GraphEditor", "Column:", nullptr));
        _gbSeriesStyle->setTitle(QCoreApplication::translate("GraphEditor", "Style", nullptr));
        _cbSeriesStyleBars->setText(QCoreApplication::translate("GraphEditor", "Bars", nullptr));
        _cbSeriesStyleLines->setText(QCoreApplication::translate("GraphEditor", "Lines", nullptr));
        _cbSeriesStylePoints->setText(QCoreApplication::translate("GraphEditor", "Points", nullptr));
        _tabWidget->setTabText(_tabWidget->indexOf(seriesTab), QCoreApplication::translate("GraphEditor", "Series", nullptr));
        buttonOk->setText(QCoreApplication::translate("GraphEditor", "&OK", nullptr));
#if QT_CONFIG(shortcut)
        buttonOk->setShortcut(QCoreApplication::translate("GraphEditor", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        buttonCancel->setText(QCoreApplication::translate("GraphEditor", "&Cancel", nullptr));
#if QT_CONFIG(shortcut)
        buttonCancel->setShortcut(QCoreApplication::translate("GraphEditor", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class GraphEditor: public Ui_GraphEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHEDITOR_H
