/********************************************************************************
** Form generated from reading UI file 'listdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTDIALOG_H
#define UI_LISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushSelect;

    void setupUi(QDialog *ListDialog)
    {
        if (ListDialog->objectName().isEmpty())
            ListDialog->setObjectName(QStringLiteral("ListDialog"));
        ListDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ListDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(ListDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushSelect = new QPushButton(ListDialog);
        pushSelect->setObjectName(QStringLiteral("pushSelect"));

        horizontalLayout->addWidget(pushSelect);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ListDialog);

        QMetaObject::connectSlotsByName(ListDialog);
    } // setupUi

    void retranslateUi(QDialog *ListDialog)
    {
        ListDialog->setWindowTitle(QApplication::translate("ListDialog", "File List Dialog", 0));
        pushSelect->setText(QApplication::translate("ListDialog", "Select", 0));
    } // retranslateUi

};

namespace Ui {
    class ListDialog: public Ui_ListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTDIALOG_H
