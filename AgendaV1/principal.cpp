#include "principal.h"
#include "ui_principal.h"
#include "novocontato.h"
#include "pesquisacontatos.h"

Principal::Principal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    setWindowTitle("Principal");
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_btn_novoContato_clicked()
{
    novoContato novoCot;
    novoCot.exec();
}


void Principal::on_btn_pesquisarContato_clicked()
{
    pesquisaContatos pesquisaCont;
    pesquisaCont.exec();
}

