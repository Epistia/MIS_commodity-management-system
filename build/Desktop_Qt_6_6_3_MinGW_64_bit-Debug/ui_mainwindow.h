/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QGridLayout *gridLayout;
    QWidget *tool_window;
    QVBoxLayout *verticalLayout;
    QToolButton *btn_infor;
    QToolButton *btn_order;
    QToolButton *btn_store;
    QToolButton *btn_money;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(765, 645);
        mainwindow->setStyleSheet(QString::fromUtf8("QWidget#tool_window QToolButton{border:none;background-color:rgb(84,92,100);color:white;min-height:55px;font:14px\"\351\273\221\344\275\223\";padding-left:12px;}\n"
"QWidget#tool_window QToolButton:checked{background-color:rgb(67,74,80);}\n"
"QWidget#tool_window{background-color:rgb(84,92,100);}"));
        gridLayout = new QGridLayout(mainwindow);
        gridLayout->setObjectName("gridLayout");
        tool_window = new QWidget(mainwindow);
        tool_window->setObjectName("tool_window");
        verticalLayout = new QVBoxLayout(tool_window);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_infor = new QToolButton(tool_window);
        buttonGroup = new QButtonGroup(mainwindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_infor);
        btn_infor->setObjectName("btn_infor");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pho/pretty_pho.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_infor->setIcon(icon);
        btn_infor->setCheckable(true);
        btn_infor->setChecked(true);
        btn_infor->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_infor);

        btn_order = new QToolButton(tool_window);
        buttonGroup->addButton(btn_order);
        btn_order->setObjectName("btn_order");
        btn_order->setIcon(icon);
        btn_order->setCheckable(true);
        btn_order->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_order);

        btn_store = new QToolButton(tool_window);
        buttonGroup->addButton(btn_store);
        btn_store->setObjectName("btn_store");
        btn_store->setIcon(icon);
        btn_store->setCheckable(true);
        btn_store->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_store);

        btn_money = new QToolButton(tool_window);
        buttonGroup->addButton(btn_money);
        btn_money->setObjectName("btn_money");
        btn_money->setIcon(icon);
        btn_money->setCheckable(true);
        btn_money->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(btn_money);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addWidget(tool_window, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(mainwindow);
        stackedWidget->setObjectName("stackedWidget");

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(mainwindow);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "Form", nullptr));
        btn_infor->setText(QCoreApplication::translate("mainwindow", "\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        btn_order->setText(QCoreApplication::translate("mainwindow", "  \350\256\242\345\215\225\347\256\241\347\220\206  ", nullptr));
        btn_store->setText(QCoreApplication::translate("mainwindow", "  \345\272\223\345\255\230\347\256\241\347\220\206  ", nullptr));
        btn_money->setText(QCoreApplication::translate("mainwindow", "  \350\264\242\345\212\241\347\256\241\347\220\206  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
