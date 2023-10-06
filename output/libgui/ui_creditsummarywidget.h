/********************************************************************************
** Form generated from reading UI file 'creditsummarywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITSUMMARYWIDGET_H
#define UI_CREDITSUMMARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditSummaryWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *labelNumber;
    QLabel *label_5;
    QLabel *labelName;
    QLabel *label_6;
    QLabel *labelPhone;
    QLabel *label_7;
    QLabel *labelAddress;
    QFrame *line;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *labelReward;
    QLabel *label_11;
    QLabel *labelCredit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *CreditSummaryWidget)
    {
        if (CreditSummaryWidget->objectName().isEmpty())
            CreditSummaryWidget->setObjectName(QStringLiteral("CreditSummaryWidget"));
        CreditSummaryWidget->resize(570, 161);
        horizontalLayout = new QHBoxLayout(CreditSummaryWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(CreditSummaryWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(500, 0));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelNumber = new QLabel(widget);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelNumber);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        labelName = new QLabel(widget);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelName);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        labelPhone = new QLabel(widget);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelPhone);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        labelAddress = new QLabel(widget);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));
        labelAddress->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, labelAddress);


        verticalLayout->addLayout(formLayout);


        horizontalLayout_2->addWidget(widget);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        labelReward = new QLabel(widget_2);
        labelReward->setObjectName(QStringLiteral("labelReward"));
        labelReward->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelReward);

        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        labelCredit = new QLabel(widget_2);
        labelCredit->setObjectName(QStringLiteral("labelCredit"));
        labelCredit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelCredit);


        verticalLayout_2->addLayout(formLayout_2);


        horizontalLayout_2->addWidget(widget_2);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(CreditSummaryWidget);

        QMetaObject::connectSlotsByName(CreditSummaryWidget);
    } // setupUi

    void retranslateUi(QWidget *CreditSummaryWidget)
    {
        CreditSummaryWidget->setWindowTitle(QApplication::translate("CreditSummaryWidget", "Form", 0));
        groupBox->setTitle(QApplication::translate("CreditSummaryWidget", "Customer Info", 0));
        label->setText(QApplication::translate("CreditSummaryWidget", "Number", 0));
        labelNumber->setText(QApplication::translate("CreditSummaryWidget", "loading...", 0));
        label_5->setText(QApplication::translate("CreditSummaryWidget", "Name", 0));
        labelName->setText(QApplication::translate("CreditSummaryWidget", "loading...", 0));
        label_6->setText(QApplication::translate("CreditSummaryWidget", "Phone", 0));
        labelPhone->setText(QApplication::translate("CreditSummaryWidget", "loading...", 0));
        label_7->setText(QApplication::translate("CreditSummaryWidget", "Address", 0));
        labelAddress->setText(QApplication::translate("CreditSummaryWidget", "loading...", 0));
        label_3->setText(QApplication::translate("CreditSummaryWidget", "Reward", 0));
        labelReward->setText(QApplication::translate("CreditSummaryWidget", "loading...", 0));
        label_11->setText(QApplication::translate("CreditSummaryWidget", "Credit", 0));
        labelCredit->setText(QApplication::translate("CreditSummaryWidget", "loading...", 0));
    } // retranslateUi

};

namespace Ui {
    class CreditSummaryWidget: public Ui_CreditSummaryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITSUMMARYWIDGET_H
