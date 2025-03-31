#ifndef MULTIPLICACIONES_MATRIS_3X3_2X2_H
#define MULTIPLICACIONES_MATRIS_3X3_2X2_H

#include <QDialog>
#include <mul_matris_3x3.h>
#include <mul_matris_2x2.h>

namespace Ui {
class multiplicaciones_matris_3x3_2x2;
}

class multiplicaciones_matris_3x3_2x2 : public QDialog
{
    Q_OBJECT

public:
    explicit multiplicaciones_matris_3x3_2x2(QWidget *parent = nullptr);
    ~multiplicaciones_matris_3x3_2x2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::multiplicaciones_matris_3x3_2x2 *ui;
};

#endif // MULTIPLICACIONES_MATRIS_3X3_2X2_H
