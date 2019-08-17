/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout_8;
    QFormLayout *formLayout_7;
    QLabel *label;
    QLineEdit *Nservidor;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *Puerto;
    QFrame *line;
    QFormLayout *formLayout_6;
    QFormLayout *formLayout_5;
    QLabel *label_6;
    QFormLayout *formLayout_4;
    QPushButton *addArbol;
    QPushButton *crearArbol;
    QPushButton *EliminarArbol;
    QPushButton *print;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QFormLayout *formLayout_2;
    QPushButton *addFirst;
    QPushButton *EditPosition;
    QPushButton *DeleteFirst;
    QPushButton *BuscarPosition;
    QPushButton *addDato;
    QPushButton *crearLista;
    QPushButton *printLista;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpinBox *DatoN;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *EstructuraD;
    QLabel *label_3;
    QSpinBox *Posicion;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Conectar;
    QPushButton *Quitar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(696, 371);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setSpacing(6);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label);

        Nservidor = new QLineEdit(Widget);
        Nservidor->setObjectName(QString::fromUtf8("Nservidor"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, Nservidor);


        formLayout_8->setLayout(0, QFormLayout::LabelRole, formLayout_7);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Puerto = new QSpinBox(Widget);
        Puerto->setObjectName(QString::fromUtf8("Puerto"));
        Puerto->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, Puerto);


        formLayout_8->setLayout(0, QFormLayout::FieldRole, formLayout);


        gridLayout_3->addLayout(formLayout_8, 0, 0, 1, 1);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 0, 1, 3, 1);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_6);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        addArbol = new QPushButton(Widget);
        addArbol->setObjectName(QString::fromUtf8("addArbol"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, addArbol);

        crearArbol = new QPushButton(Widget);
        crearArbol->setObjectName(QString::fromUtf8("crearArbol"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, crearArbol);

        EliminarArbol = new QPushButton(Widget);
        EliminarArbol->setObjectName(QString::fromUtf8("EliminarArbol"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, EliminarArbol);

        print = new QPushButton(Widget);
        print->setObjectName(QString::fromUtf8("print"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, print);


        formLayout_5->setLayout(1, QFormLayout::LabelRole, formLayout_4);


        formLayout_6->setLayout(0, QFormLayout::LabelRole, formLayout_5);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        addFirst = new QPushButton(Widget);
        addFirst->setObjectName(QString::fromUtf8("addFirst"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, addFirst);

        EditPosition = new QPushButton(Widget);
        EditPosition->setObjectName(QString::fromUtf8("EditPosition"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, EditPosition);

        DeleteFirst = new QPushButton(Widget);
        DeleteFirst->setObjectName(QString::fromUtf8("DeleteFirst"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, DeleteFirst);

        BuscarPosition = new QPushButton(Widget);
        BuscarPosition->setObjectName(QString::fromUtf8("BuscarPosition"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, BuscarPosition);

        addDato = new QPushButton(Widget);
        addDato->setObjectName(QString::fromUtf8("addDato"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, addDato);

        crearLista = new QPushButton(Widget);
        crearLista->setObjectName(QString::fromUtf8("crearLista"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, crearLista);

        printLista = new QPushButton(Widget);
        printLista->setObjectName(QString::fromUtf8("printLista"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, printLista);


        formLayout_3->setLayout(1, QFormLayout::LabelRole, formLayout_2);


        formLayout_6->setLayout(1, QFormLayout::LabelRole, formLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DatoN = new QSpinBox(Widget);
        DatoN->setObjectName(QString::fromUtf8("DatoN"));
        DatoN->setMaximum(999999999);

        gridLayout->addWidget(DatoN, 0, 1, 1, 3);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 3);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 2);

        EstructuraD = new QLineEdit(Widget);
        EstructuraD->setObjectName(QString::fromUtf8("EstructuraD"));

        gridLayout->addWidget(EstructuraD, 2, 3, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        Posicion = new QSpinBox(Widget);
        Posicion->setObjectName(QString::fromUtf8("Posicion"));
        Posicion->setMaximum(999999999);

        gridLayout->addWidget(Posicion, 1, 2, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        formLayout_6->setLayout(2, QFormLayout::LabelRole, gridLayout_2);


        gridLayout_3->addLayout(formLayout_6, 0, 2, 3, 1);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_3->addWidget(listWidget, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Conectar = new QPushButton(Widget);
        Conectar->setObjectName(QString::fromUtf8("Conectar"));

        horizontalLayout->addWidget(Conectar);

        Quitar = new QPushButton(Widget);
        Quitar->setObjectName(QString::fromUtf8("Quitar"));

        horizontalLayout->addWidget(Quitar);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Server:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Puerto:", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Arbol BInario", nullptr));
        addArbol->setText(QCoreApplication::translate("Widget", "A\303\261adir", nullptr));
        crearArbol->setText(QCoreApplication::translate("Widget", "Crear Arbol", nullptr));
        EliminarArbol->setText(QCoreApplication::translate("Widget", "Eliminar", nullptr));
        print->setText(QCoreApplication::translate("Widget", "Print", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Lista enlazada", nullptr));
        addFirst->setText(QCoreApplication::translate("Widget", "A\303\261adir al inicio", nullptr));
        EditPosition->setText(QCoreApplication::translate("Widget", "Editar por posici\303\263n", nullptr));
        DeleteFirst->setText(QCoreApplication::translate("Widget", "Borrar al inicio", nullptr));
        BuscarPosition->setText(QCoreApplication::translate("Widget", "Buscar por posici\303\263n", nullptr));
        addDato->setText(QCoreApplication::translate("Widget", "A\303\261adir dato", nullptr));
        crearLista->setText(QCoreApplication::translate("Widget", "Crear Lista", nullptr));
        printLista->setText(QCoreApplication::translate("Widget", "Print", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Estructura de dato:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Posicion:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Dato:", nullptr));
        Conectar->setText(QCoreApplication::translate("Widget", "Conectar", nullptr));
        Quitar->setText(QCoreApplication::translate("Widget", "Quitar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
