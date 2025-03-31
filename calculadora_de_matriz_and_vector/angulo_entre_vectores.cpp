#include "angulo_entre_vectores.h"
#include "ui_angulo_entre_vectores.h"
#include <cmath>

angulo_entre_vectores::angulo_entre_vectores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::angulo_entre_vectores)
{
    ui->setupUi(this);
}

angulo_entre_vectores::~angulo_entre_vectores()
{
    delete ui;
}

void angulo_entre_vectores::on_producto_clicked()
{
    double C11, C12, C13, C14, C15, f1, f2;
    QString V1=ui->v1->text(),
        V2=ui->v2->text(),
        W1=ui->w1->text(),
        W2=ui->w2->text();


    float V11=V1.toFloat(),
          V22=V2.toFloat(),
          W11=W1.toFloat(),
          W22=W2.toFloat();

    C11 = ((V11*W11)+(V22*W22));
    f1 = (qPow(V11,2)+qPow(V22,2));
    f2 = (qPow(W11,2)+qPow(W22,2));
    C12 = (qSqrt(f1)*qSqrt(f2));
    C13 = (C11/C12);
    C14 = qAcos(C13);
    C15 = (C14*180)/M_PI;

    ui->c2->setText(QString::number(C15)+"°");
}


void angulo_entre_vectores::on_pushButton_clicked()
{
    cal_de_v_angulo *ventana1 = new cal_de_v_angulo(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

