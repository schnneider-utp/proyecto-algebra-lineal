#ifndef SUMA_DE_MATRICES_2X2_H
#define SUMA_DE_MATRICES_2X2_H

#include <QDialog>
#include <suma_de_matrices_2x2_3x3.h>

namespace Ui {
class suma_de_matrices_2x2;
}

class suma_de_matrices_2x2 : public QDialog
{
    Q_OBJECT

public:
    explicit suma_de_matrices_2x2(QWidget *parent = nullptr);
    ~suma_de_matrices_2x2();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::suma_de_matrices_2x2 *ui;
};

#endif // SUMA_DE_MATRICES_2X2_H
