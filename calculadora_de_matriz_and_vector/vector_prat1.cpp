#include "vector_prat1.h"
#include "ui_vector_prat1.h"

vector_prat1::vector_prat1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vector_prat1)
{
    ui->setupUi(this);
}

vector_prat1::~vector_prat1()
{
    delete ui;
}

void vector_prat1::on_pushButton_clicked()
{
    float k, k1, k2, k3, u, u2, u3;

    QString Ax11=ui->a11->text(),
            Ax12=ui->a12->text(),
            Ax13=ui->a13->text(),
            Ax21=ui->a21->text(),
            Ax22=ui->a22->text(),
            Ax23=ui->a23->text(),
            Ax31=ui->a31->text(),
            Ax32=ui->a32->text(),
            Ax33=ui->a33->text(),
            Tx1=ui->t1->text(),
            Tx2=ui->t2->text(),
            Tx3=ui->t3->text();

    long int A11=Ax11.toInt(),
             A12=Ax12.toInt(),
             A13=Ax13.toInt(),
             A21=Ax21.toInt(),
             A22=Ax22.toInt(),
             A23=Ax23.toInt(),
             A31=Ax31.toInt(),
             A32=Ax32.toInt(),
             A33=Ax33.toInt(),
             T1=Tx1.toInt(),
             T2=Tx2.toInt(),
             T3=Tx3.toInt();

    k=((A11*A22*A33)+(A12*A23*A31)+(A13*A21*A32))-((A13*A22*A31)+(A11*A23*A32)+(A12*A21*A33));
    k1=((T1*A22*A33)+(A12*A23*T3)+(A13*T2*A32))-((A13*A22*T3)+(T1*A23*A32)+(A12*T2*A33));
    k2=((A11*T2*A33)+(T1*A23*A31)+(A13*A21*T3))-((A13*T2*A31)+(A11*A23*T3)+(T1*A21*A33));
    k3=((A11*A22*T3)+(A12*T2*A31)+(T1*A21*A32))-((T1*A22*A31)+(A11*T2*A32)+(A12*A21*T3));

    u=k1/k;
    u2=k2/k;
    u3=k3/k;

    ui->deltas->setText(QString::number(k));
    ui->deltax->setText(QString::number(k1));
    ui->deltay->setText(QString::number(k2));
    ui->deltaz->setText(QString::number(k3));
    ui->dx->setText(QString::number(u));
    ui->dy->setText(QString::number(u2));
    ui->dz->setText(QString::number(u3));

    if (k == 0) {ui->label->setText("no es posible debivo que el determiante es 0");}
    else if (k > 0) {ui->label->setText("mira esta es tu solucion");}
    else if (k < 0) {ui->label->setText("mira esta es tu solucion");}

}


void vector_prat1::on_pushButton_2_clicked()
{
    comprobacion_de_matriz *ventana1 = new comprobacion_de_matriz(this);
    ventana1->setModal(true);
    ventana1->show();
}

