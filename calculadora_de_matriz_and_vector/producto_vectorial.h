#ifndef PRODUCTO_VECTORIAL_H
#define PRODUCTO_VECTORIAL_H

#include <QDialog>
#include <escalar_r2_r3.h>
#include <producto_entre_vectores.h>

namespace Ui {
class producto_vectorial;
}

class producto_vectorial : public QDialog
{
    Q_OBJECT

public:
    explicit producto_vectorial(QWidget *parent = nullptr);
    ~producto_vectorial();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::producto_vectorial *ui;
};

#endif // PRODUCTO_VECTORIAL_H
