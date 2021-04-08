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
** Form generated from reading UI file 'coloreditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREDITOR_H
#define UI_COLOREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorEditor
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *_lblName;
    QLineEdit *_editName;
    QGroupBox *_gbComponents;
    QGridLayout *gridLayout;
    QLineEdit *_editBlue;
    QLineEdit *_editGreen;
    QLabel *_lblGreen;
    QLabel *_lblRed;
    QLabel *_lblBlue;
    QLineEdit *_editRed;
    QVBoxLayout *vboxLayout1;
    QPushButton *_btnAccept;
    QPushButton *_btnCancel;
    QSpacerItem *spacerItem;
    QPushButton *_btnColor;

    void setupUi(QDialog *ColorEditor)
    {
        if (ColorEditor->objectName().isEmpty())
            ColorEditor->setObjectName(QString::fromUtf8("ColorEditor"));
        ColorEditor->resize(300, 159);
        hboxLayout = new QHBoxLayout(ColorEditor);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        _lblName = new QLabel(ColorEditor);
        _lblName->setObjectName(QString::fromUtf8("_lblName"));

        hboxLayout1->addWidget(_lblName);

        _editName = new QLineEdit(ColorEditor);
        _editName->setObjectName(QString::fromUtf8("_editName"));

        hboxLayout1->addWidget(_editName);


        vboxLayout->addLayout(hboxLayout1);

        _gbComponents = new QGroupBox(ColorEditor);
        _gbComponents->setObjectName(QString::fromUtf8("_gbComponents"));
        gridLayout = new QGridLayout(_gbComponents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _editBlue = new QLineEdit(_gbComponents);
        _editBlue->setObjectName(QString::fromUtf8("_editBlue"));

        gridLayout->addWidget(_editBlue, 0, 2, 1, 1);

        _editGreen = new QLineEdit(_gbComponents);
        _editGreen->setObjectName(QString::fromUtf8("_editGreen"));

        gridLayout->addWidget(_editGreen, 0, 1, 1, 1);

        _lblGreen = new QLabel(_gbComponents);
        _lblGreen->setObjectName(QString::fromUtf8("_lblGreen"));
        _lblGreen->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(_lblGreen, 1, 1, 1, 1);

        _lblRed = new QLabel(_gbComponents);
        _lblRed->setObjectName(QString::fromUtf8("_lblRed"));
        _lblRed->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(_lblRed, 1, 0, 1, 1);

        _lblBlue = new QLabel(_gbComponents);
        _lblBlue->setObjectName(QString::fromUtf8("_lblBlue"));
        _lblBlue->setTextFormat(Qt::AutoText);
        _lblBlue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(_lblBlue, 1, 2, 1, 1);

        _editRed = new QLineEdit(_gbComponents);
        _editRed->setObjectName(QString::fromUtf8("_editRed"));

        gridLayout->addWidget(_editRed, 0, 0, 1, 1);


        vboxLayout->addWidget(_gbComponents);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        _btnAccept = new QPushButton(ColorEditor);
        _btnAccept->setObjectName(QString::fromUtf8("_btnAccept"));

        vboxLayout1->addWidget(_btnAccept);

        _btnCancel = new QPushButton(ColorEditor);
        _btnCancel->setObjectName(QString::fromUtf8("_btnCancel"));

        vboxLayout1->addWidget(_btnCancel);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        _btnColor = new QPushButton(ColorEditor);
        _btnColor->setObjectName(QString::fromUtf8("_btnColor"));

        vboxLayout1->addWidget(_btnColor);


        hboxLayout->addLayout(vboxLayout1);

        QWidget::setTabOrder(_editName, _editRed);
        QWidget::setTabOrder(_editRed, _editGreen);
        QWidget::setTabOrder(_editGreen, _editBlue);
        QWidget::setTabOrder(_editBlue, _btnColor);
        QWidget::setTabOrder(_btnColor, _btnAccept);
        QWidget::setTabOrder(_btnAccept, _btnCancel);

        retranslateUi(ColorEditor);
        QObject::connect(_btnAccept, SIGNAL(clicked()), ColorEditor, SLOT(accept()));
        QObject::connect(_btnCancel, SIGNAL(clicked()), ColorEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColorEditor);
    } // setupUi

    void retranslateUi(QDialog *ColorEditor)
    {
        ColorEditor->setWindowTitle(QCoreApplication::translate("ColorEditor", "Color Editor", nullptr));
        _lblName->setText(QCoreApplication::translate("ColorEditor", "Name:", nullptr));
        _gbComponents->setTitle(QCoreApplication::translate("ColorEditor", "Components", nullptr));
        _lblGreen->setText(QCoreApplication::translate("ColorEditor", "Green", nullptr));
        _lblRed->setText(QCoreApplication::translate("ColorEditor", "Red", nullptr));
        _lblBlue->setText(QCoreApplication::translate("ColorEditor", "Blue", nullptr));
        _btnAccept->setText(QCoreApplication::translate("ColorEditor", "&OK", nullptr));
        _btnCancel->setText(QCoreApplication::translate("ColorEditor", "&Cancel", nullptr));
        _btnColor->setText(QCoreApplication::translate("ColorEditor", "Color...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorEditor: public Ui_ColorEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREDITOR_H
