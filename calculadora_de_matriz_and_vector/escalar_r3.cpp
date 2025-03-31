#include "escalar_r3.h"
#include "ui_escalar_r3.h"

escalar_r3::escalar_r3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escalar_r3)
{
    ui->setupUi(this);
}

escalar_r3::~escalar_r3()
{
    delete ui;
}

void escalar_r3::on_producto_clicked()
{
    short C11, C12, C13;
    QString A11=ui->a11->text(),
        A12=ui->a12->text(),
        A13=ui->a13->text(),
        ESC=ui->esc->text();


    long int A111=A11.toInt(),
        A121=A12.toInt(),
        A131=A13.toInt(),
        ESCC=ESC.toInt();

    C11 = (A111 * ESCC);
    C12 = (A121 * ESCC);
    C13 = (A131 * ESCC);

    ui->c11->setText(QString::number(C11));
    ui->c12->setText(QString::number(C12));
    ui->c13->setText(QString::number(C13));
}


void escalar_r3::on_pushButton_clicked()
{
    escalar_r2_r3 *ventana1 = new escalar_r2_r3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

