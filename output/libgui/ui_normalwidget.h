/********************************************************************************
** Form generated from reading UI file 'normalwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALWIDGET_H
#define UI_NORMALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NormalWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelTitle;
    QFrame *line;

    void setupUi(QWidget *NormalWidget)
    {
        if (NormalWidget->objectName().isEmpty())
            NormalWidget->setObjectName(QStringLiteral("NormalWidget"));
        NormalWidget->resize(439, 338);
        verticalLayout = new QVBoxLayout(NormalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(NormalWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/icon_32.png")));

        horizontalLayout->addWidget(label);

        labelTitle = new QLabel(NormalWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy);
        labelTitle->setStyleSheet(QStringLiteral("font-size: 20px;"));

        horizontalLayout->addWidget(labelTitle);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(NormalWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(NormalWidget);

        QMetaObject::connectSlotsByName(NormalWidget);
    } // setupUi

    void retranslateUi(QWidget *NormalWidget)
    {
        NormalWidget->setWindowTitle(QApplication::translate("NormalWidget", "Form", 0));
        label->setText(QString());
        labelTitle->setText(QApplication::translate("NormalWidget", "Title", 0));
    } // retranslateUi

};

namespace Ui {
    class NormalWidget: public Ui_NormalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALWIDGET_H
