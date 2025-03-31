#ifndef ESCALAR_R2_H
#define ESCALAR_R2_H

#include <QDialog>
#include <escalar_r2_r3.h>

namespace Ui {
class escalar_r2;
}

class escalar_r2 : public QDialog
{
    Q_OBJECT

public:
    explicit escalar_r2(QWidget *parent = nullptr);
    ~escalar_r2();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::escalar_r2 *ui;
};

#endif // ESCALAR_R2_H
