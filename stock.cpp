#include "stock.h"
#include "ui_stock.h"
#include<QString>
#include <QMessageBox>
#include"login_form.h"
#include<qdebug.h>
Stock::Stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stock)
{
    ui->setupUi(this);
    mydb4=QSqlDatabase::addDatabase("QSQLITE");
    mydb4.setDatabaseName("C:/Users/HP/Desktop/OOP Project/Databases/Stock.db");
    if(!mydb4.open())
    {
   qDebug()<<"Failed to Connect Database!";
    }
    else {
   qDebug()<<"Connected!";
    }
}

Stock::~Stock()
{
    delete ui;
}

void Stock::on_pushButton_clicked()
{
    QString ProductID,ProductName,ProductCompany,ProductCostPrice,ProductBarCode,Quantity,ProductSellPrice;
    ProductID=ui->lineEdit_ProductID->text();
    ProductName=ui->lineEdit_ProductName->text();
    ProductCompany=ui->lineEdit_ProductCompany->text();
    ProductCostPrice=ui->lineEdit_Productcostprice->text();
    ProductBarCode=ui->lineEdit_Productbarcode->text();
    Quantity=ui->lineEdit_Quantity->text();
    ProductSellPrice=ui->lineEdit_ProductSP->text();
        if(!mydb4.isOpen()){
            qDebug()<<"Failed connect Database!";
            return;
        }
        QSqlQuery q;
        q.prepare("insert into Stock (Product_ID,Product_Name,Product_Company,Product_costprice,Product_Barcode,Quantity,Product_Sellprice) values('"+ProductID+"','"+ProductName+"','"+ProductCompany+"','"+ProductCostPrice+"','"+ProductBarCode+"','"+Quantity+"','"+ProductSellPrice+"')");
        if(q.exec())
          QMessageBox::critical(this,tr("info"),tr("Saved"));
        else
         QMessageBox::critical(this,tr("info"),tr("Not Saved"));


}
