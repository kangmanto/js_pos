/********************************************************************************
** Form generated from reading UI file 'cashierwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERWIDGET_H
#define UI_CASHIERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashierWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *labelVersion;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLabel *labelSubtitle;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLabel *labelTotal;
    QFrame *line_5;
    QTableView *tableView;
    QWidget *widgetTax;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayoutTax;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *labelSubTotal;
    QLabel *label_7;
    QLabel *labelTax;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *labelCustomerNumber;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *labelCustomerName;
    QLabel *labelCustomerPoin;
    QFrame *line_6;
    QLabel *label_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineBarcode;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelName;
    QLabel *labelPrice;
    QPushButton *pushPay;

    void setupUi(QWidget *CashierWidget)
    {
        if (CashierWidget->objectName().isEmpty())
            CashierWidget->setObjectName(QStringLiteral("CashierWidget"));
        CashierWidget->resize(804, 527);
        verticalLayout_4 = new QVBoxLayout(CashierWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(-1, 0, 0, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 10, -1, -1);
        label = new QLabel(CashierWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon_64.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        labelVersion = new QLabel(CashierWidget);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        sizePolicy.setHeightForWidth(labelVersion->sizePolicy().hasHeightForWidth());
        labelVersion->setSizePolicy(sizePolicy);
        labelVersion->setStyleSheet(QStringLiteral("font-size: 10px;"));
        labelVersion->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelVersion);


        horizontalLayout->addLayout(verticalLayout_5);

        line = new QFrame(CashierWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        labelTitle = new QLabel(CashierWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy1);
        labelTitle->setMouseTracking(false);
        labelTitle->setStyleSheet(QStringLiteral("font-size: 30px;"));

        verticalLayout->addWidget(labelTitle);

        labelSubtitle = new QLabel(CashierWidget);
        labelSubtitle->setObjectName(QStringLiteral("labelSubtitle"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSubtitle->sizePolicy().hasHeightForWidth());
        labelSubtitle->setSizePolicy(sizePolicy2);
        labelSubtitle->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(labelSubtitle);


        horizontalLayout->addLayout(verticalLayout);

        line_4 = new QFrame(CashierWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, -1, -1);
        widget = new QWidget(CashierWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(500, 16777215));
        widget->setStyleSheet(QLatin1String("background-color: white;\n"
"border: 1px solid #ababab;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("border: none;"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_12);

        labelTotal = new QLabel(widget);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelTotal->sizePolicy().hasHeightForWidth());
        labelTotal->setSizePolicy(sizePolicy3);
        labelTotal->setStyleSheet(QStringLiteral("font-size: 50px; border: none;"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTotal);


        verticalLayout_6->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout);

        line_5 = new QFrame(CashierWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        tableView = new QTableView(CashierWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("QTableView::item {\n"
"  padding: 5px;\n"
"}"));
        tableView->setTabKeyNavigation(false);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragDropOverwriteMode(false);
        tableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->setGridStyle(Qt::DashLine);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableView);

        widgetTax = new QWidget(CashierWidget);
        widgetTax->setObjectName(QStringLiteral("widgetTax"));
        verticalLayout_8 = new QVBoxLayout(widgetTax);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutTax = new QHBoxLayout();
        horizontalLayoutTax->setObjectName(QStringLiteral("horizontalLayoutTax"));
        horizontalLayoutTax->setContentsMargins(10, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutTax->addItem(horizontalSpacer);

        widget_3 = new QWidget(widgetTax);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(250, 0));
        widget_3->setStyleSheet(QLatin1String("background-color: white;\n"
"border: 1px solid #ababab;"));
        formLayout_2 = new QFormLayout(widget_3);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font: italic; border: none;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        labelSubTotal = new QLabel(widget_3);
        labelSubTotal->setObjectName(QStringLiteral("labelSubTotal"));
        labelSubTotal->setStyleSheet(QStringLiteral("border: none;"));
        labelSubTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelSubTotal);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font: italic; border: none;"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        labelTax = new QLabel(widget_3);
        labelTax->setObjectName(QStringLiteral("labelTax"));
        labelTax->setStyleSheet(QStringLiteral("border: none;"));
        labelTax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelTax);


        horizontalLayoutTax->addWidget(widget_3);


        verticalLayout_8->addLayout(horizontalLayoutTax);


        verticalLayout_4->addWidget(widgetTax);

        line_2 = new QFrame(CashierWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, 0, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(CashierWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        labelCustomerNumber = new QLabel(CashierWidget);
        labelCustomerNumber->setObjectName(QStringLiteral("labelCustomerNumber"));
        labelCustomerNumber->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelCustomerNumber);

        label_2 = new QLabel(CashierWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_5 = new QLabel(CashierWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: italic;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        labelCustomerName = new QLabel(CashierWidget);
        labelCustomerName->setObjectName(QStringLiteral("labelCustomerName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelCustomerName);

        labelCustomerPoin = new QLabel(CashierWidget);
        labelCustomerPoin->setObjectName(QStringLiteral("labelCustomerPoin"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelCustomerPoin);


        verticalLayout_7->addLayout(formLayout);

        line_6 = new QFrame(CashierWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_6);

        label_3 = new QLabel(CashierWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(250, 0));
        label_3->setStyleSheet(QStringLiteral("font-size: 12px;"));

        verticalLayout_7->addWidget(label_3);


        horizontalLayout_3->addLayout(verticalLayout_7);

        line_3 = new QFrame(CashierWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        lineBarcode = new QLineEdit(CashierWidget);
        lineBarcode->setObjectName(QStringLiteral("lineBarcode"));
        lineBarcode->setStyleSheet(QStringLiteral("font-size: 20px;"));

        verticalLayout_3->addWidget(lineBarcode);

        widget_2 = new QWidget(CashierWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 50));
        widget_2->setStyleSheet(QLatin1String("background-color: white;\n"
"border: 1px solid #ababab;"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelName = new QLabel(widget_2);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setStyleSheet(QStringLiteral("font-size: 16px; border: none;"));

        verticalLayout_2->addWidget(labelName);

        labelPrice = new QLabel(widget_2);
        labelPrice->setObjectName(QStringLiteral("labelPrice"));
        labelPrice->setStyleSheet(QStringLiteral("font-size: 16px; border: none;"));
        labelPrice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(labelPrice);


        verticalLayout_3->addWidget(widget_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        pushPay = new QPushButton(CashierWidget);
        pushPay->setObjectName(QStringLiteral("pushPay"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushPay->sizePolicy().hasHeightForWidth());
        pushPay->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(pushPay);


        verticalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(CashierWidget);

        QMetaObject::connectSlotsByName(CashierWidget);
    } // setupUi

    void retranslateUi(QWidget *CashierWidget)
    {
        CashierWidget->setWindowTitle(QApplication::translate("CashierWidget", "Form", 0));
        label->setText(QString());
        labelVersion->setText(QApplication::translate("CashierWidget", "Version", 0));
        labelTitle->setText(QApplication::translate("CashierWidget", "Sultan Market", 0));
        labelSubtitle->setText(QApplication::translate("CashierWidget", "<html><head/><body><p>Jogonalan Lor RT 2 Kasihan Bantul<br/>Yogyakarta</p></body></html>", 0));
        label_12->setText(QApplication::translate("CashierWidget", "Total", 0));
        labelTotal->setText(QApplication::translate("CashierWidget", "0", 0));
        label_6->setText(QApplication::translate("CashierWidget", "Sub Total", 0));
        labelSubTotal->setText(QApplication::translate("CashierWidget", "0", 0));
        label_7->setText(QApplication::translate("CashierWidget", "Tax", 0));
        labelTax->setText(QApplication::translate("CashierWidget", "0", 0));
        label_4->setText(QApplication::translate("CashierWidget", "Cusomer", 0));
        labelCustomerNumber->setText(QApplication::translate("CashierWidget", "None", 0));
        label_2->setText(QApplication::translate("CashierWidget", "Name", 0));
        label_5->setText(QApplication::translate("CashierWidget", "Poin", 0));
        labelCustomerName->setText(QApplication::translate("CashierWidget", "None", 0));
        labelCustomerPoin->setText(QApplication::translate("CashierWidget", "0", 0));
        label_3->setText(QApplication::translate("CashierWidget", "F1 : Help", 0));
        lineBarcode->setPlaceholderText(QApplication::translate("CashierWidget", "Scan barcode", 0));
        labelName->setText(QString());
        labelPrice->setText(QString());
        pushPay->setText(QApplication::translate("CashierWidget", "Pay", 0));
    } // retranslateUi

};

namespace Ui {
    class CashierWidget: public Ui_CashierWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERWIDGET_H
