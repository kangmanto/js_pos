/********************************************************************************
** Form generated from reading UI file 'importitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTITEMDIALOG_H
#define UI_IMPORTITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportItemDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;
    QPushButton *pushImport;

    void setupUi(QDialog *ImportItemDialog)
    {
        if (ImportItemDialog->objectName().isEmpty())
            ImportItemDialog->setObjectName(QStringLiteral("ImportItemDialog"));
        ImportItemDialog->setWindowModality(Qt::WindowModal);
        ImportItemDialog->resize(442, 221);
        verticalLayout_2 = new QVBoxLayout(ImportItemDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(ImportItemDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setCheckable(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(ImportItemDialog);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        horizontalLayout->addWidget(pushCancel);

        pushImport = new QPushButton(ImportItemDialog);
        pushImport->setObjectName(QStringLiteral("pushImport"));

        horizontalLayout->addWidget(pushImport);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ImportItemDialog);
        QObject::connect(pushCancel, SIGNAL(clicked()), ImportItemDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportItemDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportItemDialog)
    {
        ImportItemDialog->setWindowTitle(QApplication::translate("ImportItemDialog", "Import item", 0));
        groupBox->setTitle(QApplication::translate("ImportItemDialog", "Remove data before import", 0));
        label->setText(QApplication::translate("ImportItemDialog", "Enabled: Will remove all data of items, category and supplier before import.", 0));
        label_2->setText(QApplication::translate("ImportItemDialog", "Disable: Old data in the database will remain, new data import with the same barcode will be ignored.", 0));
        pushCancel->setText(QApplication::translate("ImportItemDialog", "Cancel", 0));
        pushImport->setText(QApplication::translate("ImportItemDialog", "Import", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportItemDialog: public Ui_ImportItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTITEMDIALOG_H
