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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *cuadro;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *NVertice;
    QPushButton *Run;
    QPushButton *Quitar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(683, 493);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cuadro = new QListWidget(Widget);
        cuadro->setObjectName(QString::fromUtf8("cuadro"));

        gridLayout_2->addWidget(cuadro, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        NVertice = new QSpinBox(Widget);
        NVertice->setObjectName(QString::fromUtf8("NVertice"));

        horizontalLayout->addWidget(NVertice);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        Run = new QPushButton(Widget);
        Run->setObjectName(QString::fromUtf8("Run"));

        gridLayout->addWidget(Run, 0, 1, 1, 1);

        Quitar = new QPushButton(Widget);
        Quitar->setObjectName(QString::fromUtf8("Quitar"));

        gridLayout->addWidget(Quitar, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Vertice para calcular \n"
" la ruta mas corta", nullptr));
        Run->setText(QCoreApplication::translate("Widget", "Run", nullptr));
        Quitar->setText(QCoreApplication::translate("Widget", "Quitar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
