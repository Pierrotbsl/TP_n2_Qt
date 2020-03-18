//
// Created by Anselmet on 13/02/2020.
//

#include <QtWidgets/QHeaderView>
#include "SQLClientWindow.h"



SQLClientWindow::SQLClientWindow(QMainWindow *fenetre) : QMainWindow(fenetre){


    notificationPanel =  new QTextEdit("Salut les fillesss ! <3");
    resultTable = new QTableWidget();
    resultTable->setToolTip("Table");

    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    resultTable->setRowCount(5);
    resultTable->setColumnCount(3);

    this->setWindowTitle("SQL Client");
    this->setMinimumWidth(600);
    this->setMinimumHeight(400);

    QWidget* mainWidget = new QWidget(this);
    mainWidget->setMinimumSize(600,400);

    QVBoxLayout* mainLayoutVertical = new QVBoxLayout();



    ButtonsPanel* buttonsPanel1 = new ButtonsPanel();
    mainLayoutVertical->addWidget(buttonsPanel1);
    mainLayoutVertical->addWidget(notificationPanel);
    mainLayoutVertical->addWidget(resultTable);



    mainWidget->setLayout(mainLayoutVertical);

}


