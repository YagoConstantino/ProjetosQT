#ifndef EDITARCONTATO_H
#define EDITARCONTATO_H

#include <QDialog>

namespace Ui {
class editarContato;
}

class editarContato : public QDialog
{
    Q_OBJECT

public:
    explicit editarContato(QWidget *parent = nullptr,int id_contato = 0);

    ~editarContato();

private slots:
    void on_btnGravar_clicked();

private:
    Ui::editarContato *ui;
};

#endif // EDITARCONTATO_H
