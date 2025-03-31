#include "mul_matris_3x3.h"
#include "ui_mul_matris_3x3.h"

mul_matris_3x3::mul_matris_3x3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mul_matris_3x3)
{
    ui->setupUi(this);
}

mul_matris_3x3::~mul_matris_3x3()
{
    delete ui;
}

void mul_matris_3x3::on_producto_clicked()
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

    C11 = (A111 * B111) + (A121 * B211) + (A131 * B311);
    C12 = (A111 * B121) + (A121 * B221) + (A131 * B321);
    C13 = (A111 * B131) + (A121 * B231) + (A131 * B331);
    C21 = (A211 * B111) + (A221 * B211) + (A231 * B311);
    C22 = (A211 * B121) + (A221 * B221) + (A231 * B321);
    C23 = (A211 * B131) + (A221 * B231) + (A231 * B331);
    C31 = (A311 * B111) + (A321 * B211) + (A331 * B311);
    C32 = (A311 * B121) + (A321 * B221) + (A331 * B321);
    C33 = (A311 * B131) + (A321 * B231) + (A331 * B331);

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


void mul_matris_3x3::on_pushButton_clicked()
{
    multiplicaciones_matris_3x3_2x2 *ventana1 = new multiplicaciones_matris_3x3_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

