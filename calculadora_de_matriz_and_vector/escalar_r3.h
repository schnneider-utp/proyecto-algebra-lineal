#ifndef ESCALAR_R3_H
#define ESCALAR_R3_H

#include <QDialog>
#include <escalar_r2_r3.h>

namespace Ui {
class escalar_r3;
}

class escalar_r3 : public QDialog
{
    Q_OBJECT

public:
    explicit escalar_r3(QWidget *parent = nullptr);
    ~escalar_r3();

private slots:
    void on_producto_clicked();

    void on_pushButton_clicked();

private:
    Ui::escalar_r3 *ui;
};

#endif // ESCALAR_R3_H
