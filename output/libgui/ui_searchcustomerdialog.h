/********************************************************************************
** Form generated from reading UI file 'searchcustomerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCUSTOMERDIALOG_H
#define UI_SEARCHCUSTOMERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <tablewidget.h>

QT_BEGIN_NAMESPACE

class Ui_SearchCustomerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineName;
    LibGUI::TableWidget *table;

    void setupUi(QDialog *SearchCustomerDialog)
    {
        if (SearchCustomerDialog->objectName().isEmpty())
            SearchCustomerDialog->setObjectName(QStringLiteral("SearchCustomerDialog"));
        SearchCustomerDialog->resize(632, 394);
        verticalLayout = new QVBoxLayout(SearchCustomerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineName = new QLineEdit(SearchCustomerDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        verticalLayout->addWidget(lineName);

        table = new LibGUI::TableWidget(SearchCustomerDialog);
        table->setObjectName(QStringLiteral("table"));

        verticalLayout->addWidget(table);


        retranslateUi(SearchCustomerDialog);

        QMetaObject::connectSlotsByName(SearchCustomerDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchCustomerDialog)
    {
        SearchCustomerDialog->setWindowTitle(QApplication::translate("SearchCustomerDialog", "Search Customer", 0));
        lineName->setPlaceholderText(QApplication::translate("SearchCustomerDialog", "Search by name", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchCustomerDialog: public Ui_SearchCustomerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCUSTOMERDIALOG_H
