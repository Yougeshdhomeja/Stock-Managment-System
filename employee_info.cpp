#include "employee_info.h"
#include "ui_employee_info.h"
#include<QMessageBox>
#include<QString>
#include"login_form.h"

Employee_info::Employee_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employee_info)
{
    ui->setupUi(this);
    mydb1=QSqlDatabase::addDatabase("QSQLITE");
    mydb1.setDatabaseName("C:/Users/HP/Desktop/OOP Project/Databases/Customers.db");
    if(mydb1.open())
    {
        ui->label_5->setText("Connected!");
    }
    else {
        ui->label_5->setText("Failed to Connect..");
    }
}

Employee_info::~Employee_info()
{
    delete ui;
}

void Employee_info::on_pushButton_clicked()
{
    QString name,Contact,CNIC,City;

        name=ui->lineEdit_3_name->text();
        Contact=ui->lineEdit_4_Con->text();
        CNIC=ui->lineEdit_2_cnic->text();
        City=ui->lineEdit_city->text();
        if(!mydb1.isOpen()){
            qDebug()<<"Failed connect Database!";
            return;
        }
        QSqlQuery qry;
        qry.prepare("insert into Customers (Name,City,Contact,CNIC) values('"+name+"','"+City+"','"+Contact+"','"+CNIC+"')");
        if(qry.exec())
          QMessageBox::critical(this,tr("info"),tr("Saved"));
        else
         QMessageBox::critical(this,tr("info"),tr("Not Saved"));


}

void Employee_info::on_pushButton_2_clicked()
{
    QString name,Contact,CNIC,City;

        name=ui->lineEdit_3_name->text();
        Contact=ui->lineEdit_4_Con->text();
        CNIC=ui->lineEdit_2_cnic->text();
        City=ui->lineEdit_city->text();
        if(!mydb1.isOpen()){
            qDebug()<<"Failed connect Database!";
            return;
        }
        QSqlQuery qry;
        qry.prepare("update Customers set name='"+name+"',Contact='"+Contact+"',CNIC='"+CNIC+"',City='"+City+"' where contact='"+Contact+"' ");
        if(qry.exec())
          QMessageBox::critical(this,tr("Edit"),tr("Updated!"));
        else
         QMessageBox::critical(this,tr("Edit"),tr("Not Updated!"));


}

void Employee_info::on_pushButton_3_clicked()
{
    this->hide();
    Login_form *lf = new Login_form();
    lf->show();
}
