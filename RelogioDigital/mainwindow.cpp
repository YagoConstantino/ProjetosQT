#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,tempo()
{
    ui->setupUi(this);
    tempo = new QTimer(this);
    setWindowTitle("Relogio Digital");

    connect(tempo,SIGNAL(timeout()),this,SLOT(atualizaRelogio()));
    atualizaRelogio();

    tempo->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::atualizaRelogio()
{
    QTime tempoAtual = QTime::currentTime();
    QString tempo = tempoAtual.toString("hh:mm:ss");
    ui->label->setText(tempo);
}
