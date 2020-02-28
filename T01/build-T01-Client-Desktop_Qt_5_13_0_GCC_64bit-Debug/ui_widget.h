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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *Puerto;
    QLabel *label;
    QLineEdit *Nservidor;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Conectar;
    QPushButton *Quitar;
    QPushButton *Run;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(683, 493);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 440, 625, 30));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        Puerto = new QSpinBox(widget);
        Puerto->setObjectName(QString::fromUtf8("Puerto"));
        Puerto->setMaximum(999999999);

        horizontalLayout->addWidget(Puerto);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        Nservidor = new QLineEdit(widget);
        Nservidor->setObjectName(QString::fromUtf8("Nservidor"));

        horizontalLayout->addWidget(Nservidor);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Conectar = new QPushButton(widget);
        Conectar->setObjectName(QString::fromUtf8("Conectar"));

        horizontalLayout_2->addWidget(Conectar);

        Quitar = new QPushButton(widget);
        Quitar->setObjectName(QString::fromUtf8("Quitar"));

        horizontalLayout_2->addWidget(Quitar);

        Run = new QPushButton(widget);
        Run->setObjectName(QString::fromUtf8("Run"));

        horizontalLayout_2->addWidget(Run);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Puerto:", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Server:", nullptr));
        Conectar->setText(QCoreApplication::translate("Widget", "Conectar", nullptr));
        Quitar->setText(QCoreApplication::translate("Widget", "Quitar", nullptr));
        Run->setText(QCoreApplication::translate("Widget", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
