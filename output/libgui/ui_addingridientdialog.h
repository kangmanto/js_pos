/********************************************************************************
** Form generated from reading UI file 'addingridientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGRIDIENTDIALOG_H
#define UI_ADDINGRIDIENTDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddIngridientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineBarcode;
    QLabel *labelName;
    QDoubleSpinBox *doubleCount;
    QLabel *labelBuyPrice;
    QLabel *labelSellPrice;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddIngridientDialog)
    {
        if (AddIngridientDialog->objectName().isEmpty())
            AddIngridientDialog->setObjectName(QStringLiteral("AddIngridientDialog"));
        AddIngridientDialog->resize(359, 179);
        verticalLayout = new QVBoxLayout(AddIngridientDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(AddIngridientDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AddIngridientDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(AddIngridientDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(AddIngridientDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(AddIngridientDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineBarcode = new QLineEdit(AddIngridientDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));
        lineBarcode->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineBarcode);

        labelName = new QLabel(AddIngridientDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        doubleCount = new QDoubleSpinBox(AddIngridientDialog);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));
        doubleCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleCount->setMaximum(1e+06);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleCount);

        labelBuyPrice = new QLabel(AddIngridientDialog);
        labelBuyPrice->setObjectName(QStringLiteral("labelBuyPrice"));
        labelBuyPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelBuyPrice);

        labelSellPrice = new QLabel(AddIngridientDialog);
        labelSellPrice->setObjectName(QStringLiteral("labelSellPrice"));
        labelSellPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSellPrice);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddIngridientDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddIngridientDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddIngridientDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddIngridientDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AddIngridientDialog);
    } // setupUi

    void retranslateUi(QDialog *AddIngridientDialog)
    {
        AddIngridientDialog->setWindowTitle(QApplication::translate("AddIngridientDialog", "Add ingridient item", 0));
        label->setText(QApplication::translate("AddIngridientDialog", "Barcode", 0));
        label_2->setText(QApplication::translate("AddIngridientDialog", "Name", 0));
        label_3->setText(QApplication::translate("AddIngridientDialog", "Count", 0));
        label_4->setText(QApplication::translate("AddIngridientDialog", "Buy Price", 0));
        label_5->setText(QApplication::translate("AddIngridientDialog", "Sell Price", 0));
        labelName->setText(QString());
        labelBuyPrice->setText(QApplication::translate("AddIngridientDialog", "0", 0));
        labelSellPrice->setText(QApplication::translate("AddIngridientDialog", "0", 0));
        pushCancel->setText(QApplication::translate("AddIngridientDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddIngridientDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddIngridientDialog: public Ui_AddIngridientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGRIDIENTDIALOG_H
