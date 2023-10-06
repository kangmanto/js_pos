/********************************************************************************
** Form generated from reading UI file 'purchaseadditemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEADDITEMDIALOG_H
#define UI_PURCHASEADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PurchaseAddItemDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelName;
    QPushButton *pushAddNewItem;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineBarcode;
    QPushButton *pushSearch;
    QDoubleSpinBox *doubleCount;
    QLabel *label_4;
    QDoubleSpinBox *doublePrice;
    QLabel *label_6;
    QLineEdit *lineDiscountFormula;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *labelDiscount;
    QLabel *labelPriceDisc;
    QLabel *labelTotal;
    QLabel *label_12;
    QDoubleSpinBox *doubleTotal;
    QFrame *line_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QDoubleSpinBox *doubleBuyPrice;
    QLabel *label_3;
    QDoubleSpinBox *doubleSellPrice;
    QLabel *label_11;
    QLabel *labelSellDiscount;
    QLabel *label_13;
    QLabel *labelSellFinal;
    QLabel *label_14;
    QLabel *labelMargin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;
    QPushButton *pushSaveAgain;

    void setupUi(QDialog *PurchaseAddItemDialog)
    {
        if (PurchaseAddItemDialog->objectName().isEmpty())
            PurchaseAddItemDialog->setObjectName(QStringLiteral("PurchaseAddItemDialog"));
        PurchaseAddItemDialog->resize(601, 326);
        verticalLayout = new QVBoxLayout(PurchaseAddItemDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, 0, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(-1, -1, -1, 20);
        label = new QLabel(PurchaseAddItemDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(PurchaseAddItemDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        labelName = new QLabel(PurchaseAddItemDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        pushAddNewItem = new QPushButton(PurchaseAddItemDialog);
        pushAddNewItem->setObjectName(QStringLiteral("pushAddNewItem"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushAddNewItem);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        lineBarcode = new QLineEdit(PurchaseAddItemDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));

        horizontalLayout_3->addWidget(lineBarcode);

        pushSearch = new QPushButton(PurchaseAddItemDialog);
        pushSearch->setObjectName(QStringLiteral("pushSearch"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/16x16/blue-document-search-result.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushSearch->setIcon(icon);
        pushSearch->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushSearch);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        doubleCount = new QDoubleSpinBox(PurchaseAddItemDialog);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));
        doubleCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleCount->setMinimum(-1e+07);
        doubleCount->setMaximum(1e+07);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleCount);

        label_4 = new QLabel(PurchaseAddItemDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        doublePrice = new QDoubleSpinBox(PurchaseAddItemDialog);
        doublePrice->setObjectName(QStringLiteral("doublePrice"));
        doublePrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doublePrice->setMinimum(-1e+07);
        doublePrice->setMaximum(1e+07);

        formLayout->setWidget(4, QFormLayout::FieldRole, doublePrice);

        label_6 = new QLabel(PurchaseAddItemDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineDiscountFormula = new QLineEdit(PurchaseAddItemDialog);
        lineDiscountFormula->setObjectName(QStringLiteral("lineDiscountFormula"));
        lineDiscountFormula->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, lineDiscountFormula);

        label_8 = new QLabel(PurchaseAddItemDialog);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(PurchaseAddItemDialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(PurchaseAddItemDialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_10);

        label_5 = new QLabel(PurchaseAddItemDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_5);

        labelDiscount = new QLabel(PurchaseAddItemDialog);
        labelDiscount->setObjectName(QStringLiteral("labelDiscount"));
        labelDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::FieldRole, labelDiscount);

        labelPriceDisc = new QLabel(PurchaseAddItemDialog);
        labelPriceDisc->setObjectName(QStringLiteral("labelPriceDisc"));
        labelPriceDisc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, labelPriceDisc);

        labelTotal = new QLabel(PurchaseAddItemDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::FieldRole, labelTotal);

        label_12 = new QLabel(PurchaseAddItemDialog);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_12);

        doubleTotal = new QDoubleSpinBox(PurchaseAddItemDialog);
        doubleTotal->setObjectName(QStringLiteral("doubleTotal"));
        doubleTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleTotal->setMinimum(-1e+09);
        doubleTotal->setMaximum(1e+09);

        formLayout->setWidget(5, QFormLayout::FieldRole, doubleTotal);


        horizontalLayout_2->addLayout(formLayout);

        line_3 = new QFrame(PurchaseAddItemDialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(line_3);

        groupBox = new QGroupBox(PurchaseAddItemDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setCheckable(true);
        groupBox->setChecked(false);
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        doubleBuyPrice = new QDoubleSpinBox(groupBox);
        doubleBuyPrice->setObjectName(QStringLiteral("doubleBuyPrice"));
        doubleBuyPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleBuyPrice->setMinimum(-1e+07);
        doubleBuyPrice->setMaximum(1e+07);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleBuyPrice);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        doubleSellPrice = new QDoubleSpinBox(groupBox);
        doubleSellPrice->setObjectName(QStringLiteral("doubleSellPrice"));
        doubleSellPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSellPrice->setReadOnly(false);
        doubleSellPrice->setMinimum(-1e+07);
        doubleSellPrice->setMaximum(1e+07);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, doubleSellPrice);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        labelSellDiscount = new QLabel(groupBox);
        labelSellDiscount->setObjectName(QStringLiteral("labelSellDiscount"));
        labelSellDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, labelSellDiscount);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_13);

        labelSellFinal = new QLabel(groupBox);
        labelSellFinal->setObjectName(QStringLiteral("labelSellFinal"));
        labelSellFinal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, labelSellFinal);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_14);

        labelMargin = new QLabel(groupBox);
        labelMargin->setObjectName(QStringLiteral("labelMargin"));
        labelMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, labelMargin);


        horizontalLayout_2->addWidget(groupBox);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(PurchaseAddItemDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(PurchaseAddItemDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));
        pushSave->setAutoDefault(false);

        horizontalLayout->addWidget(pushSave);

        pushSaveAgain = new QPushButton(PurchaseAddItemDialog);
        pushSaveAgain->setObjectName(QStringLiteral("pushSaveAgain"));

        horizontalLayout->addWidget(pushSaveAgain);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineBarcode, pushSearch);
        QWidget::setTabOrder(pushSearch, pushAddNewItem);
        QWidget::setTabOrder(pushAddNewItem, doubleCount);
        QWidget::setTabOrder(doubleCount, doublePrice);
        QWidget::setTabOrder(doublePrice, doubleTotal);
        QWidget::setTabOrder(doubleTotal, lineDiscountFormula);
        QWidget::setTabOrder(lineDiscountFormula, groupBox);
        QWidget::setTabOrder(groupBox, doubleBuyPrice);
        QWidget::setTabOrder(doubleBuyPrice, doubleSellPrice);
        QWidget::setTabOrder(doubleSellPrice, pushSave);
        QWidget::setTabOrder(pushSave, pushSaveAgain);
        QWidget::setTabOrder(pushSaveAgain, pushCancel);

        retranslateUi(PurchaseAddItemDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), PurchaseAddItemDialog, SLOT(hide()));

        pushSave->setDefault(false);
        pushSaveAgain->setDefault(true);


        QMetaObject::connectSlotsByName(PurchaseAddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *PurchaseAddItemDialog)
    {
        PurchaseAddItemDialog->setWindowTitle(QApplication::translate("PurchaseAddItemDialog", "Add New Purchase Item", 0));
        label->setText(QApplication::translate("PurchaseAddItemDialog", "Barcode", 0));
        label_2->setText(QApplication::translate("PurchaseAddItemDialog", "Name", 0));
        labelName->setText(QApplication::translate("PurchaseAddItemDialog", "TextLabel", 0));
        pushAddNewItem->setText(QApplication::translate("PurchaseAddItemDialog", "Add new item", 0));
        lineBarcode->setPlaceholderText(QApplication::translate("PurchaseAddItemDialog", "Barcode", 0));
        pushSearch->setText(QString());
        label_4->setText(QApplication::translate("PurchaseAddItemDialog", "Count", 0));
        doublePrice->setPrefix(QString());
        label_6->setText(QApplication::translate("PurchaseAddItemDialog", "Unit Price", 0));
        label_8->setText(QApplication::translate("PurchaseAddItemDialog", "Discount Formula", 0));
        label_9->setText(QApplication::translate("PurchaseAddItemDialog", "Discount", 0));
        label_10->setText(QApplication::translate("PurchaseAddItemDialog", "Price - Discount", 0));
        label_5->setText(QApplication::translate("PurchaseAddItemDialog", "Final Price", 0));
        labelDiscount->setText(QApplication::translate("PurchaseAddItemDialog", "0", 0));
        labelPriceDisc->setText(QApplication::translate("PurchaseAddItemDialog", "0", 0));
        labelTotal->setText(QApplication::translate("PurchaseAddItemDialog", "0", 0));
        label_12->setText(QApplication::translate("PurchaseAddItemDialog", "Total Price", 0));
        groupBox->setTitle(QApplication::translate("PurchaseAddItemDialog", "Item Info Price", 0));
        label_7->setText(QApplication::translate("PurchaseAddItemDialog", "Buy Price", 0));
        label_3->setText(QApplication::translate("PurchaseAddItemDialog", "Sell Price", 0));
        label_11->setText(QApplication::translate("PurchaseAddItemDialog", "Sell Discount", 0));
        labelSellDiscount->setText(QString());
        label_13->setText(QApplication::translate("PurchaseAddItemDialog", "Sell Final Price", 0));
        labelSellFinal->setText(QString());
        label_14->setText(QApplication::translate("PurchaseAddItemDialog", "Margin", 0));
        labelMargin->setText(QString());
        pushCancel->setText(QApplication::translate("PurchaseAddItemDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("PurchaseAddItemDialog", "Save", 0));
        pushSaveAgain->setText(QApplication::translate("PurchaseAddItemDialog", "Save And Again", 0));
    } // retranslateUi

};

namespace Ui {
    class PurchaseAddItemDialog: public Ui_PurchaseAddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEADDITEMDIALOG_H
