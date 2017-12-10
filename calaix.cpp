#include "calaix.h"
#include "ui_calaix.h"
#include "calculadora.h"
#include "ui_calculadora.h"

calaix::calaix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calaix)
{
    ui->setupUi(this);
    calculadoraa = new calculadora(this);
    calculadoraa->close();
    resize(480, 320);
}



calaix::~calaix()
{
    delete ui;
}


void calaix::on_tanca_clicked()
{
    close();
}

void calaix::on_calculadora_clicked()
{
    calculadoraa->show();

}
