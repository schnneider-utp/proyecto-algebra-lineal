#include "multiplicaciones_matris_3x3_2x2.h"
#include "ui_multiplicaciones_matris_3x3_2x2.h"

multiplicaciones_matris_3x3_2x2::multiplicaciones_matris_3x3_2x2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::multiplicaciones_matris_3x3_2x2)
{
    ui->setupUi(this);
}

multiplicaciones_matris_3x3_2x2::~multiplicaciones_matris_3x3_2x2()
{
    delete ui;
}

void multiplicaciones_matris_3x3_2x2::on_pushButton_2_clicked()
{
    mul_matris_3x3 *ventana1 = new mul_matris_3x3(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

void multiplicaciones_matris_3x3_2x2::on_pushButton_3_clicked()
{
    mul_matris_2x2 *ventana1 = new mul_matris_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
    close();
}

