/********************************************************************************
** Form generated from reading UI file 'transactionlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONLISTDIALOG_H
#define UI_TRANSACTIONLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "tablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TransactionListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineNumber;
    LibGUI::TableWidget *tableWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QDialog *TransactionListDialog)
    {
        if (TransactionListDialog->objectName().isEmpty())
            TransactionListDialog->setObjectName(QStringLiteral("TransactionListDialog"));
        TransactionListDialog->resize(685, 432);
        verticalLayout = new QVBoxLayout(TransactionListDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineNumber = new QLineEdit(TransactionListDialog);
        lineNumber->setObjectName(QStringLiteral("lineNumber"));

        verticalLayout->addWidget(lineNumber);

        tableWidget = new LibGUI::TableWidget(TransactionListDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        groupBox = new QGroupBox(TransactionListDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font-size: 12px;"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(groupBox);


        retranslateUi(TransactionListDialog);

        QMetaObject::connectSlotsByName(TransactionListDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactionListDialog)
    {
        TransactionListDialog->setWindowTitle(QApplication::translate("TransactionListDialog", "Previous Transaction", 0));
        lineNumber->setPlaceholderText(QApplication::translate("TransactionListDialog", "Search transaction number", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("TransactionListDialog", "p : print transaction", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionListDialog: public Ui_TransactionListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONLISTDIALOG_H
