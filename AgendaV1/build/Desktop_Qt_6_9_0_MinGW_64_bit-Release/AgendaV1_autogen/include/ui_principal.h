/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novoContato;
    QPushButton *btn_pesquisarContato;

    void setupUi(QDialog *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName("Principal");
        Principal->resize(400, 300);
        widget = new QWidget(Principal);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 217, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_novoContato = new QPushButton(widget);
        btn_novoContato->setObjectName("btn_novoContato");

        horizontalLayout->addWidget(btn_novoContato);

        btn_pesquisarContato = new QPushButton(widget);
        btn_pesquisarContato->setObjectName("btn_pesquisarContato");

        horizontalLayout->addWidget(btn_pesquisarContato);


        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QDialog *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "Dialog", nullptr));
        btn_novoContato->setText(QCoreApplication::translate("Principal", "Adicionar Contato", nullptr));
        btn_pesquisarContato->setText(QCoreApplication::translate("Principal", "Pesquisar Contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
