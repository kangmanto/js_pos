/********************************************************************************
** Form generated from reading UI file 'additemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOG_H
#define UI_ADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <tablewidget.h>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineBarcode;
    QLabel *labelError;
    QLabel *label_2;
    QLineEdit *lineName;
    QLabel *label_5;
    QComboBox *comboUnit;
    QLabel *label_3;
    QComboBox *comboCategory;
    QLabel *label_4;
    QComboBox *comboSuplier;
    QFrame *line;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkStock;
    QCheckBox *checkPurchase;
    QCheckBox *checkSell;
    QCheckBox *checkNote;
    QCheckBox *checkEditPrice;
    QCheckBox *checkIngridient;
    QCheckBox *checkPackage;
    QCheckBox *checkProduct;
    QLabel *labelWarningItemLink;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *price;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QDoubleSpinBox *doubleBuyPrice;
    QLabel *labelStock;
    QDoubleSpinBox *doubleStock;
    QToolBox *toolBoxPrice;
    QWidget *pageSinglePrice;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupSinglePrice;
    QFormLayout *formLayout_5;
    QLabel *labelFinalPrice;
    QLabel *label_22;
    QLabel *labelPriceDiscount;
    QLabel *label_21;
    QLineEdit *lineDiscountFormula;
    QLabel *label_20;
    QDoubleSpinBox *doubleSellPrice;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *labelPriceMargin;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageMultiPrice;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupMultiPrice;
    QVBoxLayout *verticalLayout_4;
    LibGUI::TableWidget *tablePrice;
    QWidget *package;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *linePackageItem;
    QPushButton *pushPackageItem;
    QLabel *labelPackageName;
    QLabel *label_10;
    QDoubleSpinBox *doublePackageQty;
    QLabel *label_12;
    QLabel *labelPackagePrice;
    QSpacerItem *verticalSpacer_2;
    QWidget *ingridient;
    QVBoxLayout *verticalLayout_9;
    LibGUI::TableWidget *tableIngridient;
    QFrame *line_2;
    QFormLayout *formLayout_4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *labelIngridientPrice;
    QLabel *labelIngridientSellPrice;
    QWidget *itemlink;
    QVBoxLayout *verticalLayout_11;
    LibGUI::TableWidget *tableItemLink;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;
    QPushButton *pushSaveAgain;
    QPushButton *pushSaveClose;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName(QStringLiteral("AddItemDialog"));
        AddItemDialog->resize(838, 539);
        AddItemDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AddItemDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, -1, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AddItemDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        lineBarcode = new QLineEdit(AddItemDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));

        verticalLayout_2->addWidget(lineBarcode);

        labelError = new QLabel(AddItemDialog);
        labelError->setObjectName(QStringLiteral("labelError"));
        labelError->setStyleSheet(QStringLiteral("color: red; font-size: 12px;"));

        verticalLayout_2->addWidget(labelError);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        label_2 = new QLabel(AddItemDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineName = new QLineEdit(AddItemDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineName);

        label_5 = new QLabel(AddItemDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        comboUnit = new QComboBox(AddItemDialog);
        comboUnit->setObjectName(QStringLiteral("comboUnit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboUnit);

        label_3 = new QLabel(AddItemDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        comboCategory = new QComboBox(AddItemDialog);
        comboCategory->setObjectName(QStringLiteral("comboCategory"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboCategory);

        label_4 = new QLabel(AddItemDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        comboSuplier = new QComboBox(AddItemDialog);
        comboSuplier->setObjectName(QStringLiteral("comboSuplier"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboSuplier);


        verticalLayout_6->addLayout(formLayout);

        line = new QFrame(AddItemDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_6->addWidget(line);

        groupBox_2 = new QGroupBox(AddItemDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        checkStock = new QCheckBox(groupBox_2);
        checkStock->setObjectName(QStringLiteral("checkStock"));

        verticalLayout_7->addWidget(checkStock);

        checkPurchase = new QCheckBox(groupBox_2);
        checkPurchase->setObjectName(QStringLiteral("checkPurchase"));

        verticalLayout_7->addWidget(checkPurchase);

        checkSell = new QCheckBox(groupBox_2);
        checkSell->setObjectName(QStringLiteral("checkSell"));

        verticalLayout_7->addWidget(checkSell);

        checkNote = new QCheckBox(groupBox_2);
        checkNote->setObjectName(QStringLiteral("checkNote"));

        verticalLayout_7->addWidget(checkNote);

        checkEditPrice = new QCheckBox(groupBox_2);
        checkEditPrice->setObjectName(QStringLiteral("checkEditPrice"));

        verticalLayout_7->addWidget(checkEditPrice);

        checkIngridient = new QCheckBox(groupBox_2);
        checkIngridient->setObjectName(QStringLiteral("checkIngridient"));

        verticalLayout_7->addWidget(checkIngridient);

        checkPackage = new QCheckBox(groupBox_2);
        checkPackage->setObjectName(QStringLiteral("checkPackage"));

        verticalLayout_7->addWidget(checkPackage);

        checkProduct = new QCheckBox(groupBox_2);
        checkProduct->setObjectName(QStringLiteral("checkProduct"));

        verticalLayout_7->addWidget(checkProduct);


        verticalLayout_6->addWidget(groupBox_2);

        labelWarningItemLink = new QLabel(AddItemDialog);
        labelWarningItemLink->setObjectName(QStringLiteral("labelWarningItemLink"));
        labelWarningItemLink->setStyleSheet(QStringLiteral("color: red; border: 1px solid red; padding: 5px; border-radius: 5px;"));
        labelWarningItemLink->setWordWrap(true);

        verticalLayout_6->addWidget(labelWarningItemLink);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_6);

        tabWidget = new QTabWidget(AddItemDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        price = new QWidget();
        price->setObjectName(QStringLiteral("price"));
        verticalLayout_3 = new QVBoxLayout(price);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(price);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        doubleBuyPrice = new QDoubleSpinBox(price);
        doubleBuyPrice->setObjectName(QStringLiteral("doubleBuyPrice"));
        doubleBuyPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleBuyPrice->setMaximum(1e+08);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleBuyPrice);

        labelStock = new QLabel(price);
        labelStock->setObjectName(QStringLiteral("labelStock"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelStock);

        doubleStock = new QDoubleSpinBox(price);
        doubleStock->setObjectName(QStringLiteral("doubleStock"));
        doubleStock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleStock->setMaximum(1e+06);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleStock);


        verticalLayout_3->addLayout(formLayout_2);

        toolBoxPrice = new QToolBox(price);
        toolBoxPrice->setObjectName(QStringLiteral("toolBoxPrice"));
        pageSinglePrice = new QWidget();
        pageSinglePrice->setObjectName(QStringLiteral("pageSinglePrice"));
        pageSinglePrice->setGeometry(QRect(0, 0, 440, 336));
        verticalLayout_5 = new QVBoxLayout(pageSinglePrice);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupSinglePrice = new QGroupBox(pageSinglePrice);
        groupSinglePrice->setObjectName(QStringLiteral("groupSinglePrice"));
        formLayout_5 = new QFormLayout(groupSinglePrice);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelFinalPrice = new QLabel(groupSinglePrice);
        labelFinalPrice->setObjectName(QStringLiteral("labelFinalPrice"));
        labelFinalPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(4, QFormLayout::FieldRole, labelFinalPrice);

        label_22 = new QLabel(groupSinglePrice);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_22);

        labelPriceDiscount = new QLabel(groupSinglePrice);
        labelPriceDiscount->setObjectName(QStringLiteral("labelPriceDiscount"));
        labelPriceDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, labelPriceDiscount);

        label_21 = new QLabel(groupSinglePrice);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_21);

        lineDiscountFormula = new QLineEdit(groupSinglePrice);
        lineDiscountFormula->setObjectName(QStringLiteral("lineDiscountFormula"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, lineDiscountFormula);

        label_20 = new QLabel(groupSinglePrice);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_20);

        doubleSellPrice = new QDoubleSpinBox(groupSinglePrice);
        doubleSellPrice->setObjectName(QStringLiteral("doubleSellPrice"));
        doubleSellPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSellPrice->setMaximum(1e+08);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, doubleSellPrice);

        label_7 = new QLabel(groupSinglePrice);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_7);

        label_13 = new QLabel(groupSinglePrice);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_13);

        labelPriceMargin = new QLabel(groupSinglePrice);
        labelPriceMargin->setObjectName(QStringLiteral("labelPriceMargin"));
        labelPriceMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, labelPriceMargin);


        verticalLayout_5->addWidget(groupSinglePrice);

        verticalSpacer_3 = new QSpacerItem(20, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        toolBoxPrice->addItem(pageSinglePrice, QStringLiteral("Single Price"));
        groupSinglePrice->raise();
        pageMultiPrice = new QWidget();
        pageMultiPrice->setObjectName(QStringLiteral("pageMultiPrice"));
        pageMultiPrice->setGeometry(QRect(0, 0, 104, 61));
        verticalLayout_10 = new QVBoxLayout(pageMultiPrice);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupMultiPrice = new QGroupBox(pageMultiPrice);
        groupMultiPrice->setObjectName(QStringLiteral("groupMultiPrice"));
        groupMultiPrice->setCheckable(true);
        groupMultiPrice->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(groupMultiPrice);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tablePrice = new LibGUI::TableWidget(groupMultiPrice);
        tablePrice->setObjectName(QStringLiteral("tablePrice"));

        verticalLayout_4->addWidget(tablePrice);


        verticalLayout_10->addWidget(groupMultiPrice);

        toolBoxPrice->addItem(pageMultiPrice, QStringLiteral("MultiPrice"));

        verticalLayout_3->addWidget(toolBoxPrice);

        tabWidget->addTab(price, QString());
        package = new QWidget();
        package->setObjectName(QStringLiteral("package"));
        verticalLayout_8 = new QVBoxLayout(package);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(package);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(package);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        linePackageItem = new QLineEdit(package);
        linePackageItem->setObjectName(QStringLiteral("linePackageItem"));
        linePackageItem->setReadOnly(true);

        horizontalLayout_3->addWidget(linePackageItem);

        pushPackageItem = new QPushButton(package);
        pushPackageItem->setObjectName(QStringLiteral("pushPackageItem"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/16x16/blue-document-search-result.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushPackageItem->setIcon(icon);
        pushPackageItem->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushPackageItem);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        labelPackageName = new QLabel(package);
        labelPackageName->setObjectName(QStringLiteral("labelPackageName"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, labelPackageName);

        label_10 = new QLabel(package);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        doublePackageQty = new QDoubleSpinBox(package);
        doublePackageQty->setObjectName(QStringLiteral("doublePackageQty"));
        doublePackageQty->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doublePackageQty->setMaximum(1e+06);
        doublePackageQty->setValue(1);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, doublePackageQty);

        label_12 = new QLabel(package);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        labelPackagePrice = new QLabel(package);
        labelPackagePrice->setObjectName(QStringLiteral("labelPackagePrice"));
        labelPackagePrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, labelPackagePrice);


        verticalLayout_8->addLayout(formLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        tabWidget->addTab(package, QString());
        ingridient = new QWidget();
        ingridient->setObjectName(QStringLiteral("ingridient"));
        verticalLayout_9 = new QVBoxLayout(ingridient);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        tableIngridient = new LibGUI::TableWidget(ingridient);
        tableIngridient->setObjectName(QStringLiteral("tableIngridient"));

        verticalLayout_9->addWidget(tableIngridient);

        line_2 = new QFrame(ingridient);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_9->addWidget(line_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_16 = new QLabel(ingridient);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(ingridient);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_17);

        labelIngridientPrice = new QLabel(ingridient);
        labelIngridientPrice->setObjectName(QStringLiteral("labelIngridientPrice"));
        labelIngridientPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, labelIngridientPrice);

        labelIngridientSellPrice = new QLabel(ingridient);
        labelIngridientSellPrice->setObjectName(QStringLiteral("labelIngridientSellPrice"));
        labelIngridientSellPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, labelIngridientSellPrice);


        verticalLayout_9->addLayout(formLayout_4);

        tabWidget->addTab(ingridient, QString());
        itemlink = new QWidget();
        itemlink->setObjectName(QStringLiteral("itemlink"));
        verticalLayout_11 = new QVBoxLayout(itemlink);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        tableItemLink = new LibGUI::TableWidget(itemlink);
        tableItemLink->setObjectName(QStringLiteral("tableItemLink"));

        verticalLayout_11->addWidget(tableItemLink);

        label_11 = new QLabel(itemlink);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_11->addWidget(label_11);

        tabWidget->addTab(itemlink, QString());

        horizontalLayout_2->addWidget(tabWidget);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddItemDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddItemDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));
        pushSave->setAutoDefault(false);

        horizontalLayout->addWidget(pushSave);

        pushSaveAgain = new QPushButton(AddItemDialog);
        pushSaveAgain->setObjectName(QStringLiteral("pushSaveAgain"));
        pushSaveAgain->setAutoDefault(false);

        horizontalLayout->addWidget(pushSaveAgain);

        pushSaveClose = new QPushButton(AddItemDialog);
        pushSaveClose->setObjectName(QStringLiteral("pushSaveClose"));
        pushSaveClose->setAutoDefault(false);

        horizontalLayout->addWidget(pushSaveClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineBarcode, lineName);
        QWidget::setTabOrder(lineName, comboUnit);
        QWidget::setTabOrder(comboUnit, comboCategory);
        QWidget::setTabOrder(comboCategory, comboSuplier);
        QWidget::setTabOrder(comboSuplier, doubleStock);
        QWidget::setTabOrder(doubleStock, doubleBuyPrice);
        QWidget::setTabOrder(doubleBuyPrice, doubleSellPrice);
        QWidget::setTabOrder(doubleSellPrice, lineDiscountFormula);
        QWidget::setTabOrder(lineDiscountFormula, pushSaveAgain);
        QWidget::setTabOrder(pushSaveAgain, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);
        QWidget::setTabOrder(pushCancel, checkStock);
        QWidget::setTabOrder(checkStock, checkPurchase);
        QWidget::setTabOrder(checkPurchase, checkSell);
        QWidget::setTabOrder(checkSell, checkNote);
        QWidget::setTabOrder(checkNote, checkEditPrice);
        QWidget::setTabOrder(checkEditPrice, checkIngridient);
        QWidget::setTabOrder(checkIngridient, checkPackage);
        QWidget::setTabOrder(checkPackage, checkProduct);
        QWidget::setTabOrder(checkProduct, groupMultiPrice);
        QWidget::setTabOrder(groupMultiPrice, linePackageItem);
        QWidget::setTabOrder(linePackageItem, pushPackageItem);
        QWidget::setTabOrder(pushPackageItem, doublePackageQty);
        QWidget::setTabOrder(doublePackageQty, tabWidget);

        retranslateUi(AddItemDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddItemDialog, SLOT(hide()));

        tabWidget->setCurrentIndex(1);
        toolBoxPrice->setCurrentIndex(0);
        pushSaveAgain->setDefault(false);


        QMetaObject::connectSlotsByName(AddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialog)
    {
        AddItemDialog->setWindowTitle(QApplication::translate("AddItemDialog", "Dialog", 0));
        label->setText(QApplication::translate("AddItemDialog", "Barcode", 0));
        lineBarcode->setPlaceholderText(QApplication::translate("AddItemDialog", "Barcode", 0));
        labelError->setText(QApplication::translate("AddItemDialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("AddItemDialog", "Name", 0));
        lineName->setPlaceholderText(QApplication::translate("AddItemDialog", "Name", 0));
        label_5->setText(QApplication::translate("AddItemDialog", "Unit", 0));
        label_3->setText(QApplication::translate("AddItemDialog", "Category", 0));
        label_4->setText(QApplication::translate("AddItemDialog", "Suplier", 0));
        groupBox_2->setTitle(QApplication::translate("AddItemDialog", "Item Settings", 0));
        checkStock->setText(QApplication::translate("AddItemDialog", "Handle Stock", 0));
        checkPurchase->setText(QApplication::translate("AddItemDialog", "Purcashable", 0));
        checkSell->setText(QApplication::translate("AddItemDialog", "Sellable", 0));
        checkNote->setText(QApplication::translate("AddItemDialog", "Require note when sold", 0));
        checkEditPrice->setText(QApplication::translate("AddItemDialog", "Editable price when selling", 0));
        checkIngridient->setText(QApplication::translate("AddItemDialog", "Has ingridient", 0));
        checkPackage->setText(QApplication::translate("AddItemDialog", "Package", 0));
        checkProduct->setText(QApplication::translate("AddItemDialog", "Product", 0));
        labelWarningItemLink->setText(QApplication::translate("AddItemDialog", "<html><head/><body><p>This item has link to other item(s). If you change price, you should change other item(s) price. Please check on &quot;Item Link&quot; tab.</p></body></html>", 0));
        label_6->setText(QApplication::translate("AddItemDialog", "Buy Price", 0));
        labelStock->setText(QApplication::translate("AddItemDialog", "Initial Stock", 0));
        groupSinglePrice->setTitle(QApplication::translate("AddItemDialog", "Single Price", 0));
        labelFinalPrice->setText(QApplication::translate("AddItemDialog", "0", 0));
        label_22->setText(QApplication::translate("AddItemDialog", "Final Price", 0));
        labelPriceDiscount->setText(QApplication::translate("AddItemDialog", "0", 0));
        label_21->setText(QApplication::translate("AddItemDialog", "Discount", 0));
        label_20->setText(QApplication::translate("AddItemDialog", "Discount Formula", 0));
        label_7->setText(QApplication::translate("AddItemDialog", "Sell Price", 0));
        label_13->setText(QApplication::translate("AddItemDialog", "Margin", 0));
        labelPriceMargin->setText(QApplication::translate("AddItemDialog", "0", 0));
        toolBoxPrice->setItemText(toolBoxPrice->indexOf(pageSinglePrice), QApplication::translate("AddItemDialog", "Single Price", 0));
        groupMultiPrice->setTitle(QApplication::translate("AddItemDialog", "Multi Price", 0));
        toolBoxPrice->setItemText(toolBoxPrice->indexOf(pageMultiPrice), QApplication::translate("AddItemDialog", "MultiPrice", 0));
        tabWidget->setTabText(tabWidget->indexOf(price), QApplication::translate("AddItemDialog", "Price", 0));
        label_8->setText(QApplication::translate("AddItemDialog", "This package contain this items", 0));
        label_9->setText(QApplication::translate("AddItemDialog", "Item", 0));
        pushPackageItem->setText(QString());
        labelPackageName->setText(QString());
        label_10->setText(QApplication::translate("AddItemDialog", "Quantity", 0));
        label_12->setText(QApplication::translate("AddItemDialog", "Package Price", 0));
        labelPackagePrice->setText(QApplication::translate("AddItemDialog", "0", 0));
        tabWidget->setTabText(tabWidget->indexOf(package), QApplication::translate("AddItemDialog", "Package", 0));
        label_16->setText(QApplication::translate("AddItemDialog", "Buy Price", 0));
        label_17->setText(QApplication::translate("AddItemDialog", "Sell Price", 0));
        labelIngridientPrice->setText(QApplication::translate("AddItemDialog", "0", 0));
        labelIngridientSellPrice->setText(QApplication::translate("AddItemDialog", "0", 0));
        tabWidget->setTabText(tabWidget->indexOf(ingridient), QApplication::translate("AddItemDialog", "Ingridient", 0));
        label_11->setText(QApplication::translate("AddItemDialog", "* double click row to edit item", 0));
        tabWidget->setTabText(tabWidget->indexOf(itemlink), QApplication::translate("AddItemDialog", "Item Link", 0));
        pushCancel->setText(QApplication::translate("AddItemDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddItemDialog", "Save", 0));
        pushSaveAgain->setText(QApplication::translate("AddItemDialog", "Save and add again", 0));
        pushSaveClose->setText(QApplication::translate("AddItemDialog", "Save and close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
