#include "login_form.h"
#include "ui_login_form.h"

Login_form::Login_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login_form)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/HP/Desktop/OOP Project/Databases/Managers.db");
    if(!mydb.open())
        ui->label->setText("Falied");
    else {
        ui->label->setText("Connected");
    }
}

Login_form::~Login_form()
{
    delete ui;
}

