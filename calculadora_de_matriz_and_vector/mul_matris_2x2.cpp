#include "mul_matris_2x2.h"
#include "ui_mul_matris_2x2.h"

mul_matris_2x2::mul_matris_2x2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mul_matris_2x2)
{
    ui->setupUi(this);
}

mul_matris_2x2::~mul_matris_2x2()
{
    delete ui;
}

void mul_matris_2x2::on_producto_clicked()
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

    C11 = (A111 * B111) + (A121 * B211);
    C12 = (A111 * B121) + (A121 * B221);
    C21 = (A211 * B111) + (A221 * B211);
    C22 = (A211 * B121) + (A221 * B221);

    ui->c11->setText(QString::number(C11));
    ui->c12->setText(QString::number(C12));
    ui->c21->setText(QString::number(C21));
    ui->c22->setText(QString::number(C22));

}


void mul_matris_2x2::on_pushButton_clicked()
{
    multiplicaciones_matris_3x3_2x2 *ventana1 = new multiplicaciones_matris_3x3_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

