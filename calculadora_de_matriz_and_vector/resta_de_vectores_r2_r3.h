#ifndef RESTA_DE_VECTORES_R2_R3_H
#define RESTA_DE_VECTORES_R2_R3_H

#include <QDialog>
#include <resta_de_vectores_r2.h>
#include <resta_de_vectores_r3.h>
#include <sumas_de_vectores.h>

namespace Ui {
class resta_de_vectores_r2_r3;
}

class resta_de_vectores_r2_r3 : public QDialog
{
    Q_OBJECT

public:
    explicit resta_de_vectores_r2_r3(QWidget *parent = nullptr);
    ~resta_de_vectores_r2_r3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::resta_de_vectores_r2_r3 *ui;
};

#endif // RESTA_DE_VECTORES_R2_R3_H
