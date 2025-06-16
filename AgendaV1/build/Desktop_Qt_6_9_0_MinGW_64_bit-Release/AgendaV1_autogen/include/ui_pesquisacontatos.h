/********************************************************************************
** Form generated from reading UI file 'pesquisacontatos.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISACONTATOS_H
#define UI_PESQUISACONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pesquisaContatos
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtPesquisaNome;
    QPushButton *btnPesquisar;
    QTableWidget *twContatos;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnExcluir;
    QPushButton *btnEditar;

    void setupUi(QDialog *pesquisaContatos)
    {
        if (pesquisaContatos->objectName().isEmpty())
            pesquisaContatos->setObjectName("pesquisaContatos");
        pesquisaContatos->resize(669, 433);
        widget = new QWidget(pesquisaContatos);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(21, 31, 532, 321));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txtPesquisaNome = new QLineEdit(widget);
        txtPesquisaNome->setObjectName("txtPesquisaNome");
        txtPesquisaNome->setMinimumSize(QSize(350, 0));

        horizontalLayout->addWidget(txtPesquisaNome);

        btnPesquisar = new QPushButton(widget);
        btnPesquisar->setObjectName("btnPesquisar");

        horizontalLayout->addWidget(btnPesquisar);


        verticalLayout->addLayout(horizontalLayout);

        twContatos = new QTableWidget(widget);
        twContatos->setObjectName("twContatos");

        verticalLayout->addWidget(twContatos);

        widget1 = new QWidget(pesquisaContatos);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(22, 365, 168, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnExcluir = new QPushButton(widget1);
        btnExcluir->setObjectName("btnExcluir");

        horizontalLayout_2->addWidget(btnExcluir);

        btnEditar = new QPushButton(widget1);
        btnEditar->setObjectName("btnEditar");

        horizontalLayout_2->addWidget(btnEditar);


        retranslateUi(pesquisaContatos);

        QMetaObject::connectSlotsByName(pesquisaContatos);
    } // setupUi

    void retranslateUi(QDialog *pesquisaContatos)
    {
        pesquisaContatos->setWindowTitle(QCoreApplication::translate("pesquisaContatos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pesquisaContatos", "Pesquisar Nome", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("pesquisaContatos", "Pesquisar", nullptr));
        btnExcluir->setText(QCoreApplication::translate("pesquisaContatos", "Excluir", nullptr));
        btnEditar->setText(QCoreApplication::translate("pesquisaContatos", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pesquisaContatos: public Ui_pesquisaContatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISACONTATOS_H
