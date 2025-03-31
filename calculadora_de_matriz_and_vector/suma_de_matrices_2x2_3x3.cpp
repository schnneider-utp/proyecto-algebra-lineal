#include "suma_de_matrices_2x2_3x3.h"
#include "ui_suma_de_matrices_2x2_3x3.h"

suma_de_matrices_2x2_3x3::suma_de_matrices_2x2_3x3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suma_de_matrices_2x2_3x3)
{
    ui->setupUi(this);
}

suma_de_matrices_2x2_3x3::~suma_de_matrices_2x2_3x3()
{
    delete ui;
}

void suma_de_matrices_2x2_3x3::on_pushButton_3_clicked()
{
    sumas *ventana1 = new sumas(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void suma_de_matrices_2x2_3x3::on_pushButton_clicked()
{
    suma_de_matrices_2x2 *ventana1 = new suma_de_matrices_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void suma_de_matrices_2x2_3x3::on_pushButton_2_clicked()
{
    suma_de_matrices_3x3 *ventana1 = new suma_de_matrices_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

