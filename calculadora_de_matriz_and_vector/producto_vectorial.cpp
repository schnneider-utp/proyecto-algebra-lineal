#include "producto_vectorial.h"
#include "ui_producto_vectorial.h"

producto_vectorial::producto_vectorial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::producto_vectorial)
{
    ui->setupUi(this);
}

producto_vectorial::~producto_vectorial()
{
    delete ui;
}

void producto_vectorial::on_pushButton_clicked()
{
    escalar_r2_r3 *ventana1 = new escalar_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void producto_vectorial::on_pushButton_2_clicked()
{
    producto_entre_vectores *ventana1 = new producto_entre_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

