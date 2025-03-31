#include "escalar_r2.h"
#include "ui_escalar_r2.h"

escalar_r2::escalar_r2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escalar_r2)
{
    ui->setupUi(this);
}

escalar_r2::~escalar_r2()
{
    delete ui;
}

void escalar_r2::on_producto_clicked()
{
    short C11, C12;
    QString A11=ui->a11->text(),
        A12=ui->a12->text(),
        ESC=ui->esc->text();


    long int A111=A11.toInt(),
        A121=A12.toInt(),
        ESCC=ESC.toInt();

    C11 = (A111 * ESCC);
    C12 = (A121 * ESCC);

    ui->c11->setText(QString::number(C11));
    ui->c12->setText(QString::number(C12));
}


void escalar_r2::on_pushButton_clicked()
{
    escalar_r2_r3 *ventana1 = new escalar_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}


