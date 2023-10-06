/********************************************************************************
** Form generated from reading UI file 'browserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSERDIALOG_H
#define UI_BROWSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BrowserDialog
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *BrowserDialog)
    {
        if (BrowserDialog->objectName().isEmpty())
            BrowserDialog->setObjectName(QStringLiteral("BrowserDialog"));
        BrowserDialog->resize(707, 496);
        verticalLayout = new QVBoxLayout(BrowserDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        retranslateUi(BrowserDialog);

        QMetaObject::connectSlotsByName(BrowserDialog);
    } // setupUi

    void retranslateUi(QDialog *BrowserDialog)
    {
        BrowserDialog->setWindowTitle(QApplication::translate("BrowserDialog", "Internet Browser", 0));
    } // retranslateUi

};

namespace Ui {
    class BrowserDialog: public Ui_BrowserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSERDIALOG_H
