#include "comprobacion_de_matriz.h"
#include "ui_comprobacion_de_matriz.h"

comprobacion_de_matriz::comprobacion_de_matriz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comprobacion_de_matriz)
{
    ui->setupUi(this);
}

comprobacion_de_matriz::~comprobacion_de_matriz()
{
    delete ui;
}

void comprobacion_de_matriz::on_pushButton_clicked()
{
    float k1, k2, k3;

    QString Ax11=ui->a11->text(),
        Ax12=ui->a12->text(),
        Ax13=ui->a13->text(),
        Ax21=ui->a21->text(),
        Ax22=ui->a22->text(),
        Ax23=ui->a23->text(),
        Ax31=ui->a31->text(),
        Ax32=ui->a32->text(),
        Ax33=ui->a33->text(),

        Ax11_2=ui->a11_2->text(),
        Ax12_2=ui->a12_2->text(),
        Ax13_2=ui->a13_2->text(),
        Ax21_2=ui->a21_2->text(),
        Ax22_2=ui->a22_2->text(),
        Ax23_2=ui->a23_2->text(),
        Ax31_2=ui->a31_2->text(),
        Ax32_2=ui->a32_2->text(),
        Ax33_2=ui->a33_2->text();

    long int A11=Ax11.toInt(),
        A12=Ax12.toInt(),
        A13=Ax13.toInt(),
        A21=Ax21.toInt(),
        A22=Ax22.toInt(),
        A23=Ax23.toInt(),
        A31=Ax31.toInt(),
        A32=Ax32.toInt(),
        A33=Ax33.toInt(),

        A_11=Ax11_2.toInt(),
        A_12=Ax12_2.toInt(),
        A_13=Ax13_2.toInt(),
        A_21=Ax21_2.toInt(),
        A_22=Ax22_2.toInt(),
        A_23=Ax23_2.toInt(),
        A_31=Ax31_2.toInt(),
        A_32=Ax32_2.toInt(),
        A_33=Ax33_2.toInt();

    k1=((A11*A_11)+(A12*A_12)+(A13*A_13));
    k2=((A21*A_21)+(A22*A_22)+(A23*A_23));
    k3=((A31*A_31)+(A32*A_32)+(A33*A_33));

    ui->t1->setText(QString::number(k1));
    ui->t2->setText(QString::number(k2));
    ui->t3->setText(QString::number(k3));
}

