/********************************************************************************
** Form generated from reading UI file 'restoreitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREITEMDIALOG_H
#define UI_RESTOREITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RestoreItemDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelWarning;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelBarcode;
    QLabel *label_3;
    QLabel *labelName;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelUnit;
    QLabel *labelCategory;
    QLabel *labelSuplier;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushRestore;

    void setupUi(QDialog *RestoreItemDialog)
    {
        if (RestoreItemDialog->objectName().isEmpty())
            RestoreItemDialog->setObjectName(QStringLiteral("RestoreItemDialog"));
        RestoreItemDialog->resize(369, 233);
        verticalLayout = new QVBoxLayout(RestoreItemDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelWarning = new QLabel(RestoreItemDialog);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setWordWrap(true);

        verticalLayout->addWidget(labelWarning);

        line = new QFrame(RestoreItemDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(RestoreItemDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelBarcode = new QLabel(RestoreItemDialog);
        labelBarcode->setObjectName(QStringLiteral("labelBarcode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelBarcode);

        label_3 = new QLabel(RestoreItemDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        labelName = new QLabel(RestoreItemDialog);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        label_2 = new QLabel(RestoreItemDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(RestoreItemDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(RestoreItemDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        labelUnit = new QLabel(RestoreItemDialog);
        labelUnit->setObjectName(QStringLiteral("labelUnit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelUnit);

        labelCategory = new QLabel(RestoreItemDialog);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelCategory);

        labelSuplier = new QLabel(RestoreItemDialog);
        labelSuplier->setObjectName(QStringLiteral("labelSuplier"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSuplier);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(RestoreItemDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));
        pushCancel->setAutoDefault(false);

        horizontalLayout->addWidget(pushCancel);

        pushRestore = new QPushButton(RestoreItemDialog);
        pushRestore->setObjectName(QStringLiteral("pushRestore"));
        pushRestore->setAutoDefault(false);

        horizontalLayout->addWidget(pushRestore);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RestoreItemDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), RestoreItemDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(RestoreItemDialog);
    } // setupUi

    void retranslateUi(QDialog *RestoreItemDialog)
    {
        RestoreItemDialog->setWindowTitle(QApplication::translate("RestoreItemDialog", "Restore Item Dialog", 0));
        labelWarning->setText(QApplication::translate("RestoreItemDialog", "The item already existed in database, but it was deleted. You can restore this item by clicking the restore button and then update the item.", 0));
        label->setText(QApplication::translate("RestoreItemDialog", "Barcode", 0));
        labelBarcode->setText(QApplication::translate("RestoreItemDialog", "TextLabel", 0));
        label_3->setText(QApplication::translate("RestoreItemDialog", "Name", 0));
        labelName->setText(QApplication::translate("RestoreItemDialog", "TextLabel", 0));
        label_2->setText(QApplication::translate("RestoreItemDialog", "Unit", 0));
        label_4->setText(QApplication::translate("RestoreItemDialog", "Category", 0));
        label_5->setText(QApplication::translate("RestoreItemDialog", "Suplier", 0));
        labelUnit->setText(QApplication::translate("RestoreItemDialog", "TextLabel", 0));
        labelCategory->setText(QApplication::translate("RestoreItemDialog", "TextLabel", 0));
        labelSuplier->setText(QApplication::translate("RestoreItemDialog", "TextLabel", 0));
        pushCancel->setText(QApplication::translate("RestoreItemDialog", "Cancel", 0));
        pushRestore->setText(QApplication::translate("RestoreItemDialog", "Restore", 0));
    } // retranslateUi

};

namespace Ui {
    class RestoreItemDialog: public Ui_RestoreItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREITEMDIALOG_H
