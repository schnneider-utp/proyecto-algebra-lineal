#include "suma_de_vectores_r2_r3.h"
#include "ui_suma_de_vectores_r2_r3.h"

suma_de_vectores_r2_r3::suma_de_vectores_r2_r3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suma_de_vectores_r2_r3)
{
    ui->setupUi(this);
}

suma_de_vectores_r2_r3::~suma_de_vectores_r2_r3()
{
    delete ui;
}

void suma_de_vectores_r2_r3::on_pushButton_clicked()
{
    suma_de_vectores_2x2 *ventana1 = new suma_de_vectores_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void suma_de_vectores_r2_r3::on_pushButton_3_clicked()
{
    sumas_de_vectores *ventana1 = new sumas_de_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void suma_de_vectores_r2_r3::on_pushButton_2_clicked()
{
    suma_de_vectores_3x3 *ventana1 = new suma_de_vectores_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}
