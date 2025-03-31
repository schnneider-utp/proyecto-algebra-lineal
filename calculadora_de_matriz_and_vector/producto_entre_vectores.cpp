#include "producto_entre_vectores.h"
#include "ui_producto_entre_vectores.h"

producto_entre_vectores::producto_entre_vectores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::producto_entre_vectores)
{
    ui->setupUi(this);
}

producto_entre_vectores::~producto_entre_vectores()
{
    delete ui;
}

void producto_entre_vectores::on_pushButton_3_clicked()
{
    producto_vectorial *ventana1 = new producto_vectorial(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void producto_entre_vectores::on_pushButton_clicked()
{
    producto_entre_vecores_r2 *ventana1 = new producto_entre_vecores_r2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void producto_entre_vectores::on_pushButton_2_clicked()
{
    producto_entre_vecores_r3 *ventana1 = new producto_entre_vecores_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

