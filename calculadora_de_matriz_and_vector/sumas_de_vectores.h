#ifndef SUMAS_DE_VECTORES_H
#define SUMAS_DE_VECTORES_H

#include <QDialog>
#include <suma_de_vectores_r2_r3.h>
#include <resta_de_vectores_r2_r3.h>

namespace Ui {
class sumas_de_vectores;
}

class sumas_de_vectores : public QDialog
{
    Q_OBJECT

public:
    explicit sumas_de_vectores(QWidget *parent = nullptr);
    ~sumas_de_vectores();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sumas_de_vectores *ui;
};

#endif // SUMAS_DE_VECTORES_H
