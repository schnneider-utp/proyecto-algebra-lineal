#include "vectores_suma_angulo.h"
#include "ui_vectores_suma_angulo.h"
#include <cmath>

vectores_suma_angulo::vectores_suma_angulo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vectores_suma_angulo)
{
    ui->setupUi(this);
}

vectores_suma_angulo::~vectores_suma_angulo()
{
    delete ui;
}

void vectores_suma_angulo::on_producto_clicked()
{
    double C11, C12;
    QString V1=ui->v1->text(),
        V2=ui->v2->text(),
        W1=ui->w1->text(),
        W2=ui->w2->text();


    float V11=V1.toFloat(),
        V22=V2.toFloat(),
        W11=W1.toFloat(),
        W22=W2.toFloat();

    double V221 = qDegreesToRadians(V22);
    double W221 = qDegreesToRadians(W22);


    C11 = (V11 * qCos(V221) + W11 * qCos(W221) );
    C12 = (V11 * qSin(V221) + W11 * qSin(W221) );

    ui->c1->setText(QString::number(C11));
    ui->c2->setText(QString::number(C12));
}


void vectores_suma_angulo::on_pushButton_2_clicked()
{
    cal_de_v_angulo *ventana1 = new cal_de_v_angulo(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

