#ifndef CALAIX_H
#define CALAIX_H

#include <QWidget>

class calculadora;
namespace Ui {
class calaix;
}

class calaix : public QWidget
{
    Q_OBJECT

public:
    explicit calaix(QWidget *parent = 0);
    ~calaix();



public slots:
    void on_tanca_clicked();

private slots:
    void on_calculadora_clicked();

private:
    Ui::calaix *ui;
    calculadora *calculadoraa;
};

#endif // CALAIX_H
