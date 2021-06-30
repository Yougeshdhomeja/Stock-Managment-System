#include "buttons.h"
#include "ui_buttons.h"

Buttons::Buttons(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buttons)
{
    ui->setupUi(this);
}

Buttons::~Buttons()
{
    delete ui;
}

void Buttons::on_pushButton_clicked()
{
    this->hide();
    Stock s;
    s.setModal(true);
    s.exec();
}

void Buttons::on_pushButton_2_clicked()
{
    this->hide();
    Employee_info emp;
    emp.setModal(true);
    emp.exec();
}
