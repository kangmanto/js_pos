/********************************************************************************
** Form generated from reading UI file 'addmachinedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMACHINEDIALOG_H
#define UI_ADDMACHINEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_AddMachineDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineCode;
    QLineEdit *lineName;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushSave;

    void setupUi(QDialog *AddMachineDialog)
    {
        if (AddMachineDialog->objectName().isEmpty())
            AddMachineDialog->setObjectName(QStringLiteral("AddMachineDialog"));
        AddMachineDialog->resize(329, 114);
        verticalLayout = new QVBoxLayout(AddMachineDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AddMachineDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AddMachineDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineCode = new QLineEdit(AddMachineDialog);
        lineCode->setObjectName(QStringLiteral("lineCode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineCode);

        lineName = new QLineEdit(AddMachineDialog);
        lineName->setObjectName(QStringLiteral("lineName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineName);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(AddMachineDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushSave = new QPushButton(AddMachineDialog);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        horizontalLayout->addWidget(pushSave);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineCode, lineName);
        QWidget::setTabOrder(lineName, pushSave);
        QWidget::setTabOrder(pushSave, pushCancel);

        retranslateUi(AddMachineDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), AddMachineDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AddMachineDialog);
    } // setupUi

    void retranslateUi(QDialog *AddMachineDialog)
    {
        AddMachineDialog->setWindowTitle(QApplication::translate("AddMachineDialog", "Add new machine", 0));
        label->setText(QApplication::translate("AddMachineDialog", "Code", 0));
        label_2->setText(QApplication::translate("AddMachineDialog", "Name", 0));
        lineCode->setPlaceholderText(QApplication::translate("AddMachineDialog", "Code", 0));
        lineName->setPlaceholderText(QApplication::translate("AddMachineDialog", "Name", 0));
        pushCancel->setText(QApplication::translate("AddMachineDialog", "Cancel", 0));
        pushSave->setText(QApplication::translate("AddMachineDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddMachineDialog: public Ui_AddMachineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMACHINEDIALOG_H
