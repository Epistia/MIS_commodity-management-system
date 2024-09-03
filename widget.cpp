#include "widget.h"
#include "ui_widget.h"
#include"regist.h"
#include"mainwindow.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("登录界面");
    ui->codeLineEdit->setEchoMode(QLineEdit::Password);

    //配置数据库
    db =QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("MIS_USER");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("314159");
    if(!db.open()){
        QMessageBox::warning(this,"提示","数据库连接失败！");
        return;
    }

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_loginPushButton_clicked()
{

    turnwindow();
}

//跳转注册界面
void Widget::on_registeredPushButton_clicked()
{
    regist *r= new regist();
    this->hide();
    r->show();
}

//退出界面
void Widget::on_backPushButton_clicked()
{

    this->close();
}

//显示密码，布尔型信号，勾选即为1,便于判断
void Widget::on_showcheckBox_clicked(bool checked)
{
    if(checked){
        //显示数据Normal, NoEcho, Password, PasswordEchoOnEdit四种形式
        ui->codeLineEdit->setEchoMode(QLineEdit::Normal);
    }else{
        ui->codeLineEdit->setEchoMode(QLineEdit::Password);
    }
}

//跳转到主界面
void Widget::turnwindow()
{

    //读取输入信息
    QString input_name = ui->idLineEdit->text();
    QString input_code = ui->codeLineEdit->text();

    //从数据库中查询
    QSqlQuery query(db);
    query.prepare("SELECT*FROM REGISTERED WHERE NAME = :name AND CODE = :code");
    //绑定参数
    query.bindValue(":name",input_name);
    query.bindValue(":code",input_code);

    if(!query.exec()){
        QMessageBox::warning(this,"提示","数据查询失败"+query.lastError().text());
        return;
    }

    bool matchFound = false;
    while(query.next()){
        matchFound = true;
        break;
    }
    if(matchFound){
        mainwindow *m = new mainwindow();
        this->hide();
        m->show();
    }
    else{
        QMessageBox::warning(this,"提示","用户不存在！");
    }
}
