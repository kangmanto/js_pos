/********************************************************************************
** Form generated from reading UI file 'advancepaymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEPAYMENTDIALOG_H
#define UI_ADVANCEPAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "moneylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_AdvancePaymentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    LibGUI::MoneyLineEdit *linePayment;
    QLabel *labelTotal;
    QLabel *labelCredit;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *labelCusNumber;
    QLabel *labelCusName;
    QLabel *labelCusReward;
    QLabel *labelCusCredit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushPay;

    void setupUi(QDialog *AdvancePaymentDialog)
    {
        if (AdvancePaymentDialog->objectName().isEmpty())
            AdvancePaymentDialog->setObjectName(QStringLiteral("AdvancePaymentDialog"));
        AdvancePaymentDialog->resize(386, 382);
        AdvancePaymentDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AdvancePaymentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(AdvancePaymentDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox);

        linePayment = new LibGUI::MoneyLineEdit(groupBox);
        linePayment->setObjectName(QStringLiteral("linePayment"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, linePayment);

        labelTotal = new QLabel(groupBox);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelTotal);

        labelCredit = new QLabel(groupBox);
        labelCredit->setObjectName(QStringLiteral("labelCredit"));
        labelCredit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelCredit);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AdvancePaymentDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        labelCusNumber = new QLabel(groupBox_2);
        labelCusNumber->setObjectName(QStringLiteral("labelCusNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelCusNumber);

        labelCusName = new QLabel(groupBox_2);
        labelCusName->setObjectName(QStringLiteral("labelCusName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelCusName);

        labelCusReward = new QLabel(groupBox_2);
        labelCusReward->setObjectName(QStringLiteral("labelCusReward"));
        labelCusReward->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelCusReward);

        labelCusCredit = new QLabel(groupBox_2);
        labelCusCredit->setObjectName(QStringLiteral("labelCusCredit"));
        labelCusCredit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelCusCredit);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AdvancePaymentDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushPay = new QPushButton(AdvancePaymentDialog);
        pushPay->setObjectName(QStringLiteral("pushPay"));

        horizontalLayout->addWidget(pushPay);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboBox, linePayment);
        QWidget::setTabOrder(linePayment, pushPay);
        QWidget::setTabOrder(pushPay, pushCancel);

        retranslateUi(AdvancePaymentDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AdvancePaymentDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AdvancePaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvancePaymentDialog)
    {
        AdvancePaymentDialog->setWindowTitle(QApplication::translate("AdvancePaymentDialog", "Advance Payment", 0));
        groupBox->setTitle(QApplication::translate("AdvancePaymentDialog", "Payment", 0));
        label->setText(QApplication::translate("AdvancePaymentDialog", "Total", 0));
        label_2->setText(QApplication::translate("AdvancePaymentDialog", "Method", 0));
        label_3->setText(QApplication::translate("AdvancePaymentDialog", "Payment", 0));
        label_4->setText(QApplication::translate("AdvancePaymentDialog", "Credit", 0));
        labelTotal->setText(QApplication::translate("AdvancePaymentDialog", "TextLabel", 0));
        labelCredit->setText(QApplication::translate("AdvancePaymentDialog", "TextLabel", 0));
        groupBox_2->setTitle(QApplication::translate("AdvancePaymentDialog", "Customer", 0));
        label_5->setText(QApplication::translate("AdvancePaymentDialog", "Number", 0));
        label_6->setText(QApplication::translate("AdvancePaymentDialog", "Name", 0));
        label_7->setText(QApplication::translate("AdvancePaymentDialog", "Reward", 0));
        label_8->setText(QApplication::translate("AdvancePaymentDialog", "Credit", 0));
        labelCusNumber->setText(QApplication::translate("AdvancePaymentDialog", "TextLabel", 0));
        labelCusName->setText(QApplication::translate("AdvancePaymentDialog", "TextLabel", 0));
        labelCusReward->setText(QApplication::translate("AdvancePaymentDialog", "TextLabel", 0));
        labelCusCredit->setText(QApplication::translate("AdvancePaymentDialog", "TextLabel", 0));
        pushCancel->setText(QApplication::translate("AdvancePaymentDialog", "Cancel", 0));
        pushPay->setText(QApplication::translate("AdvancePaymentDialog", "Pay", 0));
    } // retranslateUi

};

namespace Ui {
    class AdvancePaymentDialog: public Ui_AdvancePaymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEPAYMENTDIALOG_H
