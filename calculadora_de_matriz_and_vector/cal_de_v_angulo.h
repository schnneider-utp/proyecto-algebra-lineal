#ifndef CAL_DE_V_ANGULO_H
#define CAL_DE_V_ANGULO_H

#include <QDialog>
#include <vectores_suma_angulo.h>
#include <dirrecion_angulo.h>
#include <angulo_entre_vectores.h>

namespace Ui {
class cal_de_v_angulo;
}

class cal_de_v_angulo : public QDialog
{
    Q_OBJECT

public:
    explicit cal_de_v_angulo(QWidget *parent = nullptr);
    ~cal_de_v_angulo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::cal_de_v_angulo *ui;
};

#endif // CAL_DE_V_ANGULO_H
