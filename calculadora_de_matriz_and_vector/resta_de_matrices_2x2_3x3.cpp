#include "resta_de_matrices_2x2_3x3.h"
#include "ui_resta_de_matrices_2x2_3x3.h"

resta_de_matrices_2x2_3x3::resta_de_matrices_2x2_3x3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resta_de_matrices_2x2_3x3)
{
    ui->setupUi(this);
}

resta_de_matrices_2x2_3x3::~resta_de_matrices_2x2_3x3()
{
    delete ui;
}

void resta_de_matrices_2x2_3x3::on_pushButton_2_clicked()
{
    resta_de_matrices_3x3 *ventana1 = new resta_de_matrices_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void resta_de_matrices_2x2_3x3::on_pushButton_clicked()
{
    resta_de_matrices_2x2 *ventana1 = new resta_de_matrices_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void resta_de_matrices_2x2_3x3::on_pushButton_3_clicked()
{
    sumas *ventana1 = new sumas(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

