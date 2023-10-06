/********************************************************************************
** Form generated from reading UI file 'editpricecountdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRICECOUNTDIALOG_H
#define UI_EDITPRICECOUNTDIALOG_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "moneylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditPriceCountDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doublePrice;
    QLabel *label_3;
    QLineEdit *lineDiscount;
    QLabel *label_4;
    QLabel *labelDiscount;
    QLabel *label_5;
    QLabel *labelFinal;
    QLabel *labelMasterPrice;
    QLabel *labelMasterDiscount;
    QLabel *label_6;
    QPlainTextEdit *plainNote;
    LibGUI::MoneyLineEdit *doubleCount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *EditPriceCountDialog)
    {
        if (EditPriceCountDialog->objectName().isEmpty())
            EditPriceCountDialog->setObjectName(QStringLiteral("EditPriceCountDialog"));
        EditPriceCountDialog->resize(387, 316);
        verticalLayout = new QVBoxLayout(EditPriceCountDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(EditPriceCountDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(EditPriceCountDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        doublePrice = new QDoubleSpinBox(EditPriceCountDialog);
        doublePrice->setObjectName(QStringLiteral("doublePrice"));
        doublePrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doublePrice->setMaximum(1e+09);

        formLayout->setWidget(1, QFormLayout::FieldRole, doublePrice);

        label_3 = new QLabel(EditPriceCountDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineDiscount = new QLineEdit(EditPriceCountDialog);
        lineDiscount->setObjectName(QStringLiteral("lineDiscount"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineDiscount);

        label_4 = new QLabel(EditPriceCountDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        labelDiscount = new QLabel(EditPriceCountDialog);
        labelDiscount->setObjectName(QStringLiteral("labelDiscount"));
        labelDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelDiscount);

        label_5 = new QLabel(EditPriceCountDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        labelFinal = new QLabel(EditPriceCountDialog);
        labelFinal->setObjectName(QStringLiteral("labelFinal"));
        labelFinal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, labelFinal);

        labelMasterPrice = new QLabel(EditPriceCountDialog);
        labelMasterPrice->setObjectName(QStringLiteral("labelMasterPrice"));
        labelMasterPrice->setStyleSheet(QStringLiteral("color: red; font-style: italic;"));
        labelMasterPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelMasterPrice);

        labelMasterDiscount = new QLabel(EditPriceCountDialog);
        labelMasterDiscount->setObjectName(QStringLiteral("labelMasterDiscount"));
        labelMasterDiscount->setStyleSheet(QStringLiteral("color: red; font-style: italic;"));
        labelMasterDiscount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelMasterDiscount);

        label_6 = new QLabel(EditPriceCountDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        plainNote = new QPlainTextEdit(EditPriceCountDialog);
        plainNote->setObjectName(QStringLiteral("plainNote"));
        plainNote->setMaximumSize(QSize(16777215, 75));
        plainNote->setTabChangesFocus(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, plainNote);

        doubleCount = new LibGUI::MoneyLineEdit(EditPriceCountDialog);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleCount);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(EditPriceCountDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(EditPriceCountDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(doubleCount, doublePrice);
        QWidget::setTabOrder(doublePrice, lineDiscount);
        QWidget::setTabOrder(lineDiscount, plainNote);
        QWidget::setTabOrder(plainNote, pushCancel);
        QWidget::setTabOrder(pushCancel, pushSave);

        retranslateUi(EditPriceCountDialog);
        QObject::connect(pushCancel, SIGNAL(pressed()), EditPriceCountDialog, SLOT(close()));

        pushSave->setDefault(true);


        QMetaObject::connectSlotsByName(EditPriceCountDialog);
    } // setupUi

    void retranslateUi(QDialog *EditPriceCountDialog)
    {
        EditPriceCountDialog->setWindowTitle(QApplication::translate("EditPriceCountDialog", "Count and Price", 0));
        label->setText(QApplication::translate("EditPriceCountDialog", "Count", 0));
        label_2->setText(QApplication::translate("EditPriceCountDialog", "Price", 0));
        label_3->setText(QApplication::translate("EditPriceCountDialog", "Discount Formula", 0));
        label_4->setText(QApplication::translate("EditPriceCountDialog", "Discount", 0));
        labelDiscount->setText(QApplication::translate("EditPriceCountDialog", "0", 0));
        label_5->setText(QApplication::translate("EditPriceCountDialog", "Final Price", 0));
        labelFinal->setText(QApplication::translate("EditPriceCountDialog", "0", 0));
        labelMasterPrice->setText(QApplication::translate("EditPriceCountDialog", "Master Price : 0", 0));
        labelMasterDiscount->setText(QApplication::translate("EditPriceCountDialog", "Master Discount : 0", 0));
        label_6->setText(QApplication::translate("EditPriceCountDialog", "Note", 0));
        plainNote->setPlaceholderText(QApplication::translate("EditPriceCountDialog", "Input note if any", 0));
        pushCancel->setText(QApplication::translate("EditPriceCountDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("EditPriceCountDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class EditPriceCountDialog: public Ui_EditPriceCountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRICECOUNTDIALOG_H
