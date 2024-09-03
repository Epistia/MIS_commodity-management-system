/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *codeLineEdit;
    QCheckBox *showcheckBox;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *loginPushButton;
    QPushButton *registeredPushButton;
    QPushButton *backPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(264, 359);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName("gridLayout_4");
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName("widget_3");
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setObjectName("gridLayout_5");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(20);
        label_3->setFont(font);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(Widget);
        widget_4->setObjectName("widget_4");
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        idLineEdit = new QLineEdit(widget_2);
        idLineEdit->setObjectName("idLineEdit");

        horizontalLayout->addWidget(idLineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        codeLineEdit = new QLineEdit(widget_2);
        codeLineEdit->setObjectName("codeLineEdit");

        horizontalLayout_2->addWidget(codeLineEdit);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        showcheckBox = new QCheckBox(widget_2);
        showcheckBox->setObjectName("showcheckBox");

        gridLayout_2->addWidget(showcheckBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(33, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_4, 1, 0, 1, 1);

        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        loginPushButton = new QPushButton(widget);
        loginPushButton->setObjectName("loginPushButton");

        gridLayout->addWidget(loginPushButton, 0, 0, 1, 1);

        registeredPushButton = new QPushButton(widget);
        registeredPushButton->setObjectName("registeredPushButton");

        gridLayout->addWidget(registeredPushButton, 0, 1, 1, 1);

        backPushButton = new QPushButton(widget);
        backPushButton->setObjectName("backPushButton");

        gridLayout->addWidget(backPushButton, 0, 2, 1, 1);


        gridLayout_4->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "   \345\257\206\347\240\201\357\274\232", nullptr));
        showcheckBox->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272", nullptr));
        loginPushButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        registeredPushButton->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        backPushButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
