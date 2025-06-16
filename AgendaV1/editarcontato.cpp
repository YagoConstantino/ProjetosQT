#include "editarcontato.h"
#include "ui_editarcontato.h"
#include <QMessageBox>
#include <QSqlQuery>

editarContato::editarContato(QWidget *parent,int id_contato)
    : QDialog(parent)
    , ui(new Ui::editarContato)
{
    ui->setupUi(this);
    setWindowTitle("Editar Contato");
    ui->txtID->setText(QString::number(id_contato));

    QSqlQuery query;
    query.prepare("select * from contatos where id_contato = "+QString::number(id_contato));

    if(query.exec())
    {
        query.first();
        ui->txtNome->setText(query.value(1).toString());
        ui->txtTelefone->setText(query.value(2).toString());
        ui->txtEmail->setText((query.value(3).toString()));
    }
    else
    {
        qDebug()<<"Erro ao fazer a query de recuperar contatos";
    }
}

editarContato::~editarContato()
{
    delete ui;
}

void editarContato::on_btnGravar_clicked()
{
    QString novoNome = ui->txtNome->text();
    QString novoTelefone = ui->txtTelefone->text();
    QString novoEMail = ui->txtEmail->text();
    int id = ui->txtID->text().toInt();
    QSqlQuery query;
    query.prepare("UPDATE contatos SET nome_contato = ?, telefone_contato = ?, email_contato = ? WHERE id_contato = ?");
    query.addBindValue(novoNome);
    query.addBindValue(novoTelefone);
    query.addBindValue(novoEMail);
    query.addBindValue(id);

    if(query.exec())
    {
        QMessageBox::information(this,"","Sucesso na alteração da agenda");
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"","Erro");
    }
}

