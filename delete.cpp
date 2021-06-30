#include "delete.h"
#include "ui_delete.h"
#include<QMessageBox>
#include<QString>
#include"login_form.h"

Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
    mydb3=QSqlDatabase::addDatabase("QSQLITE");
    mydb3.setDatabaseName("C:/Users/HP/Desktop/OOP Project/Databases/Managers.db");
    if(!mydb3.open())
    {
    ui->Label->setText("Failed to Connect Database!");
    }
    else {
        ui->Label->setText("Connected");
    }

}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_pushButton_clicked()
{
    QString username,password;
       username=ui->lineEdit_username->text();
       password=ui->lineEdit_password->text();


           QSqlQuery qry;
           qry.prepare("Delete from Admin where Email='"+username+"'and Password='"+password+"'");
           if(qry.exec())
             QMessageBox::critical(this,tr("Delete"),tr("Deleted!"));
           else
            QMessageBox::critical(this,tr("Delete"),tr("Not Deleted!"));

}

void Delete::on_pushButton_2_clicked()
{
    this->hide();
    Login_form *lf = new Login_form();
    lf->show();
}
