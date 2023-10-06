/********************************************************************************
** Form generated from reading UI file 'purchaseadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEADDDIALOG_H
#define UI_PURCHASEADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PurchaseAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateCreated;
    QLineEdit *lineNumber;
    QComboBox *comboSuplier;
    QDateEdit *dateDeadline;
    QLabel *label_5;
    QComboBox *comboPaymentType;
    QLabel *label_6;
    QLineEdit *lineDiscountFormula;
    QLabel *label_10;
    QComboBox *comboBank;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *labelTotal;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelDiscount;
    QLabel *labelFinal;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *PurchaseAddDialog)
    {
        if (PurchaseAddDialog->objectName().isEmpty())
            PurchaseAddDialog->setObjectName(QStringLiteral("PurchaseAddDialog"));
        PurchaseAddDialog->resize(461, 404);
        PurchaseAddDialog->setMinimumSize(QSize(450, 0));
        PurchaseAddDialog->setModal(true);
        verticalLayout = new QVBoxLayout(PurchaseAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(PurchaseAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(PurchaseAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(PurchaseAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(PurchaseAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        dateCreated = new QDateEdit(PurchaseAddDialog);
        dateCreated->setObjectName(QStringLiteral("dateCreated"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateCreated);

        lineNumber = new QLineEdit(PurchaseAddDialog);
        lineNumber->setObjectName(QStringLiteral("lineNumber"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineNumber);

        comboSuplier = new QComboBox(PurchaseAddDialog);
        comboSuplier->setObjectName(QStringLiteral("comboSuplier"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboSuplier);

        dateDeadline = new QDateEdit(PurchaseAddDialog);
        dateDeadline->setObjectName(QStringLiteral("dateDeadline"));

        formLayout->setWidget(5, QFormLayout::FieldRole, dateDeadline);

        label_5 = new QLabel(PurchaseAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        comboPaymentType = new QComboBox(PurchaseAddDialog);
        comboPaymentType->setObjectName(QStringLiteral("comboPaymentType"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboPaymentType);

        label_6 = new QLabel(PurchaseAddDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lineDiscountFormula = new QLineEdit(PurchaseAddDialog);
        lineDiscountFormula->setObjectName(QStringLiteral("lineDiscountFormula"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineDiscountFormula);

        label_10 = new QLabel(PurchaseAddDialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        comboBank = new QComboBox(PurchaseAddDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBank);


        verticalLayout->addLayout(formLayout);

        groupBox = new QGroupBox(PurchaseAddDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        labelTotal = new QLabel(groupBox);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelTotal);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        labelDiscount = new QLabel(groupBox);
        labelDiscount->setObjectName(QStringLiteral("labelDiscount"));
        labelDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelDiscount);

        labelFinal = new QLabel(groupBox);
        labelFinal->setObjectName(QStringLiteral("labelFinal"));
        labelFinal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelFinal);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(PurchaseAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(PurchaseAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(dateCreated, lineNumber);
        QWidget::setTabOrder(lineNumber, comboSuplier);
        QWidget::setTabOrder(comboSuplier, comboPaymentType);
        QWidget::setTabOrder(comboPaymentType, comboBank);
        QWidget::setTabOrder(comboBank, dateDeadline);
        QWidget::setTabOrder(dateDeadline, lineDiscountFormula);
        QWidget::setTabOrder(lineDiscountFormula, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(PurchaseAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), PurchaseAddDialog, SLOT(hide()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(PurchaseAddDialog);
    } // setupUi

    void retranslateUi(QDialog *PurchaseAddDialog)
    {
        PurchaseAddDialog->setWindowTitle(QApplication::translate("PurchaseAddDialog", "Add New Purchase", 0));
        label->setText(QApplication::translate("PurchaseAddDialog", "Date", 0));
        label_2->setText(QApplication::translate("PurchaseAddDialog", "Number", 0));
        label_3->setText(QApplication::translate("PurchaseAddDialog", "Suplier", 0));
        label_4->setText(QApplication::translate("PurchaseAddDialog", "Deadline", 0));
        dateCreated->setDisplayFormat(QApplication::translate("PurchaseAddDialog", "dd-MM-yyyy", 0));
        lineNumber->setPlaceholderText(QApplication::translate("PurchaseAddDialog", "Purchase number", 0));
        dateDeadline->setDisplayFormat(QApplication::translate("PurchaseAddDialog", "dd-MM-yyyy", 0));
        label_5->setText(QApplication::translate("PurchaseAddDialog", "Payment Type", 0));
        label_6->setText(QApplication::translate("PurchaseAddDialog", "Discount Formula", 0));
        lineDiscountFormula->setPlaceholderText(QApplication::translate("PurchaseAddDialog", "Discount total purchase", 0));
        label_10->setText(QApplication::translate("PurchaseAddDialog", "Bank", 0));
        groupBox->setTitle(QString());
        label_7->setText(QApplication::translate("PurchaseAddDialog", "Total", 0));
        labelTotal->setText(QApplication::translate("PurchaseAddDialog", "0", 0));
        label_8->setText(QApplication::translate("PurchaseAddDialog", "Discount", 0));
        label_9->setText(QApplication::translate("PurchaseAddDialog", "Final", 0));
        labelDiscount->setText(QApplication::translate("PurchaseAddDialog", "0", 0));
        labelFinal->setText(QApplication::translate("PurchaseAddDialog", "0", 0));
        pushCancel->setText(QApplication::translate("PurchaseAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("PurchaseAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class PurchaseAddDialog: public Ui_PurchaseAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEADDDIALOG_H
