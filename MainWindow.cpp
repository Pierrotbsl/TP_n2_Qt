//
// Created by Anselmet on 06/02/2020.
//

#include "MainWindow.h"
#include <QVBoxLayout>
MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    this->setWindowTitle("My window");
    this->setMinimumWidth(500);
    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    this->button = new QPushButton("My first button");
    mainLayout->addWidget(button);
    this->textedit = new QTextEdit();
    this->textedit->setText("bla bla bla");
    mainLayout->addWidget(textedit);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);
}