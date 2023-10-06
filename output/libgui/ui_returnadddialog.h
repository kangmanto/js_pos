/********************************************************************************
** Form generated from reading UI file 'returnadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNADDDIALOG_H
#define UI_RETURNADDDIALOG_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReturnAddDialog
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
    QComboBox *comboSuplier;
    QLineEdit *linePurchaseItem;
    QLabel *labelName;
    QLabel *labelPrice;
    QLabel *labelTotal;
    QDoubleSpinBox *doubleCount;
    QLabel *label_10;
    QPlainTextEdit *plainNote;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;
    QPushButton *pushSaveAgain;

    void setupUi(QDialog *ReturnAddDialog)
    {
        if (ReturnAddDialog->objectName().isEmpty())
            ReturnAddDialog->setObjectName(QStringLiteral("ReturnAddDialog"));
        ReturnAddDialog->resize(416, 327);
        verticalLayout = new QVBoxLayout(ReturnAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ReturnAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ReturnAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(ReturnAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(ReturnAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(ReturnAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(ReturnAddDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboSuplier = new QComboBox(ReturnAddDialog);
        comboSuplier->setObjectName(QStringLiteral("comboSuplier"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboSuplier);

        linePurchaseItem = new QLineEdit(ReturnAddDialog);
        linePurchaseItem->setObjectName(QStringLiteral("linePurchaseItem"));
        linePurchaseItem->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, linePurchaseItem);

        labelName = new QLabel(ReturnAddDialog);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, labelName);

        labelPrice = new QLabel(ReturnAddDialog);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));
        labelPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, labelPrice);

        labelTotal = new QLabel(ReturnAddDialog);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, labelTotal);

        doubleCount = new QDoubleSpinBox(ReturnAddDialog);
        doubleCount->setObjectName(QStringLiteral("doubleCount"));
        doubleCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleCount->setMaximum(1e+08);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleCount);

        label_10 = new QLabel(ReturnAddDialog);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        plainNote = new QPlainTextEdit(ReturnAddDialog);
        plainNote->setObjectName(QStringLiteral("plainNote"));
        plainNote->setMaximumSize(QSize(16777215, 100));

        formLayout->setWidget(6, QFormLayout::FieldRole, plainNote);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(ReturnAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(ReturnAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);

        pushSaveAgain = new QPushButton(ReturnAddDialog);
        pushSaveAgain->setObjectName(QStringLiteral("pushSaveAgain"));

        horizontalLayout->addWidget(pushSaveAgain);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboSuplier, linePurchaseItem);
        QWidget::setTabOrder(linePurchaseItem, doubleCount);
        QWidget::setTabOrder(doubleCount, plainNote);
        QWidget::setTabOrder(plainNote, pushSaveAgain);
        QWidget::setTabOrder(pushSaveAgain, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(ReturnAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), ReturnAddDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ReturnAddDialog);
    } // setupUi

    void retranslateUi(QDialog *ReturnAddDialog)
    {
        ReturnAddDialog->setWindowTitle(QApplication::translate("ReturnAddDialog", "Add new return item", 0));
        label->setText(QApplication::translate("ReturnAddDialog", "Suplier", 0));
        label_2->setText(QApplication::translate("ReturnAddDialog", "Purchase Item", 0));
        label_3->setText(QApplication::translate("ReturnAddDialog", "Name", 0));
        label_4->setText(QApplication::translate("ReturnAddDialog", "Count", 0));
        label_5->setText(QApplication::translate("ReturnAddDialog", "Price", 0));
        label_6->setText(QApplication::translate("ReturnAddDialog", "Total", 0));
        labelName->setText(QString());
        labelPrice->setText(QString());
        labelTotal->setText(QString());
        label_10->setText(QApplication::translate("ReturnAddDialog", "Note", 0));
        pushCancel->setText(QApplication::translate("ReturnAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("ReturnAddDialog", "Save", 0));
        pushSaveAgain->setText(QApplication::translate("ReturnAddDialog", "Save and Again", 0));
    } // retranslateUi

};

namespace Ui {
    class ReturnAddDialog: public Ui_ReturnAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNADDDIALOG_H
