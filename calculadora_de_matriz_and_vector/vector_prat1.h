#ifndef VECTOR_PRAT1_H
#define VECTOR_PRAT1_H

#include <QDialog>
#include <comprobacion_de_matriz.h>

namespace Ui {
class vector_prat1;
}

class vector_prat1 : public QDialog
{
    Q_OBJECT

public:
    explicit vector_prat1(QWidget *parent = nullptr);
    ~vector_prat1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::vector_prat1 *ui;
};

#endif // VECTOR_PRAT1_H
