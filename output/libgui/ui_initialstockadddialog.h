/********************************************************************************
** Form generated from reading UI file 'initialstockadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALSTOCKADDDIALOG_H
#define UI_INITIALSTOCKADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_InitialStockAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineBarcode;
    QLabel *labelName;
    QCheckBox *checkOnline;
    QLabel *label_6;
    QComboBox *comboSuplier;
    QLabel *label_7;
    QComboBox *comboCategory;
    QLabel *label_2;
    QDoubleSpinBox *doubleStock;
    QLabel *label_3;
    QDoubleSpinBox *doubleBuyPrice;
    QLabel *label_4;
    QDoubleSpinBox *doubleSellPrice;
    QLabel *labelMargin;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;
    QPushButton *pushSaveAgain;

    void setupUi(QDialog *InitialStockAddDialog)
    {
        if (InitialStockAddDialog->objectName().isEmpty())
            InitialStockAddDialog->setObjectName(QStringLiteral("InitialStockAddDialog"));
        InitialStockAddDialog->resize(416, 356);
        verticalLayout = new QVBoxLayout(InitialStockAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(InitialStockAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineBarcode = new QLineEdit(InitialStockAddDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineBarcode);

        labelName = new QLabel(InitialStockAddDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        checkOnline = new QCheckBox(InitialStockAddDialog);
        checkOnline->setObjectName(QStringLiteral("checkOnline"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkOnline);

        label_6 = new QLabel(InitialStockAddDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        comboSuplier = new QComboBox(InitialStockAddDialog);
        comboSuplier->setObjectName(QStringLiteral("comboSuplier"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboSuplier);

        label_7 = new QLabel(InitialStockAddDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        comboCategory = new QComboBox(InitialStockAddDialog);
        comboCategory->setObjectName(QStringLiteral("comboCategory"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboCategory);

        label_2 = new QLabel(InitialStockAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        doubleStock = new QDoubleSpinBox(InitialStockAddDialog);
        doubleStock->setObjectName(QStringLiteral("doubleStock"));
        doubleStock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleStock->setMaximum(1e+06);

        formLayout->setWidget(5, QFormLayout::FieldRole, doubleStock);

        label_3 = new QLabel(InitialStockAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        doubleBuyPrice = new QDoubleSpinBox(InitialStockAddDialog);
        doubleBuyPrice->setObjectName(QStringLiteral("doubleBuyPrice"));
        doubleBuyPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleBuyPrice->setMaximum(1e+09);

        formLayout->setWidget(6, QFormLayout::FieldRole, doubleBuyPrice);

        label_4 = new QLabel(InitialStockAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        doubleSellPrice = new QDoubleSpinBox(InitialStockAddDialog);
        doubleSellPrice->setObjectName(QStringLiteral("doubleSellPrice"));
        doubleSellPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSellPrice->setMaximum(1e+09);

        formLayout->setWidget(7, QFormLayout::FieldRole, doubleSellPrice);

        labelMargin = new QLabel(InitialStockAddDialog);
        labelMargin->setObjectName(QStringLiteral("labelMargin"));
        labelMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, labelMargin);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(InitialStockAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(InitialStockAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);

        pushSaveAgain = new QPushButton(InitialStockAddDialog);
        pushSaveAgain->setObjectName(QStringLiteral("pushSaveAgain"));

        horizontalLayout->addWidget(pushSaveAgain);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineBarcode, checkOnline);
        QWidget::setTabOrder(checkOnline, comboSuplier);
        QWidget::setTabOrder(comboSuplier, comboCategory);
        QWidget::setTabOrder(comboCategory, doubleStock);
        QWidget::setTabOrder(doubleStock, doubleBuyPrice);
        QWidget::setTabOrder(doubleBuyPrice, doubleSellPrice);
        QWidget::setTabOrder(doubleSellPrice, pushSaveAgain);
        QWidget::setTabOrder(pushSaveAgain, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(InitialStockAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), InitialStockAddDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(InitialStockAddDialog);
    } // setupUi

    void retranslateUi(QDialog *InitialStockAddDialog)
    {
        InitialStockAddDialog->setWindowTitle(QApplication::translate("InitialStockAddDialog", "Add New Initial Stock", 0));
        label->setText(QApplication::translate("InitialStockAddDialog", "Barcode", 0));
        labelName->setText(QString());
        checkOnline->setText(QApplication::translate("InitialStockAddDialog", "Check Online", 0));
        label_6->setText(QApplication::translate("InitialStockAddDialog", "Suplier", 0));
        label_7->setText(QApplication::translate("InitialStockAddDialog", "Category", 0));
        label_2->setText(QApplication::translate("InitialStockAddDialog", "Stock", 0));
        label_3->setText(QApplication::translate("InitialStockAddDialog", "Buy Price", 0));
        label_4->setText(QApplication::translate("InitialStockAddDialog", "Sell Price", 0));
        labelMargin->setText(QString());
        pushCancel->setText(QApplication::translate("InitialStockAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("InitialStockAddDialog", "Save", 0));
        pushSaveAgain->setText(QApplication::translate("InitialStockAddDialog", "Save and Again", 0));
    } // retranslateUi

};

namespace Ui {
    class InitialStockAddDialog: public Ui_InitialStockAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALSTOCKADDDIALOG_H
