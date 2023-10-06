/********************************************************************************
** Form generated from reading UI file 'importexportdatabasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTEXPORTDATABASEDIALOG_H
#define UI_IMPORTEXPORTDATABASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportExportDatabaseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushExportToFile;
    QPushButton *pushExportToGDrive;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushImportFile;
    QPushButton *pushImportGDrive;

    void setupUi(QDialog *ImportExportDatabaseDialog)
    {
        if (ImportExportDatabaseDialog->objectName().isEmpty())
            ImportExportDatabaseDialog->setObjectName(QStringLiteral("ImportExportDatabaseDialog"));
        ImportExportDatabaseDialog->resize(225, 224);
        verticalLayout = new QVBoxLayout(ImportExportDatabaseDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ImportExportDatabaseDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushExportToFile = new QPushButton(groupBox);
        pushExportToFile->setObjectName(QStringLiteral("pushExportToFile"));

        verticalLayout_2->addWidget(pushExportToFile);

        pushExportToGDrive = new QPushButton(groupBox);
        pushExportToGDrive->setObjectName(QStringLiteral("pushExportToGDrive"));

        verticalLayout_2->addWidget(pushExportToGDrive);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ImportExportDatabaseDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushImportFile = new QPushButton(groupBox_2);
        pushImportFile->setObjectName(QStringLiteral("pushImportFile"));

        verticalLayout_3->addWidget(pushImportFile);

        pushImportGDrive = new QPushButton(groupBox_2);
        pushImportGDrive->setObjectName(QStringLiteral("pushImportGDrive"));

        verticalLayout_3->addWidget(pushImportGDrive);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(ImportExportDatabaseDialog);

        QMetaObject::connectSlotsByName(ImportExportDatabaseDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportExportDatabaseDialog)
    {
        ImportExportDatabaseDialog->setWindowTitle(QApplication::translate("ImportExportDatabaseDialog", "Export / Import Dialog", 0));
        groupBox->setTitle(QApplication::translate("ImportExportDatabaseDialog", "Export", 0));
        pushExportToFile->setText(QApplication::translate("ImportExportDatabaseDialog", "Export to file", 0));
        pushExportToGDrive->setText(QApplication::translate("ImportExportDatabaseDialog", "Export to Google Drive", 0));
        groupBox_2->setTitle(QApplication::translate("ImportExportDatabaseDialog", "Import", 0));
        pushImportFile->setText(QApplication::translate("ImportExportDatabaseDialog", "Import from file", 0));
        pushImportGDrive->setText(QApplication::translate("ImportExportDatabaseDialog", "Import from Google Drive", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportExportDatabaseDialog: public Ui_ImportExportDatabaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTEXPORTDATABASEDIALOG_H
