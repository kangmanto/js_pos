/********************************************************************************
** Form generated from reading UI file 'cashierreportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERREPORTDIALOG_H
#define UI_CASHIERREPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashierReportDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QDateTimeEdit *dateTimeStart;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEnd;
    QPushButton *pushFilter;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushPrint;

    void setupUi(QDialog *CashierReportDialog)
    {
        if (CashierReportDialog->objectName().isEmpty())
            CashierReportDialog->setObjectName(QStringLiteral("CashierReportDialog"));
        CashierReportDialog->resize(560, 526);
        verticalLayout_3 = new QVBoxLayout(CashierReportDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(CashierReportDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 20);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 9);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        dateTimeStart = new QDateTimeEdit(groupBox);
        dateTimeStart->setObjectName(QStringLiteral("dateTimeStart"));
        dateTimeStart->setCalendarPopup(true);

        verticalLayout_4->addWidget(dateTimeStart);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        dateTimeEnd = new QDateTimeEdit(groupBox);
        dateTimeEnd->setObjectName(QStringLiteral("dateTimeEnd"));
        dateTimeEnd->setCalendarPopup(true);

        verticalLayout_4->addWidget(dateTimeEnd);

        pushFilter = new QPushButton(groupBox);
        pushFilter->setObjectName(QStringLiteral("pushFilter"));

        verticalLayout_4->addWidget(pushFilter);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushPrint = new QPushButton(verticalLayoutWidget_2);
        pushPrint->setObjectName(QStringLiteral("pushPrint"));

        horizontalLayout->addWidget(pushPrint);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(verticalLayoutWidget_2);

        verticalLayout_3->addWidget(splitter);


        retranslateUi(CashierReportDialog);

        QMetaObject::connectSlotsByName(CashierReportDialog);
    } // setupUi

    void retranslateUi(QDialog *CashierReportDialog)
    {
        CashierReportDialog->setWindowTitle(QApplication::translate("CashierReportDialog", "Cashier Report", 0));
        groupBox->setTitle(QApplication::translate("CashierReportDialog", "Filter", 0));
        label->setText(QApplication::translate("CashierReportDialog", "Start", 0));
        label_2->setText(QApplication::translate("CashierReportDialog", "End", 0));
        pushFilter->setText(QApplication::translate("CashierReportDialog", "Filter", 0));
        pushPrint->setText(QApplication::translate("CashierReportDialog", "Print", 0));
    } // retranslateUi

};

namespace Ui {
    class CashierReportDialog: public Ui_CashierReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERREPORTDIALOG_H
