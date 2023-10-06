/********************************************************************************
** Form generated from reading UI file 'returnresolutiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNRESOLUTIONDIALOG_H
#define UI_RETURNRESOLUTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_ReturnResolutionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *labelSuplier;
    QLabel *labelBarcode;
    QLabel *labelName;
    QLabel *labelCount;
    QLabel *labelPrice;
    QLabel *labelTotal;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QDateEdit *dateReturned;
    QCheckBox *checkReturned;
    QDoubleSpinBox *doubleItem;
    QDoubleSpinBox *doubleMoney;
    QLabel *label_7;
    QComboBox *comboBank;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *ReturnResolutionDialog)
    {
        if (ReturnResolutionDialog->objectName().isEmpty())
            ReturnResolutionDialog->setObjectName(QStringLiteral("ReturnResolutionDialog"));
        ReturnResolutionDialog->resize(376, 336);
        verticalLayout = new QVBoxLayout(ReturnResolutionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ReturnResolutionDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ReturnResolutionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ReturnResolutionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(ReturnResolutionDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(ReturnResolutionDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(ReturnResolutionDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        labelSuplier = new QLabel(ReturnResolutionDialog);
        labelSuplier->setObjectName(QStringLiteral("labelSuplier"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelSuplier);

        labelBarcode = new QLabel(ReturnResolutionDialog);
        labelBarcode->setObjectName(QStringLiteral("labelBarcode"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelBarcode);

        labelName = new QLabel(ReturnResolutionDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelName);

        labelCount = new QLabel(ReturnResolutionDialog);
        labelCount->setObjectName(QStringLiteral("labelCount"));
        labelCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelCount);

        labelPrice = new QLabel(ReturnResolutionDialog);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));
        labelPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelPrice);

        labelTotal = new QLabel(ReturnResolutionDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTotal);

        label_13 = new QLabel(ReturnResolutionDialog);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(ReturnResolutionDialog);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(ReturnResolutionDialog);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(ReturnResolutionDialog);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_16);

        dateReturned = new QDateEdit(ReturnResolutionDialog);
        dateReturned->setObjectName(QStringLiteral("dateReturned"));

        formLayout->setWidget(7, QFormLayout::FieldRole, dateReturned);

        checkReturned = new QCheckBox(ReturnResolutionDialog);
        checkReturned->setObjectName(QStringLiteral("checkReturned"));

        formLayout->setWidget(6, QFormLayout::FieldRole, checkReturned);

        doubleItem = new QDoubleSpinBox(ReturnResolutionDialog);
        doubleItem->setObjectName(QStringLiteral("doubleItem"));
        doubleItem->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleItem->setMaximum(1e+09);

        formLayout->setWidget(8, QFormLayout::FieldRole, doubleItem);

        doubleMoney = new QDoubleSpinBox(ReturnResolutionDialog);
        doubleMoney->setObjectName(QStringLiteral("doubleMoney"));
        doubleMoney->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleMoney->setMaximum(1e+09);

        formLayout->setWidget(9, QFormLayout::FieldRole, doubleMoney);

        label_7 = new QLabel(ReturnResolutionDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_7);

        comboBank = new QComboBox(ReturnResolutionDialog);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout->setWidget(10, QFormLayout::FieldRole, comboBank);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(ReturnResolutionDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(ReturnResolutionDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(checkReturned, dateReturned);
        QWidget::setTabOrder(dateReturned, doubleItem);
        QWidget::setTabOrder(doubleItem, doubleMoney);
        QWidget::setTabOrder(doubleMoney, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(ReturnResolutionDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), ReturnResolutionDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ReturnResolutionDialog);
    } // setupUi

    void retranslateUi(QDialog *ReturnResolutionDialog)
    {
        ReturnResolutionDialog->setWindowTitle(QApplication::translate("ReturnResolutionDialog", "Return resolution", 0));
        label->setText(QApplication::translate("ReturnResolutionDialog", "Suplier", 0));
        label_2->setText(QApplication::translate("ReturnResolutionDialog", "Barcode", 0));
        label_3->setText(QApplication::translate("ReturnResolutionDialog", "Name", 0));
        label_4->setText(QApplication::translate("ReturnResolutionDialog", "Count", 0));
        label_5->setText(QApplication::translate("ReturnResolutionDialog", "Price", 0));
        label_6->setText(QApplication::translate("ReturnResolutionDialog", "Total", 0));
        labelSuplier->setText(QApplication::translate("ReturnResolutionDialog", "TextLabel", 0));
        labelBarcode->setText(QApplication::translate("ReturnResolutionDialog", "TextLabel", 0));
        labelName->setText(QApplication::translate("ReturnResolutionDialog", "TextLabel", 0));
        labelCount->setText(QApplication::translate("ReturnResolutionDialog", "TextLabel", 0));
        labelPrice->setText(QApplication::translate("ReturnResolutionDialog", "TextLabel", 0));
        labelTotal->setText(QApplication::translate("ReturnResolutionDialog", "TextLabel", 0));
        label_13->setText(QApplication::translate("ReturnResolutionDialog", "Item Returned", 0));
        label_14->setText(QApplication::translate("ReturnResolutionDialog", "Money Returned", 0));
        label_15->setText(QApplication::translate("ReturnResolutionDialog", "Set as Returned", 0));
        label_16->setText(QApplication::translate("ReturnResolutionDialog", "Date Returned", 0));
        checkReturned->setText(QString());
        label_7->setText(QApplication::translate("ReturnResolutionDialog", "Bank", 0));
        pushCancel->setText(QApplication::translate("ReturnResolutionDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("ReturnResolutionDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class ReturnResolutionDialog: public Ui_ReturnResolutionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNRESOLUTIONDIALOG_H
