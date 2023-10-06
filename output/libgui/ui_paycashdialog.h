/********************************************************************************
** Form generated from reading UI file 'paycashdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYCASHDIALOG_H
#define UI_PAYCASHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "moneylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PayCashDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelTotal;
    LibGUI::MoneyLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;
    QPushButton *pushPay;

    void setupUi(QDialog *PayCashDialog)
    {
        if (PayCashDialog->objectName().isEmpty())
            PayCashDialog->setObjectName(QStringLiteral("PayCashDialog"));
        PayCashDialog->resize(368, 125);
        verticalLayout = new QVBoxLayout(PayCashDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(PayCashDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(PayCashDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelTotal = new QLabel(PayCashDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelTotal);

        lineEdit = new LibGUI::MoneyLineEdit(PayCashDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(PayCashDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(PayCashDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));
        pushSave->setAutoDefault(false);

        horizontalLayout->addWidget(pushSave);

        pushPay = new QPushButton(PayCashDialog);
        pushPay->setObjectName(QStringLiteral("pushPay"));

        horizontalLayout->addWidget(pushPay);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineEdit, pushCancel);
        QWidget::setTabOrder(pushCancel, pushSave);
        QWidget::setTabOrder(pushSave, pushPay);

        retranslateUi(PayCashDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), PayCashDialog, SLOT(close()));

        pushPay->setDefault(true);


        QMetaObject::connectSlotsByName(PayCashDialog);
    } // setupUi

    void retranslateUi(QDialog *PayCashDialog)
    {
        PayCashDialog->setWindowTitle(QApplication::translate("PayCashDialog", "Pay Cash", 0));
        label->setText(QApplication::translate("PayCashDialog", "Total", 0));
        label_2->setText(QApplication::translate("PayCashDialog", "Payment", 0));
        labelTotal->setText(QApplication::translate("PayCashDialog", "TextLabel", 0));
        pushCancel->setText(QApplication::translate("PayCashDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("PayCashDialog", "Save", 0));
        pushPay->setText(QApplication::translate("PayCashDialog", "Save and Print", 0));
    } // retranslateUi

};

namespace Ui {
    class PayCashDialog: public Ui_PayCashDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYCASHDIALOG_H
