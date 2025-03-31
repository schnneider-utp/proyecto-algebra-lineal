#include "inversas.h"
#include "ui_inversas.h"

inversas::inversas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inversas)
{
    ui->setupUi(this);
}

inversas::~inversas()
{
    delete ui;
}

void inversas::on_pushButton_clicked()
{
    float k, k1, k2, k3, k4, k5, k6, k7, k8, k9, t1, t2, t3, t4, t5, t6, t7, t8, t9;

    QString Ax11=ui->a11->text(),
        Ax12=ui->a12->text(),
        Ax13=ui->a13->text(),
        Ax21=ui->a21->text(),
        Ax22=ui->a22->text(),
        Ax23=ui->a23->text(),
        Ax31=ui->a31->text(),
        Ax32=ui->a32->text(),
        Ax33=ui->a33->text();

    long int A11=Ax11.toInt(),
        A12=Ax12.toInt(),
        A13=Ax13.toInt(),
        A21=Ax21.toInt(),
        A22=Ax22.toInt(),
        A23=Ax23.toInt(),
        A31=Ax31.toInt(),
        A32=Ax32.toInt(),
        A33=Ax33.toInt();

    k=((A11*A22*A33)+(A12*A23*A31)+(A13*A21*A32))-((A13*A22*A31)+(A11*A23*A32)+(A12*A21*A33));
    k1=((A22*A33)-(A23*A32));
    k2=-1*((A12*A33)-(A32*A13));
    k3=((A12*A33)-(A13*A22));
    k4=-1*((A21*A33)-(A23*A31));
    k5=((A11*A33)-(A13*A31));
    k6=-1*((A11*A23)-(A21*A13));
    k7=((A21*A32)-(A22*A31));
    k8=-1*((A11*A32)-(A12*A31));
    k9=((A11*A22)-(A21*A12));

    t1=(k1/k);
    t2=(k2/k);
    t3=(k3/k);
    t4=(k4/k);
    t5=(k5/k);
    t6=(k6/k);
    t7=(k7/k);
    t8=(k8/k);
    t9=(k9/k);

    ui->a11_2->setText(QString::number(t1));
    ui->a12_2->setText(QString::number(t2));
    ui->a13_2->setText(QString::number(t3));
    ui->a21_2->setText(QString::number(t4));
    ui->a22_2->setText(QString::number(t5));
    ui->a23_2->setText(QString::number(t6));
    ui->a31_2->setText(QString::number(t7));
    ui->a32_2->setText(QString::number(t8));
    ui->a33_2->setText(QString::number(t9));

    if (k == 0) {ui->label->setText("no es posible debivo que el determiante es 0");}
    else if (k > 0) {ui->label->setText("esta es tu matriz inversa");}
    else if (k < 0) {ui->label->setText("esta es tu matriz inversa");}
}

