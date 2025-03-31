#include "matris_a_vector.h"
#include "ui_matris_a_vector.h"

matris_a_vector::matris_a_vector(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matris_a_vector)
{
    ui->setupUi(this);
}

matris_a_vector::~matris_a_vector()
{
    delete ui;
}

void matris_a_vector::on_producto_clicked()
{
    double C1, C2, C3, V1, V2, V3, W1, W2, W3;
    QString
        A11=ui->a11->text(),
        A12=ui->a12->text(),
        A13=ui->a13->text(),
        A21=ui->a21->text(),
        A22=ui->a22->text(),
        A23=ui->a23->text(),
        A31=ui->a31->text(),
        A32=ui->a32->text(),
        A33=ui->a33->text();



    float A111=A11.toFloat(),
        A112=A12.toFloat(),
        A113=A13.toFloat(),
        A121=A21.toFloat(),
        A122=A22.toFloat(),
        A123=A23.toFloat(),
        A131=A31.toFloat(),
        A132=A32.toFloat(),
        A133=A33.toFloat();



    V1 = (A111);
    V2 = (A121);
    V3 = (A131);
    W1 = (A112);
    W2 = (A122);
    W3 = (A132);
    C1 = (A113);
    C2 = (A123);
    C3 = (A133);




    ui->v1->setText(QString::number(V1));
    ui->v2->setText(QString::number(V2));
    ui->v3->setText(QString::number(V3));
    ui->w1->setText(QString::number(W1));
    ui->w2->setText(QString::number(W2));
    ui->w3->setText(QString::number(W3));
    ui->c1->setText(QString::number(C1));
    ui->c2->setText(QString::number(C2));
    ui->c3->setText(QString::number(C3));
    ui->resultante->setText("Los vectores resultantes son:");
}

