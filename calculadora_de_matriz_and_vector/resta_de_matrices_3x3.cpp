#include "resta_de_matrices_3x3.h"
#include "ui_resta_de_matrices_3x3.h"

resta_de_matrices_3x3::resta_de_matrices_3x3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resta_de_matrices_3x3)
{
    ui->setupUi(this);
}

resta_de_matrices_3x3::~resta_de_matrices_3x3()
{
    delete ui;
}

void resta_de_matrices_3x3::on_producto_clicked()
{
    short C11, C12, C13, C21, C22, C23, C31, C32, C33;
    QString A11=ui->a11->text(),
        A12=ui->a12->text(),
        A13=ui->a13->text(),
        A21=ui->a21->text(),
        A22=ui->a22->text(),
        A23=ui->a23->text(),
        A31=ui->a31->text(),
        A32=ui->a32->text(),
        A33=ui->a33->text(),
        B11=ui->b11->text(),
        B12=ui->b12->text(),
        B13=ui->b13->text(),
        B21=ui->b21->text(),
        B22=ui->b22->text(),
        B23=ui->b23->text(),
        B31=ui->b31->text(),
        B32=ui->b32->text(),
        B33=ui->b33->text();


    long int A111=A11.toInt(),
        A121=A12.toInt(),
        A131=A13.toInt(),
        A211=A21.toInt(),
        A221=A22.toInt(),
        A231=A23.toInt(),
        A311=A31.toInt(),
        A321=A32.toInt(),
        A331=A33.toInt(),
        B111=B11.toInt(),
        B121=B12.toInt(),
        B131=B13.toInt(),
        B211=B21.toInt(),
        B221=B22.toInt(),
        B231=B23.toInt(),
        B311=B31.toInt(),
        B321=B32.toInt(),
        B331=B33.toInt();

    C11 = (A111 - B111);
    C12 = (A121 - B121);
    C13 = (A131 - B131);
    C21 = (A211 - B211);
    C22 = (A221 - B221);
    C23 = (A231 - B231);
    C31 = (A311 - B311);
    C32 = (A321 - B321);
    C33 = (A331 - B331);

    ui->c11->setText(QString::number(C11));
    ui->c12->setText(QString::number(C12));
    ui->c13->setText(QString::number(C13));
    ui->c21->setText(QString::number(C21));
    ui->c22->setText(QString::number(C22));
    ui->c23->setText(QString::number(C23));
    ui->c31->setText(QString::number(C31));
    ui->c32->setText(QString::number(C32));
    ui->c33->setText(QString::number(C33));
}


void resta_de_matrices_3x3::on_pushButton_clicked()
{
    resta_de_matrices_2x2_3x3 *ventana1 = new resta_de_matrices_2x2_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

