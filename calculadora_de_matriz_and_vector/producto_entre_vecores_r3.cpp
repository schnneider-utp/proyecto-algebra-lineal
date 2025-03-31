#include "producto_entre_vecores_r3.h"
#include "ui_producto_entre_vecores_r3.h"

producto_entre_vecores_r3::producto_entre_vecores_r3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::producto_entre_vecores_r3)
{
    ui->setupUi(this);
}

producto_entre_vecores_r3::~producto_entre_vecores_r3()
{
    delete ui;
}

void producto_entre_vecores_r3::on_pushButton_clicked()
{
    short t, t1, t2;
    QString dx1=ui->datox->text(),
            dy1=ui->datoy->text(),
            dz1=ui->datoz->text(),
            dx2=ui->dato2x->text(),
            dy2=ui->dato2y->text(),
            dz2=ui->dato2z->text();
    long int x1=dx1.toInt(),
             y1=dy1.toInt(),
             z1=dz1.toInt(),
             x2=dx2.toInt(),
             y2=dy2.toInt(),
             z2=dz2.toInt();
    t=(y1*z2)-(z1*y2);
    t1=-1*((x1*z2)-(z1*x2));
    t2=(x1*y2)-(y1*x2);
    ui->resultadox->setText(QString::number(t));
    ui->resultadoy->setText(QString::number(t1));
    ui->resultadoz->setText(QString::number(t2));
}


void producto_entre_vecores_r3::on_pushButton_2_clicked()
{
    producto_entre_vectores *ventana1 = new producto_entre_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

