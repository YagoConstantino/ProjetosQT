#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , localArquivo("")
{
    ui->setupUi(this);
    this->setWindowTitle("Bloco de Notas Y");
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNovo_triggered()
{
    localArquivo = "";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}


void MainWindow::on_actionAbrir_triggered()
{
    QString Filtro = "Todos Arquivos (*.*);; Arquivos de texto (*.txt)";

    QString nomeArquivo = QFileDialog::getOpenFileName(this,"Acessar Arquivo","C://",Filtro);

    QFile Arquivo(nomeArquivo);
    localArquivo = nomeArquivo;

    if(!Arquivo.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,"Erro","Erro ao Abrir o Arquivo");
        return;
    }

    QTextStream buffer(&Arquivo);

    ui->textEdit->setText(buffer.readAll());
    Arquivo.flush();
    Arquivo.close();

}


void MainWindow::on_actionSalvar_triggered()
{
    QFile Arquivo(localArquivo);

    if(!Arquivo.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Erro","Erro ao Salvar Arquivo");
        return;
    }

    QTextStream buffer(&Arquivo);

    buffer << ui->textEdit->toPlainText();

    Arquivo.flush();
    Arquivo.close();
}


void MainWindow::on_actionSalvar_Como_triggered()
{
    QString Filtro = "Todos Arquivos (*.*);; Arquivos de texto (*.txt)";
    QString nomeArquivo = QFileDialog::getSaveFileName(this,"Salvar Como","C://",Filtro);

    localArquivo = nomeArquivo;

    QFile Arquivo(nomeArquivo);

    if(!Arquivo.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"Erro","Erro ao Salvar Arquivo");
        return;
    }

    QTextStream buffer(&Arquivo);

    buffer << ui->textEdit->toPlainText();

    Arquivo.flush();
    Arquivo.close();

}


void MainWindow::on_actionFechar_triggered()
{
    close();
}


void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionRecortar_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionColar_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionDesfazer_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRefazer_triggered()
{
    ui->textEdit->redo();
}

