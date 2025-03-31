#ifndef RESTA_DE_VECTORES_R2_H
#define RESTA_DE_VECTORES_R2_H

#include <QDialog>
#include <resta_de_vectores_r2_r3.h>

namespace Ui {
class resta_de_vectores_r2;
}

class resta_de_vectores_r2 : public QDialog
{
    Q_OBJECT

public:
    explicit resta_de_vectores_r2(QWidget *parent = nullptr);
    ~resta_de_vectores_r2();

private slots:
    void on_sumarnum_clicked();

    void on_pushButton_clicked();

private:
    Ui::resta_de_vectores_r2 *ui;
};

#endif // RESTA_DE_VECTORES_R2_H
