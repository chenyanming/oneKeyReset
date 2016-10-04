/********************************************************************************
** Form generated from reading UI file 'onekeyresetgate.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEKEYRESETGATE_H
#define UI_ONEKEYRESETGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "resourcemanager.h"

QT_BEGIN_NAMESPACE

class Ui_OneKeyResetGateClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    ResourceManager *listWidget;
    QPushButton *runButton;

    void setupUi(QMainWindow *OneKeyResetGateClass)
    {
        if (OneKeyResetGateClass->objectName().isEmpty())
            OneKeyResetGateClass->setObjectName(QStringLiteral("OneKeyResetGateClass"));
        OneKeyResetGateClass->resize(317, 402);
        centralWidget = new QWidget(OneKeyResetGateClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        listWidget = new ResourceManager(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setWordWrap(true);
        listWidget->setSortingEnabled(false);

        verticalLayout->addWidget(listWidget);

        runButton = new QPushButton(centralWidget);
        runButton->setObjectName(QStringLiteral("runButton"));

        verticalLayout->addWidget(runButton);

        OneKeyResetGateClass->setCentralWidget(centralWidget);

        retranslateUi(OneKeyResetGateClass);

        QMetaObject::connectSlotsByName(OneKeyResetGateClass);
    } // setupUi

    void retranslateUi(QMainWindow *OneKeyResetGateClass)
    {
        OneKeyResetGateClass->setWindowTitle(QApplication::translate("OneKeyResetGateClass", "OneKeyResetGate", 0));
        label->setText(QApplication::translate("OneKeyResetGateClass", "Drop to here", 0));
        runButton->setText(QApplication::translate("OneKeyResetGateClass", "RUN", 0));
    } // retranslateUi

};

namespace Ui {
    class OneKeyResetGateClass: public Ui_OneKeyResetGateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEKEYRESETGATE_H
