#include "escalar_r2_r3.h"
#include "ui_escalar_r2_r3.h"

escalar_r2_r3::escalar_r2_r3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escalar_r2_r3)
{
    ui->setupUi(this);
}

escalar_r2_r3::~escalar_r2_r3()
{
    delete ui;
}

void escalar_r2_r3::on_pushButton_clicked()
{
    escalar_r2 *ventana1 = new escalar_r2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void escalar_r2_r3::on_pushButton_2_clicked()
{
    escalar_r3 *ventana1 = new escalar_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

void escalar_r2_r3::on_pushButton_3_clicked()
{
    producto_vectorial *ventana1 = new producto_vectorial(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

