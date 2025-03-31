#ifndef RESTA_DE_MATRICES_3X3_H
#define RESTA_DE_MATRICES_3X3_H

#include <QDialog>
#include <resta_de_matrices_2x2_3x3.h>

namespace Ui {
class resta_de_matrices_3x3;
}

class resta_de_matrices_3x3 : public QDialog
{
    Q_OBJECT

public:
    explicit resta_de_matrices_3x3(QWidget *parent = nullptr);
    ~resta_de_matrices_3x3();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::resta_de_matrices_3x3 *ui;
};

#endif // RESTA_DE_MATRICES_3X3_H
