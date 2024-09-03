#include "re_3_store.h"
#include "ui_re_3_store.h"

re_3_store::re_3_store(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::re_3_store)
{
    ui->setupUi(this);
    db_3 =QSqlDatabase::addDatabase("QODBC");
    db_3.setDatabaseName("MIS_USER");
    db_3.setHostName("localhost");
    db_3.setUserName("root");
    db_3.setPassword("314159");
    if(!db_3.open()){
        QMessageBox::warning(this,"提示","数据库连接失败！");
        return;
    }
}

re_3_store::~re_3_store()
{
    delete ui;
}


//销毁函数
void re_3_store::destroy(int number)
{

    QSqlQuery query(db_3);

    query.prepare("DELETE FROM infomation WHERE number =:number");
    query.bindValue(":number",number);

    if(!query.exec())
    {
        QMessageBox::warning(this,"警告","销毁失败"+query.lastError().text());
    }
    QMessageBox::information(this,"提示","销毁成功，请多注意商品保质期！");
}

//数量查询函数
void re_3_store::indexByquantity(int quantity)
{
    QSqlQuery query;
    query.prepare("SELECT*FROM infomation WHERE quantity =:quantity");
    query.bindValue(":quantity",quantity);
    if(query.exec()&&query.next())
    {
        QSqlQueryModel*model = new QSqlTableModel(this);
        model->setQuery(query);
        //model->select();
        ui->tableView->setModel(model);
    }
    else
    {
        QMessageBox::warning(this,"提示","未找到此数量的商品！");
    }
}

//日期查询函数
void re_3_store::indexBytime(QString time)
{
    QSqlQuery query;
    query.prepare("SELECT*FROM infomation WHERE stockingtime =:stockingtime");
    query.bindValue(":stockingtime",time);
    if(query.exec()&&query.next())
    {
        QSqlQueryModel*model = new QSqlTableModel(this);
        model->setQuery(query);
        //model->select();
        ui->tableView->setModel(model);
    }
    else
    {
        QMessageBox::warning(this,"提示","未找到该日期购进的商品！");
    }
}

void re_3_store::on_destroy_pbtn_clicked()
{
    int number = ui->numlineEdit->text().toInt();
    destroy(number);
    ui->numlineEdit->clear();
}


void re_3_store::on_indexbyquantity_pbtn_clicked()
{

    int quantity = ui->quantitylineEdit->text().toInt();
    indexByquantity(quantity);
    ui->quantitylineEdit->clear();
}

void re_3_store::on_indexbytime_pbtn_clicked()
{

    QDate dtime = ui->dateEdit->date();
    QString time = dtime.toString("yyyy-MM-dd");
    indexBytime(time);
}

