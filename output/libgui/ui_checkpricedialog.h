/********************************************************************************
** Form generated from reading UI file 'checkpricedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKPRICEDIALOG_H
#define UI_CHECKPRICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <tablewidget.h>

QT_BEGIN_NAMESPACE

class Ui_CheckPriceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineBarcode;
    QLabel *labelName;
    LibGUI::TableWidget *tableWidget;

    void setupUi(QDialog *CheckPriceDialog)
    {
        if (CheckPriceDialog->objectName().isEmpty())
            CheckPriceDialog->setObjectName(QStringLiteral("CheckPriceDialog"));
        CheckPriceDialog->resize(701, 365);
        CheckPriceDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CheckPriceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineBarcode = new QLineEdit(CheckPriceDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));

        verticalLayout->addWidget(lineBarcode);

        labelName = new QLabel(CheckPriceDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        verticalLayout->addWidget(labelName);

        tableWidget = new LibGUI::TableWidget(CheckPriceDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(CheckPriceDialog);

        QMetaObject::connectSlotsByName(CheckPriceDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckPriceDialog)
    {
        CheckPriceDialog->setWindowTitle(QApplication::translate("CheckPriceDialog", "Check Price", 0));
        lineBarcode->setPlaceholderText(QApplication::translate("CheckPriceDialog", "Search barcode", 0));
        labelName->setText(QApplication::translate("CheckPriceDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckPriceDialog: public Ui_CheckPriceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKPRICEDIALOG_H
