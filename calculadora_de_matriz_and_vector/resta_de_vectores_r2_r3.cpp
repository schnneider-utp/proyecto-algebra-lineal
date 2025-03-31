#include "resta_de_vectores_r2_r3.h"
#include "ui_resta_de_vectores_r2_r3.h"

resta_de_vectores_r2_r3::resta_de_vectores_r2_r3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resta_de_vectores_r2_r3)
{
    ui->setupUi(this);
}

resta_de_vectores_r2_r3::~resta_de_vectores_r2_r3()
{
    delete ui;
}

void resta_de_vectores_r2_r3::on_pushButton_clicked()
{
    resta_de_vectores_r2 *ventana1 = new resta_de_vectores_r2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void resta_de_vectores_r2_r3::on_pushButton_2_clicked()
{
    resta_de_vectores_r3 *ventana1 = new resta_de_vectores_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void resta_de_vectores_r2_r3::on_pushButton_3_clicked()
{
    sumas_de_vectores *ventana1 = new sumas_de_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

