#ifndef ANGULO_ENTRE_VECTORES_H
#define ANGULO_ENTRE_VECTORES_H

#include <QDialog>
#include <cal_de_v_angulo.h>

namespace Ui {
class angulo_entre_vectores;
}

class angulo_entre_vectores : public QDialog
{
    Q_OBJECT

public:
    explicit angulo_entre_vectores(QWidget *parent = nullptr);
    ~angulo_entre_vectores();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::angulo_entre_vectores *ui;
};

#endif // ANGULO_ENTRE_VECTORES_H
