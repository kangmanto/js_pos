/********************************************************************************
** Form generated from reading UI file 'checkstockadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKSTOCKADDDIALOG_H
#define UI_CHECKSTOCKADDDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_CheckStockAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelName;
    QLabel *labelStock;
    QLabel *labelDiff;
    QDoubleSpinBox *doubleStock;
    QLabel *label_6;
    QPlainTextEdit *plainNote;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineBarcode;
    QPushButton *pushSearch;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushAdd;
    QPushButton *pushAddAgain;

    void setupUi(QDialog *CheckStockAddDialog)
    {
        if (CheckStockAddDialog->objectName().isEmpty())
            CheckStockAddDialog->setObjectName(QStringLiteral("CheckStockAddDialog"));
        CheckStockAddDialog->resize(399, 312);
        verticalLayout = new QVBoxLayout(CheckStockAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(CheckStockAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(CheckStockAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(CheckStockAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(CheckStockAddDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(CheckStockAddDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        labelName = new QLabel(CheckStockAddDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        labelStock = new QLabel(CheckStockAddDialog);
        labelStock->setObjectName(QStringLiteral("labelStock"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelStock);

        labelDiff = new QLabel(CheckStockAddDialog);
        labelDiff->setObjectName(QStringLiteral("labelDiff"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelDiff);

        doubleStock = new QDoubleSpinBox(CheckStockAddDialog);
        doubleStock->setObjectName(QStringLiteral("doubleStock"));
        doubleStock->setMinimum(-1e+06);
        doubleStock->setMaximum(1e+06);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleStock);

        label_6 = new QLabel(CheckStockAddDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        plainNote = new QPlainTextEdit(CheckStockAddDialog);
        plainNote->setObjectName(QStringLiteral("plainNote"));
        plainNote->setMaximumSize(QSize(16777215, 75));
        plainNote->setTabChangesFocus(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, plainNote);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        lineBarcode = new QLineEdit(CheckStockAddDialog);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));

        horizontalLayout_2->addWidget(lineBarcode);

        pushSearch = new QPushButton(CheckStockAddDialog);
        pushSearch->setObjectName(QStringLiteral("pushSearch"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/16x16/blue-document-search-result.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushSearch->setIcon(icon);
        pushSearch->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushSearch);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(CheckStockAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushAdd = new QPushButton(CheckStockAddDialog);
        pushAdd->setObjectName(QStringLiteral("pushAdd"));

        horizontalLayout->addWidget(pushAdd);

        pushAddAgain = new QPushButton(CheckStockAddDialog);
        pushAddAgain->setObjectName(QStringLiteral("pushAddAgain"));

        horizontalLayout->addWidget(pushAddAgain);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(doubleStock, plainNote);
        QWidget::setTabOrder(plainNote, pushAddAgain);
        QWidget::setTabOrder(pushAddAgain, pushAdd);
        QWidget::setTabOrder(pushAdd, pushCancel);

        retranslateUi(CheckStockAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), CheckStockAddDialog, SLOT(close()));

        pushAddAgain->setDefault(true);


        QMetaObject::connectSlotsByName(CheckStockAddDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckStockAddDialog)
    {
        CheckStockAddDialog->setWindowTitle(QApplication::translate("CheckStockAddDialog", "Add Check Stock", 0));
        label->setText(QApplication::translate("CheckStockAddDialog", "Barcode", 0));
        label_2->setText(QApplication::translate("CheckStockAddDialog", "Name", 0));
        label_3->setText(QApplication::translate("CheckStockAddDialog", "System Stock", 0));
        label_4->setText(QApplication::translate("CheckStockAddDialog", "Real Stock", 0));
        label_5->setText(QApplication::translate("CheckStockAddDialog", "Difference", 0));
        labelName->setText(QString());
        labelStock->setText(QString());
        labelDiff->setText(QString());
        label_6->setText(QApplication::translate("CheckStockAddDialog", "Note", 0));
        lineBarcode->setPlaceholderText(QApplication::translate("CheckStockAddDialog", "Scan barcode", 0));
        pushSearch->setText(QString());
        pushCancel->setText(QApplication::translate("CheckStockAddDialog", "Cancel", 0));
        pushAdd->setText(QApplication::translate("CheckStockAddDialog", "Add", 0));
        pushAddAgain->setText(QApplication::translate("CheckStockAddDialog", "Add & Again", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckStockAddDialog: public Ui_CheckStockAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKSTOCKADDDIALOG_H
