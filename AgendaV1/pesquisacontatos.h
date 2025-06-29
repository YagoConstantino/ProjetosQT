#ifndef PESQUISACONTATOS_H
#define PESQUISACONTATOS_H

#include <QDialog>

namespace Ui {
class pesquisaContatos;
}

class pesquisaContatos : public QDialog
{
    Q_OBJECT

public:
    explicit pesquisaContatos(QWidget *parent = nullptr);
    ~pesquisaContatos();

private slots:
    void on_btnExcluir_clicked();

    void on_btnEditar_clicked();

private:
    Ui::pesquisaContatos *ui;
};

#endif // PESQUISACONTATOS_H
