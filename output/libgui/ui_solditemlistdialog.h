/********************************************************************************
** Form generated from reading UI file 'solditemlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLDITEMLISTDIALOG_H
#define UI_SOLDITEMLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "tablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SoldItemListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelNumber;
    QLabel *labelDate;
    QFrame *line;
    LibGUI::TableWidget *tableWidget;

    void setupUi(QDialog *SoldItemListDialog)
    {
        if (SoldItemListDialog->objectName().isEmpty())
            SoldItemListDialog->setObjectName(QStringLiteral("SoldItemListDialog"));
        SoldItemListDialog->resize(713, 334);
        SoldItemListDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SoldItemListDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(SoldItemListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(SoldItemListDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelNumber = new QLabel(SoldItemListDialog);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelNumber);

        labelDate = new QLabel(SoldItemListDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelDate);


        verticalLayout->addLayout(formLayout);

        line = new QFrame(SoldItemListDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        tableWidget = new LibGUI::TableWidget(SoldItemListDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(SoldItemListDialog);

        QMetaObject::connectSlotsByName(SoldItemListDialog);
    } // setupUi

    void retranslateUi(QDialog *SoldItemListDialog)
    {
        SoldItemListDialog->setWindowTitle(QApplication::translate("SoldItemListDialog", "Transaction Item List", 0));
        label->setText(QApplication::translate("SoldItemListDialog", "Transaction Number", 0));
        label_2->setText(QApplication::translate("SoldItemListDialog", "Date", 0));
        labelNumber->setText(QApplication::translate("SoldItemListDialog", "TextLabel", 0));
        labelDate->setText(QApplication::translate("SoldItemListDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class SoldItemListDialog: public Ui_SoldItemListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLDITEMLISTDIALOG_H
