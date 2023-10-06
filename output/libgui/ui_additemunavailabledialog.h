/********************************************************************************
** Form generated from reading UI file 'additemunavailabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMUNAVAILABLEDIALOG_H
#define UI_ADDITEMUNAVAILABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_AddItemUnavailableDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineBarcode;
    QLineEdit *lineName;
    QDoubleSpinBox *doublePrice;
    QLabel *labelSuplier;
    QLabel *labelCategory;
    QLabel *labelBuyPrice;
    QComboBox *comboSuplier;
    QComboBox *comboCategory;
    QDoubleSpinBox *doubleBuyPrice;
    QLabel *labelUnit;
    QComboBox *comboUnit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddItemUnavailableDialog)
    {
        if (AddItemUnavailableDialog->objectName().isEmpty())
            AddItemUnavailableDialog->setObjectName(QStringLiteral("AddItemUnavailableDialog"));
        AddItemUnavailableDialog->resize(358, 298);
        verticalLayout = new QVBoxLayout(AddItemUnavailableDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(AddItemUnavailableDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout->addWidget(label_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AddItemUnavailableDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AddItemUnavailableDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(AddItemUnavailableDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        lineBarcode = new QLineEdit(AddItemUnavailableDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineBarcode);

        lineName = new QLineEdit(AddItemUnavailableDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineName);

        doublePrice = new QDoubleSpinBox(AddItemUnavailableDialog);
        doublePrice->setObjectName(QStringLiteral("doublePrice"));
        doublePrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doublePrice->setMaximum(1e+09);

        formLayout->setWidget(6, QFormLayout::FieldRole, doublePrice);

        labelSuplier = new QLabel(AddItemUnavailableDialog);
        labelSuplier->setObjectName(QStringLiteral("labelSuplier"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSuplier);

        labelCategory = new QLabel(AddItemUnavailableDialog);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelCategory);

        labelBuyPrice = new QLabel(AddItemUnavailableDialog);
        labelBuyPrice->setObjectName(QStringLiteral("labelBuyPrice"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelBuyPrice);

        comboSuplier = new QComboBox(AddItemUnavailableDialog);
        comboSuplier->setObjectName(QStringLiteral("comboSuplier"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboSuplier);

        comboCategory = new QComboBox(AddItemUnavailableDialog);
        comboCategory->setObjectName(QStringLiteral("comboCategory"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboCategory);

        doubleBuyPrice = new QDoubleSpinBox(AddItemUnavailableDialog);
        doubleBuyPrice->setObjectName(QStringLiteral("doubleBuyPrice"));
        doubleBuyPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleBuyPrice->setMaximum(1e+09);

        formLayout->setWidget(5, QFormLayout::FieldRole, doubleBuyPrice);

        labelUnit = new QLabel(AddItemUnavailableDialog);
        labelUnit->setObjectName(QStringLiteral("labelUnit"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelUnit);

        comboUnit = new QComboBox(AddItemUnavailableDialog);
        comboUnit->setObjectName(QStringLiteral("comboUnit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboUnit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddItemUnavailableDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddItemUnavailableDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineBarcode, lineName);
        QWidget::setTabOrder(lineName, comboSuplier);
        QWidget::setTabOrder(comboSuplier, comboCategory);
        QWidget::setTabOrder(comboCategory, comboUnit);
        QWidget::setTabOrder(comboUnit, doubleBuyPrice);
        QWidget::setTabOrder(doubleBuyPrice, doublePrice);
        QWidget::setTabOrder(doublePrice, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(AddItemUnavailableDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddItemUnavailableDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(AddItemUnavailableDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemUnavailableDialog)
    {
        AddItemUnavailableDialog->setWindowTitle(QApplication::translate("AddItemUnavailableDialog", "Add Item Simple", 0));
        label_4->setText(QApplication::translate("AddItemUnavailableDialog", "Item does not exist on database, it can be input from here faster.", 0));
        label->setText(QApplication::translate("AddItemUnavailableDialog", "Barcode", 0));
        label_2->setText(QApplication::translate("AddItemUnavailableDialog", "Name", 0));
        label_3->setText(QApplication::translate("AddItemUnavailableDialog", "Price", 0));
        lineName->setPlaceholderText(QApplication::translate("AddItemUnavailableDialog", "Input name", 0));
        labelSuplier->setText(QApplication::translate("AddItemUnavailableDialog", "Suplier", 0));
        labelCategory->setText(QApplication::translate("AddItemUnavailableDialog", "Category", 0));
        labelBuyPrice->setText(QApplication::translate("AddItemUnavailableDialog", "Buy Price", 0));
        labelUnit->setText(QApplication::translate("AddItemUnavailableDialog", "Unit", 0));
        pushCancel->setText(QApplication::translate("AddItemUnavailableDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddItemUnavailableDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddItemUnavailableDialog: public Ui_AddItemUnavailableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMUNAVAILABLEDIALOG_H
