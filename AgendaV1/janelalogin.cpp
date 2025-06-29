#include "janelalogin.h"
#include "./ui_janelalogin.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QCoreApplication>
#include <QDir>

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
    ,bancoDeDados()
{
    ui->setupUi(this);

    bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    // caminho absoluto ao lado do .exe
    QString exePath = QCoreApplication::applicationDirPath();
    QString dbPath  = QDir(exePath).filePath("db_Agenda.db");
    bancoDeDados.setDatabaseName(dbPath);

    if (!bancoDeDados.open()) {
        qDebug() << "Erro ao abrir banco:" << bancoDeDados.lastError().text();
    } else {
        qDebug() << "Banco aberto em:" << dbPath;
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

void JanelaLogin::on_loginButton_clicked()
{
    QString usr = ui->usernameText->text();
    QString pwd = ui->senhaText->text();

    QSqlQuery query;
    // 2 '?' → depois vamos bindValue(0, …) e bindValue(1, …)
    if (!query.prepare("SELECT COUNT(*) FROM colaboradores "
                       "WHERE username = ? AND senha = ?")) {
        qDebug() << "Erro no prepare:" << query.lastError().text();
        return;
    }

    // liga usr ao primeiro '?' e pwd ao segundo
    query.bindValue(0, usr);
    query.bindValue(1, pwd);

    if (!query.exec()) {
        qDebug() << "Erro na exec():" << query.lastError().text();
        return;
    }

    if (query.next() && query.value(0).toInt() > 0) {
        this->close();
        Principal princ;
        princ.setModal(true);
        princ.exec();
    } else {
        qDebug() << "Nenhum usuario encontrado";
        ui->usernameText->clear();
        ui->senhaText   ->clear();
        ui->usernameText->setFocus();
    }
}
