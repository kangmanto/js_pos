/********************************************************************************
** Form generated from reading UI file 'saveloadslotdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVELOADSLOTDIALOG_H
#define UI_SAVELOADSLOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SaveLoadSlotDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *SaveLoadSlotDialog)
    {
        if (SaveLoadSlotDialog->objectName().isEmpty())
            SaveLoadSlotDialog->setObjectName(QStringLiteral("SaveLoadSlotDialog"));
        SaveLoadSlotDialog->resize(260, 401);
        verticalLayout = new QVBoxLayout(SaveLoadSlotDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(SaveLoadSlotDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(SaveLoadSlotDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SaveLoadSlotDialog);

        QMetaObject::connectSlotsByName(SaveLoadSlotDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveLoadSlotDialog)
    {
        SaveLoadSlotDialog->setWindowTitle(QApplication::translate("SaveLoadSlotDialog", "Save and Load Slot", 0));
        pushButton->setText(QApplication::translate("SaveLoadSlotDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveLoadSlotDialog: public Ui_SaveLoadSlotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVELOADSLOTDIALOG_H
