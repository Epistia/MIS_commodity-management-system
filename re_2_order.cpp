#include "re_2_order.h"
#include "ui_re_2_order.h"

re_2_order::re_2_order(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::re_2_order)
{
    ui->setupUi(this);
    db_2 =QSqlDatabase::addDatabase("QODBC");
    db_2.setDatabaseName("MIS_USER");
    db_2.setHostName("localhost");
    db_2.setUserName("root");
    db_2.setPassword("314159");
    if(!db_2.open()){
        QMessageBox::warning(this,"提示","数据库连接失败！");
        return;
    }

    //设置下拉列表
    ui->vendor->addItem("果蔬批发商");
    ui->vendor->addItem("零食批发商");
    ui->vendor->addItem("电子供应商");
    ui->vendor->addItem("五金批发商");
    ui->vendor->addItem("服装批发商");
    ui->vendor->addItem("其他");
    ui->vendor->setCurrentIndex(1);
}

re_2_order::~re_2_order()
{
    delete ui;
}

void re_2_order::on_order_pbtn_clicked()
{

    t_2 = new QSqlTableModel(this);
    t_2->setTable("infomation");
    ui->tableView->setModel(t_2);
    t_2->select();
}


void re_2_order::on_but_pbtn_clicked()
{

    purchase();

}


void re_2_order::on_sale_pbtn_clicked()
{

    //给出提示信息
    QMessageBox::information(this,"提示","注意商品编号为整数且唯一，价格等数值不能为负，出售操作须对商品编号明确，保质期默认单位为月，如一年的保质期需填写12（月）!");

}


void re_2_order::on_out_pbtn_clicked()
{

    sell();
}


//进货函数
void re_2_order::purchase(){
    //获取文本框内输入数据
    QString str_id = ui->idLineEdit->text();
    QString str_name = ui->nameLineEdit->text();
    QString str_quantity = ui->quantityLineEdit->text();
    QString str_purchaceprice = ui->purchacepriceLineEdit->text();
    QString str_sellingprice = ui->sellinglineEdit->text();
    QString str_offer = ui->vendor->currentText();
    QString str_shelflife = ui->shelflifelineEdit->text();
    QString str_time = ui->dateEdit->date().toString("yyyy-MM-dd");

    QSqlQuery query(db_2);
    if(str_name.isEmpty())
    {
         query.prepare("INSERT INTO infomation(number,quantity,sellingprice,purchaseprice,vendor,shelflife,stockingtime)VALUES(:id,:quantity,:sellingprice,:purchaseprice,:vendor,:shelflife,:stockingtime)");
    }else if(str_quantity.isEmpty())
    {
        QMessageBox::warning(this,"警告","进货无效：进货数量为零");
        return;
    }else if(str_purchaceprice.isEmpty())
    {
         query.prepare("INSERT INTO infomation(number,name,quantity,sellingprice,vendor,shelflife,stockingtime)VALUES(:id,:name,:quantity,:sellingprice,:vendor,:shelflife,:stockingtime)");
    }
    else if(str_sellingprice.isEmpty())
    {
         query.prepare("INSERT INTO infomation(number,name,quantity,purchaseprice,vendor,shelflife,stockingtime)VALUES(:id,:name,:quantity,:purchaseprice,:vendor,:shelflife,:stockingtime)");
    }
    else if(str_shelflife.isEmpty())
    {
        QMessageBox::warning(this,"警告","该产品无保质期，无法购入！");
        return;
    }
    else if(str_time.isEmpty())
    {
         query.prepare("INSERT INTO infomation(number,name,quantity,sellingprice,purchaseprice,vendor,shelflife)VALUES(:id,:name,:quantity,:sellingprice,:purchaseprice,:vendor,:shelflife)");
    }
    else
    {
    query.prepare("INSERT INTO infomation(number,name,quantity,sellingprice,purchaseprice,vendor,shelflife,stockingtime)VALUES(:id,:name,:quantity,:sellingprice,:purchaseprice,:vendor,:shelflife,:stockingtime)");
    }

    //处理数据，使其插入数据库中
    query.bindValue(":id",str_id);
    query.bindValue(":name",str_name);
    query.bindValue(":quantity",str_quantity);
    query.bindValue(":sellingprice",str_sellingprice);
    query.bindValue(":purchaseprice",str_purchaceprice);
    query.bindValue(":vendor",str_offer);
    query.bindValue(":shelflife",str_shelflife);
    query.bindValue(":stockingtime",str_time);
    if(!query.exec())
    {
        QMessageBox::warning(this,"提示","进货失败！"+query.lastError().text());
    }
    else
    {
        QMessageBox::information(this,"提示","进货成功！");
    }
    ui->idLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->quantityLineEdit->clear();
    ui->purchacepriceLineEdit->clear();
    ui->sellinglineEdit->clear();
    ui->shelflifelineEdit->clear();
}

//出售函数
void re_2_order::sell(){

    QString str_number = ui->idLineEdit->text();
    QString str_quantity = ui->quantityLineEdit->text();

    QSqlQuery query(db_2);

    if(str_number.isEmpty())
    {
        QMessageBox::warning(this,"警告","商品编号须填写！");
        return;
    }

    if(str_quantity.isEmpty())
    {
        QMessageBox::warning(this,"警告","出售无效：售出数量为零！");
        return;
    }
    query.prepare("UPDATE infomation SET quantity = :quantity WHERE number = :number");
    query.bindValue(":number",str_number);
    int quantity = getTruequantity(str_number.toInt())-str_quantity.toInt();
    query.bindValue(":quantity",QString::number(quantity));

    if(!query.exec())
    {
        QMessageBox::warning(this,"警告","出售失败"+query.lastError().text());
    }
    QMessageBox::information(this,"提示","出售成功，请留意库存！");

    ui->idLineEdit->clear();
    ui->quantityLineEdit->clear();
}

//获取当前数量
int re_2_order::getTruequantity(int number){

    QSqlQuery query(db_2);
    query.prepare("SELECT quantity FROM infomation WHERE number = :number");
    query.bindValue(":number",number);

    if(!query.exec())
    {
        QMessageBox::warning(this,"警告","该物品不存在！");
        return -1;
    }
    int quantity = -1;//初始化为找到的值
    while(query.next())
    {
        quantity =  query.value("quantity").toInt();
    }
    return quantity;
}
