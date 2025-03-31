#ifndef INVERSAS_H
#define INVERSAS_H

#include <QDialog>

namespace Ui {
class inversas;
}

class inversas : public QDialog
{
    Q_OBJECT

public:
    explicit inversas(QWidget *parent = nullptr);
    ~inversas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::inversas *ui;
};

#endif // INVERSAS_H
