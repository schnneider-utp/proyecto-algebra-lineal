#ifndef SUMA_DE_MATRICES_3X3_H
#define SUMA_DE_MATRICES_3X3_H

#include <QDialog>
#include <suma_de_matrices_2x2_3x3.h>

namespace Ui {
class suma_de_matrices_3x3;
}

class suma_de_matrices_3x3 : public QDialog
{
    Q_OBJECT

public:
    explicit suma_de_matrices_3x3(QWidget *parent = nullptr);
    ~suma_de_matrices_3x3();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::suma_de_matrices_3x3 *ui;
};

#endif // SUMA_DE_MATRICES_3X3_H
