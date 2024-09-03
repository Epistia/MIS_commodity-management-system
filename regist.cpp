#include "regist.h"
#include "ui_regist.h"
#include"widget.h"
#include<QString>
#include<QMessageBox>

regist::regist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::regist)
{
    ui->setupUi(this);
    this->setWindowTitle("注册界面");
    //默认密码不显示
    ui->code_regLineEdit->setEchoMode(QLineEdit::Password);
    //限制密码个数
    ui->code_regLineEdit->setMaxLength(8);
    ui->re_codeLineEdit->setEchoMode(QLineEdit::Password);
    ui->re_codeLineEdit->setMaxLength(8);

    //配置数据库连接
    db_regis =QSqlDatabase::addDatabase("QODBC");
    db_regis.setDatabaseName("MIS_USER");
    db_regis.setHostName("localhost");
    db_regis.setUserName("root");
    db_regis.setPassword("314159");
    if(!db_regis.open()){
        QMessageBox::warning(this,"提示","数据库连接失败！");
        return;
    }

}

regist::~regist()
{
    delete ui;
}

void regist::on_registerPushButton_clicked()
{

    registered();
}

//跳转到登录界面
void regist::on_back_regsPushButton_clicked()
{
    Widget *w = new Widget();
    this->hide();
    w->show();
}

//显示注册成功并返回登录界面
void regist::registered()
{
    QString str_name=ui->id_regLineEdit->text().trimmed();
    QString str_code=ui->code_regLineEdit->text().trimmed();
    QString str_recode = ui->re_codeLineEdit->text().trimmed();

    //判断两次密码是否相同
    int equal = QString::compare(str_code,str_recode);

    QSqlQuery query(db_regis);
    query.prepare("INSERT INTO REGISTERED(NAME,CODE) VALUES(:name,:code)");
    query.bindValue(":name",str_name);

    //判断密码是否符合要求
    if(equal == 0 && str_code.length()<9 && !str_code.isEmpty()){
        //插入合法密码
        query.bindValue(":code",str_code);
        if(!query.exec())
        {
            QMessageBox::warning(this,"提示","密码插入失败！");
        }

        //此处为打开一个新界面，故不用原界面返回信号
        Widget *w = new Widget();
        this->hide();
        QMessageBox::information(this,"提示","注册成功");

        //关闭数据库连接
        db_regis.close();

        w->show();

    }
    else{
        QMessageBox::warning(this,"提示","密码非法");
    }
}
