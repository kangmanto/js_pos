/********************************************************************************
** Form generated from reading UI file 'stockcarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKCARDDIALOG_H
#define UI_STOCKCARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <tablewidget.h>

QT_BEGIN_NAMESPACE

class Ui_StockCardDialog
{
public:
    QVBoxLayout *verticalLayout;
    LibGUI::TableWidget *table;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *StockCardDialog)
    {
        if (StockCardDialog->objectName().isEmpty())
            StockCardDialog->setObjectName(QStringLiteral("StockCardDialog"));
        StockCardDialog->resize(747, 574);
        verticalLayout = new QVBoxLayout(StockCardDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        table = new LibGUI::TableWidget(StockCardDialog);
        table->setObjectName(QStringLiteral("table"));

        verticalLayout->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(StockCardDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StockCardDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), StockCardDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(StockCardDialog);
    } // setupUi

    void retranslateUi(QDialog *StockCardDialog)
    {
        StockCardDialog->setWindowTitle(QApplication::translate("StockCardDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("StockCardDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class StockCardDialog: public Ui_StockCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKCARDDIALOG_H
