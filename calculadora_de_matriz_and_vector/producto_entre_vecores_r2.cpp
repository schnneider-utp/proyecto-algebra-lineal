#include "producto_entre_vecores_r2.h"
#include "ui_producto_entre_vecores_r2.h"

producto_entre_vecores_r2::producto_entre_vecores_r2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::producto_entre_vecores_r2)
{
    ui->setupUi(this);
}

producto_entre_vecores_r2::~producto_entre_vecores_r2()
{
    delete ui;
}

void producto_entre_vecores_r2::on_pushButton_clicked()
{
    short t, t1;
    QString dx1=ui->datox->text(),
        dy1=ui->datoy->text(),
        dx2=ui->dato2x->text(),
        dy2=ui->dato2y->text();

    long int x1=dx1.toInt(),
        y1=dy1.toInt(),
        x2=dx2.toInt(),
        y2=dy2.toInt();

    t=(x1*y2)-(x2*y1);

    ui->resultadox->setText(QString::number(t));
}


void producto_entre_vecores_r2::on_pushButton_2_clicked()
{
    producto_entre_vectores *ventana1 = new producto_entre_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

