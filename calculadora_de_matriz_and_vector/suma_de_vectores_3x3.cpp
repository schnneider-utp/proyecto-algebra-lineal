#include "suma_de_vectores_3x3.h"
#include "ui_suma_de_vectores_3x3.h"

suma_de_vectores_3x3::suma_de_vectores_3x3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suma_de_vectores_3x3)
{
    ui->setupUi(this);
}

suma_de_vectores_3x3::~suma_de_vectores_3x3()
{
    delete ui;
}

void suma_de_vectores_3x3::on_pushButton_clicked()
{
    short t, t1, t2;
    QString dx1=ui->datox->text(),
            dy1=ui->datoy->text(),
            dz1=ui->datoz->text(),
            dx2=ui->dato2x->text(),
            dy2=ui->dato2y->text(),
            dz2=ui->dato3z->text();
    long int x1=dx1.toInt(),
             y1=dy1.toInt(),
             z1=dz1.toInt(),
             x2=dx2.toInt(),
             y2=dy2.toInt(),
             z2=dz2.toInt();
    t=x1+x2;
    t1=y1+y2;
    t2=z1+z2;
    ui->resultadox->setText(QString::number(t));
    ui->resultadoy->setText(QString::number(t1));
    ui->resultadoz->setText(QString::number(t2));
}


void suma_de_vectores_3x3::on_pushButton_2_clicked()
{
    suma_de_vectores_r2_r3 *ventana1 = new suma_de_vectores_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

