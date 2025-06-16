/********************************************************************************
** Form generated from reading UI file 'editarcontato.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARCONTATO_H
#define UI_EDITARCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editarContato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *txtID;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *txtNome;
    QLineEdit *txtTelefone;
    QLineEdit *txtEmail;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnGravar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *editarContato)
    {
        if (editarContato->objectName().isEmpty())
            editarContato->setObjectName("editarContato");
        editarContato->resize(400, 300);
        widget = new QWidget(editarContato);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 351, 211));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        txtID = new QLabel(widget);
        txtID->setObjectName("txtID");

        horizontalLayout_2->addWidget(txtID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txtNome = new QLineEdit(widget);
        txtNome->setObjectName("txtNome");

        verticalLayout->addWidget(txtNome);

        txtTelefone = new QLineEdit(widget);
        txtTelefone->setObjectName("txtTelefone");

        verticalLayout->addWidget(txtTelefone);

        txtEmail = new QLineEdit(widget);
        txtEmail->setObjectName("txtEmail");

        verticalLayout->addWidget(txtEmail);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnGravar = new QPushButton(widget);
        btnGravar->setObjectName("btnGravar");

        horizontalLayout->addWidget(btnGravar);

        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName("btnCancelar");

        horizontalLayout->addWidget(btnCancelar);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(editarContato);

        QMetaObject::connectSlotsByName(editarContato);
    } // setupUi

    void retranslateUi(QDialog *editarContato)
    {
        editarContato->setWindowTitle(QCoreApplication::translate("editarContato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editarContato", "ID", nullptr));
        txtID->setText(QCoreApplication::translate("editarContato", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("editarContato", "Nome", nullptr));
        label_4->setText(QCoreApplication::translate("editarContato", "Telefone", nullptr));
        label_5->setText(QCoreApplication::translate("editarContato", "Email", nullptr));
        btnGravar->setText(QCoreApplication::translate("editarContato", "Gravar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("editarContato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editarContato: public Ui_editarContato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARCONTATO_H
