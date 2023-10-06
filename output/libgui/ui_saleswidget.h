/********************************************************************************
** Form generated from reading UI file 'saleswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESWIDGET_H
#define UI_SALESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelTitle;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *labelSales;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *labelMargin;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SalesWidget)
    {
        if (SalesWidget->objectName().isEmpty())
            SalesWidget->setObjectName(QStringLiteral("SalesWidget"));
        SalesWidget->resize(439, 338);
        verticalLayout = new QVBoxLayout(SalesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SalesWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon_32.png")));

        horizontalLayout->addWidget(label);

        labelTitle = new QLabel(SalesWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy);
        labelTitle->setStyleSheet(QStringLiteral("font-size: 20px;"));

        horizontalLayout->addWidget(labelTitle);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(SalesWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(SalesWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(200, 0));
        widget->setStyleSheet(QStringLiteral("border: 1px solid #ababab;"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-size: 10px; border: none;"));

        verticalLayout_2->addWidget(label_2);

        labelSales = new QLabel(widget);
        labelSales->setObjectName(QStringLiteral("labelSales"));
        labelSales->setStyleSheet(QStringLiteral("font-size: 20px;border: none;"));
        labelSales->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSales->setMargin(5);

        verticalLayout_2->addWidget(labelSales);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(SalesWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(200, 0));
        widget_2->setStyleSheet(QStringLiteral("border: 1px solid #ababab;"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font-size: 10px;border: none;"));

        verticalLayout_3->addWidget(label_4);

        labelMargin = new QLabel(widget_2);
        labelMargin->setObjectName(QStringLiteral("labelMargin"));
        labelMargin->setStyleSheet(QStringLiteral("font-size: 20px;border: none;"));
        labelMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelMargin->setMargin(5);

        verticalLayout_3->addWidget(labelMargin);


        horizontalLayout_2->addWidget(widget_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SalesWidget);

        QMetaObject::connectSlotsByName(SalesWidget);
    } // setupUi

    void retranslateUi(QWidget *SalesWidget)
    {
        SalesWidget->setWindowTitle(QApplication::translate("SalesWidget", "Form", 0));
        label->setText(QString());
        labelTitle->setText(QApplication::translate("SalesWidget", "Title", 0));
        label_2->setText(QApplication::translate("SalesWidget", "Total Sales", 0));
        labelSales->setText(QApplication::translate("SalesWidget", "0", 0));
        label_4->setText(QApplication::translate("SalesWidget", "Margin", 0));
        labelMargin->setText(QApplication::translate("SalesWidget", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class SalesWidget: public Ui_SalesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESWIDGET_H
