/********************************************************************************
** Form generated from reading UI file 'customercreditpaymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERCREDITPAYMENTDIALOG_H
#define UI_CUSTOMERCREDITPAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomerCreditPaymentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *doublePayment;
    QLabel *labelName;
    QLabel *labelCredit;
    QLabel *labelReward;
    QLabel *label_9;
    QLabel *labelRest;
    QLabel *label_6;
    QLabel *labelPhone;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineID;
    QPushButton *pushSearch;
    QLabel *label_7;
    QComboBox *comboBank;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushPay;

    void setupUi(QDialog *CustomerCreditPaymentDialog)
    {
        if (CustomerCreditPaymentDialog->objectName().isEmpty())
            CustomerCreditPaymentDialog->setObjectName(QStringLiteral("CustomerCreditPaymentDialog"));
        CustomerCreditPaymentDialog->resize(286, 248);
        verticalLayout = new QVBoxLayout(CustomerCreditPaymentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(CustomerCreditPaymentDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(CustomerCreditPaymentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(CustomerCreditPaymentDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(CustomerCreditPaymentDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(CustomerCreditPaymentDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        doublePayment = new QDoubleSpinBox(CustomerCreditPaymentDialog);
        doublePayment->setObjectName(QStringLiteral("doublePayment"));
        doublePayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doublePayment->setMaximum(1e+08);

        formLayout->setWidget(5, QFormLayout::FieldRole, doublePayment);

        labelName = new QLabel(CustomerCreditPaymentDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        labelCredit = new QLabel(CustomerCreditPaymentDialog);
        labelCredit->setObjectName(QStringLiteral("labelCredit"));
        labelCredit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelCredit);

        labelReward = new QLabel(CustomerCreditPaymentDialog);
        labelReward->setObjectName(QStringLiteral("labelReward"));
        labelReward->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelReward);

        label_9 = new QLabel(CustomerCreditPaymentDialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        labelRest = new QLabel(CustomerCreditPaymentDialog);
        labelRest->setObjectName(QStringLiteral("labelRest"));
        labelRest->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::FieldRole, labelRest);

        label_6 = new QLabel(CustomerCreditPaymentDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        labelPhone = new QLabel(CustomerCreditPaymentDialog);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelPhone);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineID = new QLineEdit(CustomerCreditPaymentDialog);
        lineID->setObjectName(QStringLiteral("lineID"));

        horizontalLayout_2->addWidget(lineID);

        pushSearch = new QPushButton(CustomerCreditPaymentDialog);
        pushSearch->setObjectName(QStringLiteral("pushSearch"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/16x16/blue-document-search-result.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushSearch->setIcon(icon);
        pushSearch->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushSearch);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_7 = new QLabel(CustomerCreditPaymentDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        comboBank = new QComboBox(CustomerCreditPaymentDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBank);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(CustomerCreditPaymentDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushPay = new QPushButton(CustomerCreditPaymentDialog);
        pushPay->setObjectName(QStringLiteral("pushPay"));
        pushPay->setAutoDefault(false);

        horizontalLayout->addWidget(pushPay);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineID, pushSearch);
        QWidget::setTabOrder(pushSearch, doublePayment);
        QWidget::setTabOrder(doublePayment, comboBank);
        QWidget::setTabOrder(comboBank, pushPay);
        QWidget::setTabOrder(pushPay, pushCancel);

        retranslateUi(CustomerCreditPaymentDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), CustomerCreditPaymentDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(CustomerCreditPaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomerCreditPaymentDialog)
    {
        CustomerCreditPaymentDialog->setWindowTitle(QApplication::translate("CustomerCreditPaymentDialog", "Customer Credit Payment", 0));
        label->setText(QApplication::translate("CustomerCreditPaymentDialog", "ID", 0));
        label_2->setText(QApplication::translate("CustomerCreditPaymentDialog", "Name", 0));
        label_3->setText(QApplication::translate("CustomerCreditPaymentDialog", "Credit", 0));
        label_4->setText(QApplication::translate("CustomerCreditPaymentDialog", "Reward", 0));
        label_5->setText(QApplication::translate("CustomerCreditPaymentDialog", "Payment", 0));
        labelName->setText(QString());
        labelCredit->setText(QApplication::translate("CustomerCreditPaymentDialog", "0", 0));
        labelReward->setText(QApplication::translate("CustomerCreditPaymentDialog", "0", 0));
        label_9->setText(QApplication::translate("CustomerCreditPaymentDialog", "Rest", 0));
        labelRest->setText(QApplication::translate("CustomerCreditPaymentDialog", "0", 0));
        label_6->setText(QApplication::translate("CustomerCreditPaymentDialog", "Phone", 0));
        labelPhone->setText(QString());
        lineID->setPlaceholderText(QApplication::translate("CustomerCreditPaymentDialog", "Customer ID", 0));
        pushSearch->setText(QString());
        label_7->setText(QApplication::translate("CustomerCreditPaymentDialog", "Bank", 0));
        pushCancel->setText(QApplication::translate("CustomerCreditPaymentDialog", "Cancel", 0));
        pushPay->setText(QApplication::translate("CustomerCreditPaymentDialog", "Pay", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerCreditPaymentDialog: public Ui_CustomerCreditPaymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERCREDITPAYMENTDIALOG_H
