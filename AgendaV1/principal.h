#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>
#include "novocontato.h"
namespace Ui {
class Principal;
}

class Principal : public QDialog
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_btn_novoContato_clicked();

    void on_btn_pesquisarContato_clicked();

private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
