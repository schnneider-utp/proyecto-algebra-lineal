#ifndef SUMA_DE_VECTORES_2X2_H
#define SUMA_DE_VECTORES_2X2_H

#include <QDialog>
#include <suma_de_vectores_r2_r3.h>

namespace Ui {
class suma_de_vectores_2x2;
}

class suma_de_vectores_2x2 : public QDialog
{
    Q_OBJECT

public:
    explicit suma_de_vectores_2x2(QWidget *parent = nullptr);
    ~suma_de_vectores_2x2();

private slots:
    void on_pushButton_clicked();

    void on_sumarnum_clicked();

private:
    Ui::suma_de_vectores_2x2 *ui;
};

#endif // SUMA_DE_VECTORES_2X2_H
