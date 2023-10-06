/********************************************************************************
** Form generated from reading UI file 'searchitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHITEMDIALOG_H
#define UI_SEARCHITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchItemDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineName;

    void setupUi(QDialog *SearchItemDialog)
    {
        if (SearchItemDialog->objectName().isEmpty())
            SearchItemDialog->setObjectName(QStringLiteral("SearchItemDialog"));
        SearchItemDialog->resize(619, 419);
        SearchItemDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SearchItemDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineName = new QLineEdit(SearchItemDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        verticalLayout->addWidget(lineName);


        retranslateUi(SearchItemDialog);

        QMetaObject::connectSlotsByName(SearchItemDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchItemDialog)
    {
        SearchItemDialog->setWindowTitle(QApplication::translate("SearchItemDialog", "Search Item", 0));
        lineName->setPlaceholderText(QApplication::translate("SearchItemDialog", "Type name of item", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchItemDialog: public Ui_SearchItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHITEMDIALOG_H
