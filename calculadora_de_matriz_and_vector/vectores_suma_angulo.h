#ifndef VECTORES_SUMA_ANGULO_H
#define VECTORES_SUMA_ANGULO_H

#include <QDialog>
#include <cal_de_v_angulo.h>

namespace Ui {
class vectores_suma_angulo;
}

class vectores_suma_angulo : public QDialog
{
    Q_OBJECT

public:
    explicit vectores_suma_angulo(QWidget *parent = nullptr);
    ~vectores_suma_angulo();

private slots:
    void on_producto_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::vectores_suma_angulo *ui;
};

#endif // VECTORES_SUMA_ANGULO_H
