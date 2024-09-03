#include "re_1_info.h"
#include "ui_re_1_info.h"

re_1_info::re_1_info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::re_1_info)
{
    ui->setupUi(this);
    db_1 =QSqlDatabase::addDatabase("QODBC");
    db_1.setDatabaseName("MIS_USER");
    db_1.setHostName("localhost");
    db_1.setUserName("root");
    db_1.setPassword("314159");
    if(!db_1.open()){
        QMessageBox::warning(this,"提示","数据库连接失败！");
        return;
    }
}

re_1_info::~re_1_info()
{
    delete ui;
}

//查询
void re_1_info::on_inquire_pbtn_clicked()
{

    t_1 = new QSqlTableModel(this);
    t_1->setTable("infomation");
    ui->tableView->setModel(t_1);
    t_1->select();
}


void re_1_info::on_index_sellpbtn_clicked()
{

    QString str_sell = ui->priceLineEdit->text();
    //float sell = str_sell.toFloat();
    indexBysell(str_sell);
    ui->priceLineEdit->clear();

}

void re_1_info::on_index_namepbtn_clicked()
{

    QString str_name = ui->nameLineEdit->text();
    indexByname(str_name);
    ui->nameLineEdit->clear();
}


void re_1_info::on_agjust_pbtn_clicked()
{

    QString str_id = ui->idLineEdit->text();

    QString str_adj = ui->agjlineEdit->text();

    updatesellingprice(str_id,str_adj);
    ui->idLineEdit->clear();
    ui->agjlineEdit->clear();

}
//修改售价函数
void re_1_info::updatesellingprice(QString id,QString sellingprice)
{

    QSqlQuery query(db_1);

    query.prepare("UPDATE infomation SET sellingprice = :sellingprice WHERE number = :id");
    query.bindValue(":sellingprice",sellingprice);
    query.bindValue(":id",id);

    if(!query.exec())
    {
        QMessageBox::warning(this,"警告","修改失败！"+query.lastError().text());
        qDebug()<<query.lastError().text();
    }
    else
    {
        QMessageBox::information(this,"提示","售价更改成功！");
    }
}

//售价索引函数
void re_1_info::indexBysell(QString sell)
{

    QSqlQuery query;
    query.prepare("SELECT*FROM infomation WHERE sellingprice =:price");
    query.bindValue(":price",sell);
    if(query.exec()&&query.next())
    {
        QSqlQueryModel*model = new QSqlTableModel(this);
        model->setQuery(query);
        //model->select();
        ui->tableView->setModel(model);
    }
    else
    {
        QMessageBox::warning(this,"提示","未找到该售价的商品！");
    }
}

//名称索引函数
void re_1_info::indexByname(QString name)
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
