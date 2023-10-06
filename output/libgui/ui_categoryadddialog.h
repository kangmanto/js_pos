/********************************************************************************
** Form generated from reading UI file 'categoryadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYADDDIALOG_H
#define UI_CATEGORYADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CategoryAddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboParent;
    QLineEdit *lineName;
    QLineEdit *lineCode;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *CategoryAddDialog)
    {
        if (CategoryAddDialog->objectName().isEmpty())
            CategoryAddDialog->setObjectName(QStringLiteral("CategoryAddDialog"));
        CategoryAddDialog->resize(355, 174);
        verticalLayout = new QVBoxLayout(CategoryAddDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(CategoryAddDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(CategoryAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(CategoryAddDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboParent = new QComboBox(CategoryAddDialog);
        comboParent->setObjectName(QStringLiteral("comboParent"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboParent);

        lineName = new QLineEdit(CategoryAddDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineName);

        lineCode = new QLineEdit(CategoryAddDialog);
        lineCode->setObjectName(QStringLiteral("lineCode"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineCode);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(CategoryAddDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(CategoryAddDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CategoryAddDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), CategoryAddDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(CategoryAddDialog);
    } // setupUi

    void retranslateUi(QDialog *CategoryAddDialog)
    {
        CategoryAddDialog->setWindowTitle(QApplication::translate("CategoryAddDialog", "Add New Category", 0));
        label->setText(QApplication::translate("CategoryAddDialog", "Parent", 0));
        label_2->setText(QApplication::translate("CategoryAddDialog", "Name", 0));
        label_3->setText(QApplication::translate("CategoryAddDialog", "Code", 0));
        lineName->setPlaceholderText(QApplication::translate("CategoryAddDialog", "Name", 0));
        lineCode->setPlaceholderText(QApplication::translate("CategoryAddDialog", "Code", 0));
        pushCancel->setText(QApplication::translate("CategoryAddDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("CategoryAddDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class CategoryAddDialog: public Ui_CategoryAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYADDDIALOG_H
