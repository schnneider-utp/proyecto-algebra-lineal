#ifndef PRODUCTO_ENTRE_VECORES_R3_H
#define PRODUCTO_ENTRE_VECORES_R3_H

#include <QDialog>
#include <producto_entre_vectores.h>

namespace Ui {
class producto_entre_vecores_r3;
}

class producto_entre_vecores_r3 : public QDialog
{
    Q_OBJECT

public:
    explicit producto_entre_vecores_r3(QWidget *parent = nullptr);
    ~producto_entre_vecores_r3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::producto_entre_vecores_r3 *ui;
};

#endif // PRODUCTO_ENTRE_VECORES_R3_H
