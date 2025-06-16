#include "pesquisacontatos.h"
#include "ui_pesquisacontatos.h"
#include "editarcontato.h"
#include <QMessageBox>
#include <QtSql>
pesquisaContatos::pesquisaContatos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pesquisaContatos)
{
    ui->setupUi(this);
    setWindowTitle("Pesquisa");

    QSqlQuery query;
    query.prepare("select * from contatos");

    if(query.exec())
    {
        int cont = 0;
        ui->twContatos->setColumnCount(4);

        while(query.next())
        {
            ui->twContatos->insertRow(cont);
            ui->twContatos->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->twContatos->setItem(cont,1,new QTableWidgetItem(query.value(1).toString()));
            ui->twContatos->setItem(cont,2,new QTableWidgetItem(query.value(2).toString()));
            ui->twContatos->setItem(cont,3,new QTableWidgetItem(query.value(3).toString()));
            ui->twContatos->setRowHeight(cont,20);
            cont++;
        }
        ui->twContatos->setColumnWidth(0,30);
        ui->twContatos->setColumnWidth(1,150);
        ui->twContatos->setColumnWidth(3,200);

        QStringList cabecalhos = {"ID","Nome","Telefone","Email"};

        ui->twContatos->setHorizontalHeaderLabels(cabecalhos);
        ui->twContatos->setEditTriggers(QAbstractItemView::NoEditTriggers);

        ui->twContatos->setSelectionBehavior(QAbstractItemView::SelectRows);

        ui->twContatos->verticalHeader()->setVisible(false);

        ui->twContatos->setStyleSheet("QTableView {selection-background-color:blue}");

    }
    else
    {
        QMessageBox::warning(this,"Erro","Erro ao pesquisar na janela de Contatos");
    }
}

pesquisaContatos::~pesquisaContatos()
{
    delete ui;
}

void pesquisaContatos::on_btnExcluir_clicked()
{
    int linha = ui->twContatos->currentRow();
    int id = ui->twContatos->item(linha,0)->text().toInt();

    QSqlQuery query;
    query.prepare("delete from contatos where id_contato = "+QString::number(id));
    if(query.exec())
    {
        QMessageBox::information(this,"Sucesso","Contato excluido com sucessro");
        ui->twContatos->removeRow(linha);
    }
    else
    {
        QMessageBox::warning(this,"Erro","Erro ao excluir contato");
    }
}


void pesquisaContatos::on_btnEditar_clicked()
{
    int linha = ui->twContatos->currentRow();
    if (linha < 0) {
        // Nenhuma linha selecionada: pode exibir uma mensagem ou simplesmente retornar
        QMessageBox::warning(this, "Editar Contato", "Selecione um contato antes de editar.");
        return;
    }

    QTableWidgetItem* itemID = ui->twContatos->item(linha, 0);
    if (!itemID) {
        // Por segurança, cheque também se o ponteiro não é nulo
        QMessageBox::critical(this, "Erro Interno", "Não foi possível obter o ID do contato.");
        return;
    }

    int id = itemID->text().toInt();
    editarContato editCont(this, id);
    editCont.exec();

}

