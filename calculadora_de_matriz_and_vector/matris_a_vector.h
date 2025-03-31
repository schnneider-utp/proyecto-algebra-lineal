#ifndef MATRIS_A_VECTOR_H
#define MATRIS_A_VECTOR_H

#include <QDialog>

namespace Ui {
class matris_a_vector;
}

class matris_a_vector : public QDialog
{
    Q_OBJECT

public:
    explicit matris_a_vector(QWidget *parent = nullptr);
    ~matris_a_vector();

private slots:
    void on_producto_clicked();

private:
    Ui::matris_a_vector *ui;
};

#endif // MATRIS_A_VECTOR_H
