#ifndef DIRRECION_ANGULO_H
#define DIRRECION_ANGULO_H

#include <QDialog>
#include <cal_de_v_angulo.h>

namespace Ui {
class dirrecion_angulo;
}

class dirrecion_angulo : public QDialog
{
    Q_OBJECT

public:
    explicit dirrecion_angulo(QWidget *parent = nullptr);
    ~dirrecion_angulo();

private slots:
    void on_producto_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::dirrecion_angulo *ui;
};

#endif // DIRRECION_ANGULO_H
