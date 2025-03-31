#ifndef PRODUCTO_ENTRE_VECTORES_H
#define PRODUCTO_ENTRE_VECTORES_H

#include <QDialog>
#include <producto_vectorial.h>
#include <producto_entre_vecores_r2.h>
#include <producto_entre_vecores_r3.h>

namespace Ui {
class producto_entre_vectores;
}

class producto_entre_vectores : public QDialog
{
    Q_OBJECT

public:
    explicit producto_entre_vectores(QWidget *parent = nullptr);
    ~producto_entre_vectores();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::producto_entre_vectores *ui;
};

#endif // PRODUCTO_ENTRE_VECTORES_H
