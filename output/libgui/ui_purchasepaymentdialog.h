/********************************************************************************
** Form generated from reading UI file 'purchasepaymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEPAYMENTDIALOG_H
#define UI_PURCHASEPAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PurchasePaymentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelSuplier;
    QLabel *label_2;
    QLabel *labelTotal;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *linePayment;
    QLabel *label_4;
    QDateEdit *datePayment;
    QCheckBox *checkPaid;
    QLabel *label_6;
    QComboBox *comboBank;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *PurchasePaymentDialog)
    {
        if (PurchasePaymentDialog->objectName().isEmpty())
            PurchasePaymentDialog->setObjectName(QStringLiteral("PurchasePaymentDialog"));
        PurchasePaymentDialog->resize(418, 234);
        verticalLayout = new QVBoxLayout(PurchasePaymentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(PurchasePaymentDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelSuplier = new QLabel(PurchasePaymentDialog);
        labelSuplier->setObjectName(QStringLiteral("labelSuplier"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelSuplier);

        label_2 = new QLabel(PurchasePaymentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelTotal = new QLabel(PurchasePaymentDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, labelTotal);

        label_5 = new QLabel(PurchasePaymentDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_3 = new QLabel(PurchasePaymentDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        linePayment = new QLineEdit(PurchasePaymentDialog);
        linePayment->setObjectName(QStringLiteral("linePayment"));

        formLayout->setWidget(4, QFormLayout::FieldRole, linePayment);

        label_4 = new QLabel(PurchasePaymentDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        datePayment = new QDateEdit(PurchasePaymentDialog);
        datePayment->setObjectName(QStringLiteral("datePayment"));
        datePayment->setCalendarPopup(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, datePayment);

        checkPaid = new QCheckBox(PurchasePaymentDialog);
        checkPaid->setObjectName(QStringLiteral("checkPaid"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkPaid);

        label_6 = new QLabel(PurchasePaymentDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        comboBank = new QComboBox(PurchasePaymentDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBank);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(PurchasePaymentDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(PurchasePaymentDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(checkPaid, comboBank);
        QWidget::setTabOrder(comboBank, linePayment);
        QWidget::setTabOrder(linePayment, datePayment);
        QWidget::setTabOrder(datePayment, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(PurchasePaymentDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), PurchasePaymentDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(PurchasePaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *PurchasePaymentDialog)
    {
        PurchasePaymentDialog->setWindowTitle(QApplication::translate("PurchasePaymentDialog", "Purchase Payment", 0));
        label->setText(QApplication::translate("PurchasePaymentDialog", "Suplier", 0));
        labelSuplier->setText(QApplication::translate("PurchasePaymentDialog", "Suplier", 0));
        label_2->setText(QApplication::translate("PurchasePaymentDialog", "Total", 0));
        labelTotal->setText(QApplication::translate("PurchasePaymentDialog", "0", 0));
        label_5->setText(QApplication::translate("PurchasePaymentDialog", "Set as paid", 0));
        label_3->setText(QApplication::translate("PurchasePaymentDialog", "Payment Number", 0));
        label_4->setText(QApplication::translate("PurchasePaymentDialog", "Payment Date", 0));
        checkPaid->setText(QString());
        label_6->setText(QApplication::translate("PurchasePaymentDialog", "Bank", 0));
        pushCancel->setText(QApplication::translate("PurchasePaymentDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("PurchasePaymentDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class PurchasePaymentDialog: public Ui_PurchasePaymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEPAYMENTDIALOG_H
