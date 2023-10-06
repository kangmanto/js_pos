/********************************************************************************
** Form generated from reading UI file 'addsoldreturndialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSOLDRETURNDIALOG_H
#define UI_ADDSOLDRETURNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSoldReturnDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineBarcode;
    QLabel *labelName;
    QLabel *labelPrice;
    QDoubleSpinBox *doubleCount;
    QLabel *label;
    QLabel *labelSoldNumber;
    QLabel *label_6;
    QLabel *labelTotal;
    QLabel *label_7;
    QPlainTextEdit *plainNote;
    QGroupBox *groupResolution;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QDateEdit *dateResolusion;
    QDoubleSpinBox *doubleItemReturned;
    QDoubleSpinBox *doubleMoneyReturned;
    QComboBox *comboBank;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddSoldReturnDialog)
    {
        if (AddSoldReturnDialog->objectName().isEmpty())
            AddSoldReturnDialog->setObjectName(QStringLiteral("AddSoldReturnDialog"));
        AddSoldReturnDialog->resize(443, 458);
        verticalLayout = new QVBoxLayout(AddSoldReturnDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(AddSoldReturnDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineBarcode = new QLineEdit(groupBox);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));
        lineBarcode->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineBarcode);

        labelName = new QLabel(groupBox);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelName);

        labelPrice = new QLabel(groupBox);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));
        labelPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelPrice);

        doubleCount = new QDoubleSpinBox(groupBox);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));
        doubleCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleCount->setMaximum(1e+06);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleCount);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        labelSoldNumber = new QLabel(groupBox);
        labelSoldNumber->setObjectName(QStringLiteral("labelSoldNumber"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelSoldNumber);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        labelTotal = new QLabel(groupBox);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, labelTotal);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        plainNote = new QPlainTextEdit(groupBox);
        plainNote->setObjectName(QStringLiteral("plainNote"));

        formLayout->setWidget(7, QFormLayout::FieldRole, plainNote);


        verticalLayout->addWidget(groupBox);

        groupResolution = new QGroupBox(AddSoldReturnDialog);
        groupResolution->setObjectName(QStringLiteral("groupResolution"));
        groupResolution->setCheckable(true);
        groupResolution->setChecked(false);
        formLayout_2 = new QFormLayout(groupResolution);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(groupResolution);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(groupResolution);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(groupResolution);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(groupResolution);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        dateResolusion = new QDateEdit(groupResolution);
        dateResolusion->setObjectName(QStringLiteral("dateResolusion"));
        dateResolusion->setCalendarPopup(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dateResolusion);

        doubleItemReturned = new QDoubleSpinBox(groupResolution);
        doubleItemReturned->setObjectName(QStringLiteral("doubleItemReturned"));
        doubleItemReturned->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleItemReturned->setMaximum(1e+06);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleItemReturned);

        doubleMoneyReturned = new QDoubleSpinBox(groupResolution);
        doubleMoneyReturned->setObjectName(QStringLiteral("doubleMoneyReturned"));
        doubleMoneyReturned->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleMoneyReturned->setMaximum(1e+09);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleMoneyReturned);

        comboBank = new QComboBox(groupResolution);
        comboBank->setObjectName(QStringLiteral("comboBank"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBank);


        verticalLayout->addWidget(groupResolution);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddSoldReturnDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddSoldReturnDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddSoldReturnDialog);
        QObject::connect(pushCancel, SIGNAL(clicked(bool)), AddSoldReturnDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AddSoldReturnDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSoldReturnDialog)
    {
        AddSoldReturnDialog->setWindowTitle(QApplication::translate("AddSoldReturnDialog", "Add Sold Return", 0));
        groupBox->setTitle(QApplication::translate("AddSoldReturnDialog", "Item Returned", 0));
        label_2->setText(QApplication::translate("AddSoldReturnDialog", "Barcode", 0));
        label_3->setText(QApplication::translate("AddSoldReturnDialog", "Name", 0));
        label_4->setText(QApplication::translate("AddSoldReturnDialog", "Count", 0));
        label_5->setText(QApplication::translate("AddSoldReturnDialog", "Unit Price", 0));
        lineBarcode->setPlaceholderText(QApplication::translate("AddSoldReturnDialog", "Select item", 0));
        labelName->setText(QString());
        labelPrice->setText(QString());
        label->setText(QApplication::translate("AddSoldReturnDialog", "Sold Number", 0));
        labelSoldNumber->setText(QString());
        label_6->setText(QApplication::translate("AddSoldReturnDialog", "Total", 0));
        labelTotal->setText(QString());
        label_7->setText(QApplication::translate("AddSoldReturnDialog", "Note", 0));
        plainNote->setPlaceholderText(QApplication::translate("AddSoldReturnDialog", "Input notes here", 0));
        groupResolution->setTitle(QApplication::translate("AddSoldReturnDialog", "Resolution", 0));
        label_8->setText(QApplication::translate("AddSoldReturnDialog", "Date", 0));
        label_9->setText(QApplication::translate("AddSoldReturnDialog", "Item Returned", 0));
        label_10->setText(QApplication::translate("AddSoldReturnDialog", "Money Returned", 0));
        label_11->setText(QApplication::translate("AddSoldReturnDialog", "Bank", 0));
        pushCancel->setText(QApplication::translate("AddSoldReturnDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddSoldReturnDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddSoldReturnDialog: public Ui_AddSoldReturnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSOLDRETURNDIALOG_H
