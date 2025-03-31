#include "sumas_de_vectores.h"
#include "ui_sumas_de_vectores.h"

sumas_de_vectores::sumas_de_vectores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sumas_de_vectores)
{
    ui->setupUi(this);
}

sumas_de_vectores::~sumas_de_vectores()
{
    delete ui;
}

void sumas_de_vectores::on_pushButton_clicked()
{
    suma_de_vectores_r2_r3 *ventana1 = new suma_de_vectores_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

void sumas_de_vectores::on_pushButton_2_clicked()
{
    resta_de_vectores_r2_r3 *ventana1 = new resta_de_vectores_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

