#include "suma_de_vectores_2x2.h"
#include "ui_suma_de_vectores_2x2.h"

suma_de_vectores_2x2::suma_de_vectores_2x2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suma_de_vectores_2x2)
{
    ui->setupUi(this);
}

suma_de_vectores_2x2::~suma_de_vectores_2x2()
{
    delete ui;
}

void suma_de_vectores_2x2::on_sumarnum_clicked()
{
    short u, u1;
    QString dx1=ui->datox->text(),
            dy1=ui->datoy->text(),
            dx2=ui->dato2x->text(),
            dy2=ui->dato2y->text();
    long int x1=dx1.toInt(),
             y1=dy1.toInt(),
             x2=dx2.toInt(),
             y2=dy2.toInt();
             u=x1+x2;
             u1=y1+y2;
    ui->resultadox->setText(QString::number(u));
    ui->resultadoy->setText(QString::number(u1));
}


void suma_de_vectores_2x2::on_pushButton_clicked()
{
    suma_de_vectores_r2_r3 *ventana1 = new suma_de_vectores_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

