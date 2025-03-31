#ifndef MUL_MATRIS_2X2_H
#define MUL_MATRIS_2X2_H

#include <QDialog>
#include <multiplicaciones_matris_3x3_2x2.h>

namespace Ui {
class mul_matris_2x2;
}

class mul_matris_2x2 : public QDialog
{
    Q_OBJECT

public:
    explicit mul_matris_2x2(QWidget *parent = nullptr);
    ~mul_matris_2x2();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::mul_matris_2x2 *ui;
};

#endif // MUL_MATRIS_2X2_H
