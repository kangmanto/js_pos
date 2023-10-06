/********************************************************************************
** Form generated from reading UI file 'returnitemadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNITEMADDDIALOG_H
#define UI_RETURNITEMADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReturnItemAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelBarcode;
    QLabel *labelName;
    QDoubleSpinBox *doubleCount;
    QLabel *label_4;
    QLabel *labelDiscount;
    QLabel *label_7;
    QLabel *labelPrice;
    QLabel *labelTotal;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *ReturnItemAddDialog)
    {
        if (ReturnItemAddDialog->objectName().isEmpty())
            ReturnItemAddDialog->setObjectName(QStringLiteral("ReturnItemAddDialog"));
        ReturnItemAddDialog->resize(343, 212);
        verticalLayout = new QVBoxLayout(ReturnItemAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ReturnItemAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ReturnItemAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ReturnItemAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        labelBarcode = new QLabel(ReturnItemAddDialog);
        labelBarcode->setObjectName(QStringLiteral("labelBarcode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelBarcode);

        labelName = new QLabel(ReturnItemAddDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        doubleCount = new QDoubleSpinBox(ReturnItemAddDialog);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));
        doubleCount->setMaximum(1e+06);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleCount);

        label_4 = new QLabel(ReturnItemAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        labelDiscount = new QLabel(ReturnItemAddDialog);
        labelDiscount->setObjectName(QStringLiteral("labelDiscount"));
        labelDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelDiscount);

        label_7 = new QLabel(ReturnItemAddDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        labelPrice = new QLabel(ReturnItemAddDialog);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));
        labelPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelPrice);

        labelTotal = new QLabel(ReturnItemAddDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTotal);

        label_5 = new QLabel(ReturnItemAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(ReturnItemAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(ReturnItemAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ReturnItemAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), ReturnItemAddDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(ReturnItemAddDialog);
    } // setupUi

    void retranslateUi(QDialog *ReturnItemAddDialog)
    {
        ReturnItemAddDialog->setWindowTitle(QApplication::translate("ReturnItemAddDialog", "Add Return Item", 0));
        label->setText(QApplication::translate("ReturnItemAddDialog", "Barcode", 0));
        label_2->setText(QApplication::translate("ReturnItemAddDialog", "Name", 0));
        label_3->setText(QApplication::translate("ReturnItemAddDialog", "Count", 0));
        labelBarcode->setText(QApplication::translate("ReturnItemAddDialog", "TextLabel", 0));
        labelName->setText(QApplication::translate("ReturnItemAddDialog", "TextLabel", 0));
        label_4->setText(QApplication::translate("ReturnItemAddDialog", "Discount", 0));
        labelDiscount->setText(QApplication::translate("ReturnItemAddDialog", "TextLabel", 0));
        label_7->setText(QApplication::translate("ReturnItemAddDialog", "Price", 0));
        labelPrice->setText(QApplication::translate("ReturnItemAddDialog", "TextLabel", 0));
        labelTotal->setText(QApplication::translate("ReturnItemAddDialog", "TextLabel", 0));
        label_5->setText(QApplication::translate("ReturnItemAddDialog", "Total", 0));
        pushCancel->setText(QApplication::translate("ReturnItemAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("ReturnItemAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class ReturnItemAddDialog: public Ui_ReturnItemAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNITEMADDDIALOG_H
