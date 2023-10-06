/********************************************************************************
** Form generated from reading UI file 'datefromtowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEFROMTOWIDGET_H
#define UI_DATEFROMTOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateStartEndWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *dateStart;
    QLabel *label;
    QDateTimeEdit *dateEnd;

    void setupUi(QWidget *DateStartEndWidget)
    {
        if (DateStartEndWidget->objectName().isEmpty())
            DateStartEndWidget->setObjectName(QStringLiteral("DateStartEndWidget"));
        DateStartEndWidget->resize(315, 45);
        horizontalLayout_2 = new QHBoxLayout(DateStartEndWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dateStart = new QDateTimeEdit(DateStartEndWidget);
        dateStart->setObjectName(QStringLiteral("dateStart"));
        dateStart->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateStart);

        label = new QLabel(DateStartEndWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        dateEnd = new QDateTimeEdit(DateStartEndWidget);
        dateEnd->setObjectName(QStringLiteral("dateEnd"));
        dateEnd->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEnd);


        retranslateUi(DateStartEndWidget);

        QMetaObject::connectSlotsByName(DateStartEndWidget);
    } // setupUi

    void retranslateUi(QWidget *DateStartEndWidget)
    {
        DateStartEndWidget->setWindowTitle(QApplication::translate("DateStartEndWidget", "Form", 0));
        label->setText(QApplication::translate("DateStartEndWidget", "to", 0));
    } // retranslateUi

};

namespace Ui {
    class DateStartEndWidget: public Ui_DateStartEndWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEFROMTOWIDGET_H
