#include "suma_de_matrices_2x2.h"
#include "ui_suma_de_matrices_2x2.h"

suma_de_matrices_2x2::suma_de_matrices_2x2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suma_de_matrices_2x2)
{
    ui->setupUi(this);
}

suma_de_matrices_2x2::~suma_de_matrices_2x2()
{
    delete ui;
}

void suma_de_matrices_2x2::on_producto_clicked()
{
    short C11, C12, C21, C22;
    QString A11=ui->a11->text(),
            A12=ui->a12->text(),
            A21=ui->a21->text(),
            A22=ui->a22->text(),
            B11=ui->b11->text(),
            B12=ui->b12->text(),
            B21=ui->b21->text(),
            B22=ui->b22->text();

    long int A111=A11.toInt(),
             A121=A12.toInt(),
             A211=A21.toInt(),
             A221=A22.toInt(),
             B111=B11.toInt(),
             B121=B12.toInt(),
             B211=B21.toInt(),
             B221=B22.toInt();

    C11 = (A111 + B111);
    C12 = (A121 + B121);
    C21 = (A211 + B211);
    C22 = (A221 + B221);

    ui->c11->setText(QString::number(C11));
    ui->c12->setText(QString::number(C12));
    ui->c21->setText(QString::number(C21));
    ui->c22->setText(QString::number(C22));
}


void suma_de_matrices_2x2::on_pushButton_clicked()
{
    suma_de_matrices_2x2_3x3 *ventana1 = new suma_de_matrices_2x2_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

