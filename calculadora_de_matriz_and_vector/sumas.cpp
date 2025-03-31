#include "sumas.h"
#include "ui_sumas.h"

sumas::sumas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sumas)
{
    ui->setupUi(this);
}

sumas::~sumas()
{
    delete ui;
}

void sumas::on_pushButton_clicked()
{
    suma_de_matrices_2x2_3x3 *ventana1 = new suma_de_matrices_2x2_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void sumas::on_pushButton_2_clicked()
{
    resta_de_matrices_2x2_3x3 *ventana1 = new resta_de_matrices_2x2_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

