#include "add.h"
#include "ui_add.h"
#include<QMessageBox>
#include<QString>
#include"login_form.h"

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    mydb2=QSqlDatabase::addDatabase("QSQLITE");
    mydb2.setDatabaseName("C:/Users/HP/Desktop/OOP Project/Databases/Managers.db");
    if(!mydb2.isOpen())
    ui->label->setText("Failed to open Database!");
    else {
        ui->label->setText("Connected To Database");
    }

}

Add::~Add()
{
    delete ui;
}

void Add::on_pushButton_clicked()
{
    QString username,password;
       username=ui->lineEdit_username->text();
       password=ui->lineEdit_password->text();
        QSqlQuery qry;
        qry.prepare("insert into Admin (Email,Password) values('"+username+"','"+password+"')");
        if(qry.exec())
          QMessageBox::critical(this,tr("info"),tr("Saved"));
        else
         QMessageBox::critical(this,tr("info"),tr("Email Is already in use."));
}

void Add::on_pushButton_2_clicked()
{
    this->hide();
    Login_form *lf = new Login_form();
    lf->show();

}
