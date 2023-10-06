/********************************************************************************
** Form generated from reading UI file 'addpricedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRICEDIALOG_H
#define UI_ADDPRICEDIALOG_H

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

class Ui_AddPriceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLabel *labelBuyPrice;
    QLabel *label;
    QDoubleSpinBox *doubleCount;
    QLabel *label_2;
    QDoubleSpinBox *doublePrice;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLabel *labelDiscount;
    QLabel *label_7;
    QLabel *labelFinal;
    QLabel *label_3;
    QLabel *labelMargin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddPriceDialog)
    {
        if (AddPriceDialog->objectName().isEmpty())
            AddPriceDialog->setObjectName(QStringLiteral("AddPriceDialog"));
        AddPriceDialog->resize(336, 224);
        verticalLayout = new QVBoxLayout(AddPriceDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(AddPriceDialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        labelBuyPrice = new QLabel(AddPriceDialog);
        labelBuyPrice->setObjectName(QStringLiteral("labelBuyPrice"));
        labelBuyPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelBuyPrice);

        label = new QLabel(AddPriceDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        doubleCount = new QDoubleSpinBox(AddPriceDialog);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));
        doubleCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleCount->setMaximum(1e+06);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleCount);

        label_2 = new QLabel(AddPriceDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        doublePrice = new QDoubleSpinBox(AddPriceDialog);
        doublePrice->setObjectName(QStringLiteral("doublePrice"));
        doublePrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doublePrice->setMaximum(1e+07);

        formLayout->setWidget(2, QFormLayout::FieldRole, doublePrice);

        label_5 = new QLabel(AddPriceDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit = new QLineEdit(AddPriceDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit);

        label_6 = new QLabel(AddPriceDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        labelDiscount = new QLabel(AddPriceDialog);
        labelDiscount->setObjectName(QStringLiteral("labelDiscount"));
        labelDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelDiscount);

        label_7 = new QLabel(AddPriceDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        labelFinal = new QLabel(AddPriceDialog);
        labelFinal->setObjectName(QStringLiteral("labelFinal"));
        labelFinal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, labelFinal);

        label_3 = new QLabel(AddPriceDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        labelMargin = new QLabel(AddPriceDialog);
        labelMargin->setObjectName(QStringLiteral("labelMargin"));
        labelMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelMargin);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddPriceDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddPriceDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(doubleCount, doublePrice);
        QWidget::setTabOrder(doublePrice, lineEdit);
        QWidget::setTabOrder(lineEdit, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(AddPriceDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddPriceDialog, SLOT(hide()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(AddPriceDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPriceDialog)
    {
        AddPriceDialog->setWindowTitle(QApplication::translate("AddPriceDialog", "Add New Price", 0));
        label_8->setText(QApplication::translate("AddPriceDialog", "Buy Price", 0));
        labelBuyPrice->setText(QApplication::translate("AddPriceDialog", "0", 0));
        label->setText(QApplication::translate("AddPriceDialog", "Count", 0));
        label_2->setText(QApplication::translate("AddPriceDialog", "Price", 0));
        label_5->setText(QApplication::translate("AddPriceDialog", "Discount Formula", 0));
        label_6->setText(QApplication::translate("AddPriceDialog", "Discount", 0));
        labelDiscount->setText(QApplication::translate("AddPriceDialog", "0", 0));
        label_7->setText(QApplication::translate("AddPriceDialog", "Final Price", 0));
        labelFinal->setText(QApplication::translate("AddPriceDialog", "0", 0));
        label_3->setText(QApplication::translate("AddPriceDialog", "Margin", 0));
        labelMargin->setText(QApplication::translate("AddPriceDialog", "TextLabel", 0));
        pushCancel->setText(QApplication::translate("AddPriceDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddPriceDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddPriceDialog: public Ui_AddPriceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRICEDIALOG_H
