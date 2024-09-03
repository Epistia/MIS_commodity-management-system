#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QDebug>

mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainwindow)
    ,page1(nullptr)//子窗口的ui
    ,page2(nullptr)
    ,page3(nullptr)
    ,page4(nullptr)
{
    ui->setupUi(this);
    initPage();
    this->setWindowTitle("商品信息管理系统MIS");

}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::initPage(){

    //子窗口对象建立
    page1 = new re_1_info(this);
    page2 = new re_2_order(this);
    page3 = new re_3_store(this);
    page4 = new re_4_fina(this);

    //包含四个界面
    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->addWidget(page2);
    ui->stackedWidget->addWidget(page3);
    ui->stackedWidget->addWidget(page4);

    //初始化显示第一个界面
    ui->stackedWidget->setCurrentIndex(0);

    //页面切换
    auto l = ui->tool_window->children();
    for(auto it:l)
    {
        if(it->objectName().contains("btn"))
        {
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&mainwindow::change);
        }

    }
}

void mainwindow::change(){


    //qDebug()<<sender()->objectName();检测各个按钮发出的信号

    auto str = sender()->objectName();

    do
    {
        if("btn_infor" == str)
        {
         ui->stackedWidget->setCurrentIndex(0);
         break;
        }
        if("btn_order" == str)
        {
         ui->stackedWidget->setCurrentIndex(1);
         break;
        }
        if("btn_store" == str)
        {
            ui->stackedWidget->setCurrentIndex(2);
            break;
        }
        if("btn_money" == str)
        {
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }
    }while(false);
}
