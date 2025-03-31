#ifndef SUMAS_H
#define SUMAS_H

#include <QDialog>
#include <suma_de_matrices_2x2_3x3.h>
#include <resta_de_matrices_2x2_3x3.h>

namespace Ui {
class sumas;
}

class sumas : public QDialog
{
    Q_OBJECT

public:
    explicit sumas(QWidget *parent = nullptr);
    ~sumas();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sumas *ui;
};

#endif // SUMAS_H
