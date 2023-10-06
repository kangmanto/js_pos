/********************************************************************************
** Form generated from reading UI file 'cashierhelpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERHELPDIALOG_H
#define UI_CASHIERHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CashierHelpDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *CashierHelpDialog)
    {
        if (CashierHelpDialog->objectName().isEmpty())
            CashierHelpDialog->setObjectName(QStringLiteral("CashierHelpDialog"));
        CashierHelpDialog->resize(540, 430);
        verticalLayout = new QVBoxLayout(CashierHelpDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(CashierHelpDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideNone);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(CashierHelpDialog);

        QMetaObject::connectSlotsByName(CashierHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CashierHelpDialog)
    {
        CashierHelpDialog->setWindowTitle(QApplication::translate("CashierHelpDialog", "Cashier Help", 0));
    } // retranslateUi

};

namespace Ui {
    class CashierHelpDialog: public Ui_CashierHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERHELPDIALOG_H
