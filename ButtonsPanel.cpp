#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel(QWidget *parent) : QWidget(parent) {

    QHBoxLayout* mainLayoutHorizontal = new QHBoxLayout();


    button1 = new QPushButton("Configure", this);
    button2 = new QPushButton("Connect", this);
    button3 = new QPushButton("Disconnect", this);

    button1->setMinimumSize(100,30);
    button2->setMinimumSize(100,30);
    button3->setMinimumSize(100,30);



    mainLayoutHorizontal->addWidget(button1);
    mainLayoutHorizontal->addWidget(button2);
    mainLayoutHorizontal->addWidget(button3);

    this->setLayout(mainLayoutHorizontal);


}