/********************************************************************************
** Form generated from reading UI file 'addcreditpaymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCREDITPAYMENTDIALOG_H
#define UI_ADDCREDITPAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "moneylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_AddCreditPaymentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelTotal;
    QLabel *label_4;
    LibGUI::MoneyLineEdit *linePayment;
    QPlainTextEdit *plainDetail;
    QLabel *label_3;
    QComboBox *comboBank;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddCreditPaymentDialog)
    {
        if (AddCreditPaymentDialog->objectName().isEmpty())
            AddCreditPaymentDialog->setObjectName(QStringLiteral("AddCreditPaymentDialog"));
        AddCreditPaymentDialog->resize(365, 238);
        AddCreditPaymentDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AddCreditPaymentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AddCreditPaymentDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AddCreditPaymentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        labelTotal = new QLabel(AddCreditPaymentDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelTotal);

        label_4 = new QLabel(AddCreditPaymentDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        linePayment = new LibGUI::MoneyLineEdit(AddCreditPaymentDialog);
        linePayment->setObjectName(QStringLiteral("linePayment"));

        formLayout->setWidget(2, QFormLayout::FieldRole, linePayment);

        plainDetail = new QPlainTextEdit(AddCreditPaymentDialog);
        plainDetail->setObjectName(QStringLiteral("plainDetail"));
        plainDetail->setMaximumSize(QSize(16777215, 100));

        formLayout->setWidget(3, QFormLayout::FieldRole, plainDetail);

        label_3 = new QLabel(AddCreditPaymentDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboBank = new QComboBox(AddCreditPaymentDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBank);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddCreditPaymentDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddCreditPaymentDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboBank, linePayment);
        QWidget::setTabOrder(linePayment, plainDetail);
        QWidget::setTabOrder(plainDetail, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(AddCreditPaymentDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddCreditPaymentDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(AddCreditPaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *AddCreditPaymentDialog)
    {
        AddCreditPaymentDialog->setWindowTitle(QApplication::translate("AddCreditPaymentDialog", "Add New Credit Payment", 0));
        label->setText(QApplication::translate("AddCreditPaymentDialog", "Total Credit", 0));
        label_2->setText(QApplication::translate("AddCreditPaymentDialog", "Payment", 0));
        labelTotal->setText(QApplication::translate("AddCreditPaymentDialog", "TextLabel", 0));
        label_4->setText(QApplication::translate("AddCreditPaymentDialog", "Detail", 0));
        label_3->setText(QApplication::translate("AddCreditPaymentDialog", "Bank", 0));
        pushCancel->setText(QApplication::translate("AddCreditPaymentDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddCreditPaymentDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddCreditPaymentDialog: public Ui_AddCreditPaymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCREDITPAYMENTDIALOG_H
