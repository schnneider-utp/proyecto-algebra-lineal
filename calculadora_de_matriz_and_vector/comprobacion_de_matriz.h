#ifndef COMPROBACION_DE_MATRIZ_H
#define COMPROBACION_DE_MATRIZ_H

#include <QDialog>
#include <vector_prat1.h>

namespace Ui {
class comprobacion_de_matriz;
}

class comprobacion_de_matriz : public QDialog
{
    Q_OBJECT

public:
    explicit comprobacion_de_matriz(QWidget *parent = nullptr);
    ~comprobacion_de_matriz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::comprobacion_de_matriz *ui;
};

#endif // COMPROBACION_DE_MATRIZ_H
