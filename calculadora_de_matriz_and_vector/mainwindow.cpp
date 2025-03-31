#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionpart_1_triggered()
{
    vector_prat1 *ventana1 = new vector_prat1(this);
    ventana1->setModal(true);
    ventana1->show();
    /*ventana1->setVisible(true);
    ventana1->hide();
    ventana1->setVisible(false);*/
}


void MainWindow::on_pushButton_clicked()
{
    vector_prat1 *ventana1 = new vector_prat1(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    sumas *ventana1 = new sumas(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_6_clicked()
{
    sumas_de_vectores *ventana1 = new sumas_de_vectores(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    multiplicaciones_matris_3x3_2x2 *ventana1 = new multiplicaciones_matris_3x3_2x2(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_8_clicked()
{
    producto_vectorial *ventana1 = new producto_vectorial(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_7_clicked()
{
    cal_de_v_angulo *ventana1 = new cal_de_v_angulo(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    inversas *ventana1 = new inversas(this);
    ventana1->setModal(true);
    ventana1->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    matris_a_vector *ventana1 = new matris_a_vector(this);
    ventana1->setModal(true);
    ventana1->show();
}

