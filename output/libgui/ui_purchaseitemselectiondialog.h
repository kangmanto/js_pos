/********************************************************************************
** Form generated from reading UI file 'purchaseitemselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEITEMSELECTIONDIALOG_H
#define UI_PURCHASEITEMSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "tablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PurchaseItemSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    LibGUI::TableWidget *tableWidget;

    void setupUi(QDialog *PurchaseItemSelectionDialog)
    {
        if (PurchaseItemSelectionDialog->objectName().isEmpty())
            PurchaseItemSelectionDialog->setObjectName(QStringLiteral("PurchaseItemSelectionDialog"));
        PurchaseItemSelectionDialog->resize(618, 338);
        verticalLayout = new QVBoxLayout(PurchaseItemSelectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new LibGUI::TableWidget(PurchaseItemSelectionDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(PurchaseItemSelectionDialog);

        QMetaObject::connectSlotsByName(PurchaseItemSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *PurchaseItemSelectionDialog)
    {
        PurchaseItemSelectionDialog->setWindowTitle(QApplication::translate("PurchaseItemSelectionDialog", "Select Purchase Item", 0));
    } // retranslateUi

};

namespace Ui {
    class PurchaseItemSelectionDialog: public Ui_PurchaseItemSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEITEMSELECTIONDIALOG_H
