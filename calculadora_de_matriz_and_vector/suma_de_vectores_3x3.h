#ifndef SUMA_DE_VECTORES_3X3_H
#define SUMA_DE_VECTORES_3X3_H

#include <QDialog>
#include <suma_de_vectores_r2_r3.h>

namespace Ui {
class suma_de_vectores_3x3;
}

class suma_de_vectores_3x3 : public QDialog
{
    Q_OBJECT

public:
    explicit suma_de_vectores_3x3(QWidget *parent = nullptr);
    ~suma_de_vectores_3x3();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::suma_de_vectores_3x3 *ui;
};

#endif // SUMA_DE_VECTORES_3X3_H
