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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QSpinBox *Puerto;
    QLabel *label_2;
    QFrame *line;
    QFormLayout *formLayout_2;
    QPushButton *Iniciar;
    QPushButton *Detener;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(449, 51);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Puerto = new QSpinBox(Widget);
        Puerto->setObjectName(QString::fromUtf8("Puerto"));
        Puerto->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, Puerto);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        gridLayout->addLayout(formLayout, 0, 0, 2, 1);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 2, 2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        Iniciar = new QPushButton(Widget);
        Iniciar->setObjectName(QString::fromUtf8("Iniciar"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, Iniciar);

        Detener = new QPushButton(Widget);
        Detener->setObjectName(QString::fromUtf8("Detener"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Detener);


        gridLayout->addLayout(formLayout_2, 1, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Puerto del servidor:", nullptr));
        Iniciar->setText(QCoreApplication::translate("Widget", "Iniciar", nullptr));
        Detener->setText(QCoreApplication::translate("Widget", "Detener", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
