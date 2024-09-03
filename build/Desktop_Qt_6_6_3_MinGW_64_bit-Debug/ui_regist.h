/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *code_regLineEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *re_codeLineEdit;
    QPushButton *registerPushButton;
    QPushButton *back_regsPushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *id_regLineEdit;

    void setupUi(QWidget *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName("regist");
        regist->resize(252, 254);
        layoutWidget = new QWidget(regist);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 110, 156, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        code_regLineEdit = new QLineEdit(layoutWidget);
        code_regLineEdit->setObjectName("code_regLineEdit");

        horizontalLayout_2->addWidget(code_regLineEdit);

        layoutWidget_2 = new QWidget(regist);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 140, 156, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        re_codeLineEdit = new QLineEdit(layoutWidget_2);
        re_codeLineEdit->setObjectName("re_codeLineEdit");

        horizontalLayout_3->addWidget(re_codeLineEdit);

        registerPushButton = new QPushButton(regist);
        registerPushButton->setObjectName("registerPushButton");
        registerPushButton->setGeometry(QRect(50, 190, 56, 18));
        back_regsPushButton = new QPushButton(regist);
        back_regsPushButton->setObjectName("back_regsPushButton");
        back_regsPushButton->setGeometry(QRect(120, 190, 56, 18));
        widget = new QWidget(regist);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 80, 156, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        id_regLineEdit = new QLineEdit(widget);
        id_regLineEdit->setObjectName("id_regLineEdit");

        horizontalLayout->addWidget(id_regLineEdit);


        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QWidget *regist)
    {
        regist->setWindowTitle(QCoreApplication::translate("regist", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("regist", "     \345\257\206  \347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("regist", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        registerPushButton->setText(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        back_regsPushButton->setText(QCoreApplication::translate("regist", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("regist", "    \347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
