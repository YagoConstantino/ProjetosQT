#include "novocontato.h"
#include "ui_novocontato.h"
#include <QMessageBox>

novoContato::novoContato(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::novoContato)
{
    ui->setupUi(this);
    setWindowTitle("Novo Contato");
}

novoContato::~novoContato()
{
    delete ui;
}

void novoContato::on_btnGravar_clicked()
{
    QString nome = ui->nomeEdit->text();
    QString telefone = ui->telefoneEdit->text();
    QString email = ui->emailEdit->text();

    QSqlQuery query;
    query.prepare("insert into contatos (nome_contato,telefone_contato,email_contato) "
                  "values ('"+nome+"','"+telefone+"','"+email+"') ");

    if(query.exec())
    {
        QMessageBox::information(this,"Sucesso","Contato salvo com sucesso");
        ui->nomeEdit->clear();
        ui->telefoneEdit->clear();
        ui->emailEdit->clear();
        ui->nomeEdit->setFocus();
    }
    else
    {
        qDebug()<<"Erro ao inserir Registro";
    }

}

