#include "re_4_fina.h"
#include "ui_re_4_fina.h"

re_4_fina::re_4_fina(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::re_4_fina)
{
    ui->setupUi(this);
    db_4 =QSqlDatabase::addDatabase("QODBC");
    db_4.setDatabaseName("MIS_USER");
    db_4.setHostName("localhost");
    db_4.setUserName("root");
    db_4.setPassword("314159");
    if(!db_4.open()){
        QMessageBox::warning(this,"提示","数据库连接失败！");
        return;
    }
}

re_4_fina::~re_4_fina()
{
    delete ui;
}

//收入计算
void re_4_fina::getIncome(int number)
{
    QString str_query = QString("SELECT*FROM infomation WHERE number = %1").arg(number);
    QSqlQuery query;
    if(!query.exec(str_query))
    {
        QMessageBox::warning(this,"警告","查询出错"+query.lastError().text());
        return;
    }

    if(query.next())
    {
        QString name = query.value("name").toString();
        QString value1 = query.value("quantity").toString();
        int quantity = value1.toInt();
        QString value2 = query.value("sellingprice").toString();
        float sell = value2.toFloat();
        double income = sell*quantity;
        QString output_income = QString::number(income);
        QMessageBox::information(this,"信息",name+"的预计收入为："+output_income+"元");
    }
    else
    {
        QMessageBox::warning(this,"警告","该商品不存在！");
    }
}

//名称索引
void re_4_fina::indexByname(QString name)
{
    QSqlQuery query;
    query.prepare("SELECT*FROM infomation WHERE name =:name");
    query.bindValue(":name",name);
    if(query.exec()&&query.next())
    {
        QSqlQueryModel*model = new QSqlTableModel(this);
        model->setQuery(query);
        //model->select();
        ui->tableView->setModel(model);
    }
    else
    {
        QMessageBox::warning(this,"提示","未找到该名称的商品！");
    }
}

//利润计算
void re_4_fina::getProfit(int number)
{
    QString str_query = QString("SELECT*FROM infomation WHERE number = %1").arg(number);
    QSqlQuery query;
    if(!query.exec(str_query))
    {
        QMessageBox::warning(this,"警告","查询出错"+query.lastError().text());
        return;
    }

    if(query.next())
    {
        QString name = query.value("name").toString();
        QString value1 = query.value("quantity").toString();
        int quantity = value1.toInt();
        QString value2 = query.value("sellingprice").toString();
        float sell = value2.toFloat();
        QString value3 = query.value("purchaseprice").toString();
        float purchase = value3.toFloat();
        float differ = sell - purchase;
        double profit = differ*quantity;
        QString output_income = QString::number(profit);
        QMessageBox::information(this,"信息",name+"的预计利润为："+output_income+"元");
    }
    else
    {
        QMessageBox::warning(this,"警告","该商品不存在！");
    }
}

void re_4_fina::on_indexname_pbtn_clicked()
{
    QString name = ui->namelineEdit->text();
    indexByname(name);
    ui->namelineEdit->clear();
}


void re_4_fina::on_indexforall_pbtn_clicked()
{
    t_4 = new QSqlTableModel(this);
    t_4->setTable("infomation");
    ui->tableView->setModel(t_4);
    t_4->select();
}


void re_4_fina::on_income_pbtn_clicked()
{

    int number = ui->numberlineEdit->text().toInt();
    getIncome(number);
    ui->numberlineEdit->clear();
}


void re_4_fina::on_profit_pbtn_clicked()
{
    int number = ui->numberlineEdit->text().toInt();
    getProfit(number);
    ui->numberlineEdit->clear();
}

