#ifndef NOVOCONTATO_H
#define NOVOCONTATO_H

#include <QDialog>
#include "QString"
#include "QSqlQuery"
namespace Ui {
class novoContato;
}

class novoContato : public QDialog
{
    Q_OBJECT

public:
    explicit novoContato(QWidget *parent = nullptr);
    ~novoContato();

private slots:
    void on_btnGravar_clicked();

private:
    Ui::novoContato *ui;
};

#endif // NOVOCONTATO_H
