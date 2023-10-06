/********************************************************************************
** Form generated from reading UI file 'paymentcashsuccessdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENTCASHSUCCESSDIALOG_H
#define UI_PAYMENTCASHSUCCESSDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_PaymentCashSuccessDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelTotal_2;
    QLabel *labelPayment_2;
    QLabel *labelChange_2;
    QLabel *labelTotal;
    QLabel *labelPayment;
    QLabel *labelChange;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *PaymentCashSuccessDialog)
    {
        if (PaymentCashSuccessDialog->objectName().isEmpty())
            PaymentCashSuccessDialog->setObjectName(QStringLiteral("PaymentCashSuccessDialog"));
        PaymentCashSuccessDialog->resize(365, 185);
        verticalLayout = new QVBoxLayout(PaymentCashSuccessDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal_2 = new QLabel(PaymentCashSuccessDialog);
        labelTotal_2->setObjectName(QStringLiteral("labelTotal_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTotal_2);

        labelPayment_2 = new QLabel(PaymentCashSuccessDialog);
        labelPayment_2->setObjectName(QStringLiteral("labelPayment_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPayment_2);

        labelChange_2 = new QLabel(PaymentCashSuccessDialog);
        labelChange_2->setObjectName(QStringLiteral("labelChange_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelChange_2);

        labelTotal = new QLabel(PaymentCashSuccessDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setStyleSheet(QStringLiteral("background: white; font-size: 20px;"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setMargin(6);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelTotal);

        labelPayment = new QLabel(PaymentCashSuccessDialog);
        labelPayment->setObjectName(QStringLiteral("labelPayment"));
        labelPayment->setStyleSheet(QStringLiteral("background: white; font-size: 20px;"));
        labelPayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelPayment->setMargin(6);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelPayment);

        labelChange = new QLabel(PaymentCashSuccessDialog);
        labelChange->setObjectName(QStringLiteral("labelChange"));
        labelChange->setStyleSheet(QStringLiteral("background: white; font-size: 20px;"));
        labelChange->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelChange->setMargin(6);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelChange);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(PaymentCashSuccessDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PaymentCashSuccessDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), PaymentCashSuccessDialog, SLOT(close()));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(PaymentCashSuccessDialog);
    } // setupUi

    void retranslateUi(QDialog *PaymentCashSuccessDialog)
    {
        PaymentCashSuccessDialog->setWindowTitle(QApplication::translate("PaymentCashSuccessDialog", "Payment Success", 0));
        labelTotal_2->setText(QApplication::translate("PaymentCashSuccessDialog", "Total", 0));
        labelPayment_2->setText(QApplication::translate("PaymentCashSuccessDialog", "Payment", 0));
        labelChange_2->setText(QApplication::translate("PaymentCashSuccessDialog", "Change", 0));
        labelTotal->setText(QApplication::translate("PaymentCashSuccessDialog", "TextLabel", 0));
        labelPayment->setText(QApplication::translate("PaymentCashSuccessDialog", "TextLabel", 0));
        labelChange->setText(QApplication::translate("PaymentCashSuccessDialog", "TextLabel", 0));
        pushButton->setText(QApplication::translate("PaymentCashSuccessDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class PaymentCashSuccessDialog: public Ui_PaymentCashSuccessDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENTCASHSUCCESSDIALOG_H
