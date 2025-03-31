#ifndef RESTA_DE_MATRICES_2X2_H
#define RESTA_DE_MATRICES_2X2_H

#include <QDialog>
#include <resta_de_matrices_2x2_3x3.h>

namespace Ui {
class resta_de_matrices_2x2;
}

class resta_de_matrices_2x2 : public QDialog
{
    Q_OBJECT

public:
    explicit resta_de_matrices_2x2(QWidget *parent = nullptr);
    ~resta_de_matrices_2x2();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::resta_de_matrices_2x2 *ui;
};

#endif // RESTA_DE_MATRICES_2X2_H
