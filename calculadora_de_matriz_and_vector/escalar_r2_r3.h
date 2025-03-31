#ifndef ESCALAR_R2_R3_H
#define ESCALAR_R2_R3_H

#include <QDialog>
#include <escalar_r2.h>
#include <escalar_r3.h>
#include <producto_vectorial.h>

namespace Ui {
class escalar_r2_r3;
}

class escalar_r2_r3 : public QDialog
{
    Q_OBJECT

public:
    explicit escalar_r2_r3(QWidget *parent = nullptr);
    ~escalar_r2_r3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::escalar_r2_r3 *ui;
};

#endif // ESCALAR_R2_R3_H
