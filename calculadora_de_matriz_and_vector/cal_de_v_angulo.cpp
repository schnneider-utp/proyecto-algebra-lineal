#include "cal_de_v_angulo.h"
#include "ui_cal_de_v_angulo.h"

cal_de_v_angulo::cal_de_v_angulo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cal_de_v_angulo)
{
    ui->setupUi(this);
}

cal_de_v_angulo::~cal_de_v_angulo()
{
    delete ui;
}

void cal_de_v_angulo::on_pushButton_clicked()
{
    vectores_suma_angulo *ventana1 = new vectores_suma_angulo(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void cal_de_v_angulo::on_pushButton_2_clicked()
{
    dirrecion_angulo *ventana1 = new dirrecion_angulo(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


void cal_de_v_angulo::on_pushButton_3_clicked()
{
    angulo_entre_vectores *ventana1 = new angulo_entre_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

