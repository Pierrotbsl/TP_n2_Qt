#include <iostream>

#include <QApplication>
#include <QPushButton>
#include "Window.h"
#include "SQLClientWindow.h"
#include "LabeledTextField.h"
#include "ConfigurationDialog.h"

int main(int argc, char **argv)
    {
    QApplication app (argc, argv);

    QWidget fenetre;
    fenetre.setFixedSize(1000,500);

    QPushButton parent ("Parent", &fenetre);
    parent.setFixedSize(300,200);

    QPushButton fils("Fils", &fenetre);
    fils.setFixedSize(200,100);
    fils.setGeometry(50,50,80,30);


    //Window *parent2 = new Window;
    //parent2->show();

    SQLClientWindow *fenetre1=new SQLClientWindow;
    fenetre1->show();


    ConfigurationDialog* text1=new ConfigurationDialog;
    text1->show();

    return app.exec();
}