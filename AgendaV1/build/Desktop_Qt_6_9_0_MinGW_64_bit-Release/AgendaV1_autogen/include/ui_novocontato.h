/********************************************************************************
** Form generated from reading UI file 'novocontato.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVOCONTATO_H
#define UI_NOVOCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_novoContato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nomeEdit;
    QLineEdit *telefoneEdit;
    QLineEdit *emailEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnGravar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *novoContato)
    {
        if (novoContato->objectName().isEmpty())
            novoContato->setObjectName("novoContato");
        novoContato->resize(400, 174);
        widget = new QWidget(novoContato);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 321, 122));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        nomeEdit = new QLineEdit(widget);
        nomeEdit->setObjectName("nomeEdit");

        verticalLayout_2->addWidget(nomeEdit);

        telefoneEdit = new QLineEdit(widget);
        telefoneEdit->setObjectName("telefoneEdit");

        verticalLayout_2->addWidget(telefoneEdit);

        emailEdit = new QLineEdit(widget);
        emailEdit->setObjectName("emailEdit");

        verticalLayout_2->addWidget(emailEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnGravar = new QPushButton(widget);
        btnGravar->setObjectName("btnGravar");

        horizontalLayout_2->addWidget(btnGravar);

        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName("btnCancelar");

        horizontalLayout_2->addWidget(btnCancelar);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(novoContato);

        QMetaObject::connectSlotsByName(novoContato);
    } // setupUi

    void retranslateUi(QDialog *novoContato)
    {
        novoContato->setWindowTitle(QCoreApplication::translate("novoContato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("novoContato", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("novoContato", "Telefone", nullptr));
        label_3->setText(QCoreApplication::translate("novoContato", "Email", nullptr));
        btnGravar->setText(QCoreApplication::translate("novoContato", "Gravar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("novoContato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class novoContato: public Ui_novoContato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVOCONTATO_H
