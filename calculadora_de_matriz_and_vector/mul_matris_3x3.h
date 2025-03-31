#ifndef MUL_MATRIS_3X3_H
#define MUL_MATRIS_3X3_H

#include <QDialog>
#include <multiplicaciones_matris_3x3_2x2.h>

namespace Ui {
class mul_matris_3x3;
}

class mul_matris_3x3 : public QDialog
{
    Q_OBJECT

public:
    explicit mul_matris_3x3(QWidget *parent = nullptr);
    ~mul_matris_3x3();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::mul_matris_3x3 *ui;
};

#endif // MUL_MATRIS_3X3_H
