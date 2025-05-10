/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QPushButton *ecoActivityButton;
    QPlainTextEdit *mapText;
    QPlainTextEdit *messageBox;
    QHBoxLayout *buttonPanel;
    QPushButton *residentialButton;
    QPushButton *commercialButton;
    QPushButton *industrialButton;
    QPushButton *evButton;
    QPushButton *dieselBusButton;
    QPushButton *monitorPollutionButton;
    QPushButton *endTurnButton;
    QPushButton *exitButton;
    QLabel *statusLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 768);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: black;"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"        background-color: white;\n"
"        font-size: 32px;\n"
"        font-weight: bold;\n"
"        padding: 10px 20px;\n"
"        border-radius: 10px;\n"
"        margin-top: 40px;\n"
"        margin-left: 40px;\n"
"       "));

        verticalLayout->addWidget(titleLabel);

        mainLayout = new QHBoxLayout();
        mainLayout->setObjectName("mainLayout");
        leftLayout = new QVBoxLayout();
        leftLayout->setObjectName("leftLayout");
        ecoActivityButton = new QPushButton(centralwidget);
        ecoActivityButton->setObjectName("ecoActivityButton");
        ecoActivityButton->setStyleSheet(QString::fromUtf8("\n"
"            background-color: white;\n"
"            border: 2px solid #444;\n"
"            padding: 15px 40px;\n"
"            font-size: 16px;\n"
"            font-weight: bold;\n"
"            border-radius: 10px;\n"
"           "));

        leftLayout->addWidget(ecoActivityButton);

        mapText = new QPlainTextEdit(centralwidget);
        mapText->setObjectName("mapText");
        mapText->setReadOnly(true);
        mapText->setStyleSheet(QString::fromUtf8("\n"
"            background-color: white;\n"
"            font-size: 14px;\n"
"            padding: 10px;\n"
"            border-radius: 10px;\n"
"           "));

        leftLayout->addWidget(mapText);


        mainLayout->addLayout(leftLayout);

        messageBox = new QPlainTextEdit(centralwidget);
        messageBox->setObjectName("messageBox");
        messageBox->setReadOnly(true);
        messageBox->setStyleSheet(QString::fromUtf8("\n"
"          background-color: white;\n"
"          border: 2px solid #444;\n"
"          border-radius: 10px;\n"
"          padding: 10px;\n"
"          font-size: 14px;\n"
"         "));

        mainLayout->addWidget(messageBox);

        mainLayout->setStretch(0, 2);
        mainLayout->setStretch(1, 1);

        verticalLayout->addLayout(mainLayout);

        buttonPanel = new QHBoxLayout();
        buttonPanel->setSpacing(10);
        buttonPanel->setObjectName("buttonPanel");
        residentialButton = new QPushButton(centralwidget);
        residentialButton->setObjectName("residentialButton");
        residentialButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(residentialButton);

        commercialButton = new QPushButton(centralwidget);
        commercialButton->setObjectName("commercialButton");
        commercialButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(commercialButton);

        industrialButton = new QPushButton(centralwidget);
        industrialButton->setObjectName("industrialButton");
        industrialButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(industrialButton);

        evButton = new QPushButton(centralwidget);
        evButton->setObjectName("evButton");
        evButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(evButton);

        dieselBusButton = new QPushButton(centralwidget);
        dieselBusButton->setObjectName("dieselBusButton");
        dieselBusButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(dieselBusButton);

        monitorPollutionButton = new QPushButton(centralwidget);
        monitorPollutionButton->setObjectName("monitorPollutionButton");
        monitorPollutionButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(monitorPollutionButton);

        endTurnButton = new QPushButton(centralwidget);
        endTurnButton->setObjectName("endTurnButton");
        endTurnButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(endTurnButton);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setStyleSheet(QString::fromUtf8("\n"
"          background-color: #d3f0c8;\n"
"          border: 2px solid #444;\n"
"          font-weight: bold;\n"
"          font-size: 14px;\n"
"          border-radius: 10px;\n"
"         "));

        buttonPanel->addWidget(exitButton);


        verticalLayout->addLayout(buttonPanel);

        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setAlignment(Qt::AlignCenter);
        statusLabel->setStyleSheet(QString::fromUtf8("\n"
"        color: white;\n"
"        font-size: 14px;\n"
"        margin: 10px;\n"
"       "));

        verticalLayout->addWidget(statusLabel);

        verticalLayout->setStretch(2, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart Eco City", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "SMART ECO CITY", nullptr));
        ecoActivityButton->setText(QCoreApplication::translate("MainWindow", "ECO ACTIVITY", nullptr));
        residentialButton->setText(QCoreApplication::translate("MainWindow", "BUILD RESIDENTIAL", nullptr));
        commercialButton->setText(QCoreApplication::translate("MainWindow", "BUILD COMMERCIAL", nullptr));
        industrialButton->setText(QCoreApplication::translate("MainWindow", "BUILD INDUSTRIAL", nullptr));
        evButton->setText(QCoreApplication::translate("MainWindow", "ADD EV", nullptr));
        dieselBusButton->setText(QCoreApplication::translate("MainWindow", "ADD DIESEL BUS", nullptr));
        monitorPollutionButton->setText(QCoreApplication::translate("MainWindow", "MONITOR POLLUTION", nullptr));
        endTurnButton->setText(QCoreApplication::translate("MainWindow", "END TURN", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
