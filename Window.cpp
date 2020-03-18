//
// Created by Anselmet on 13/02/2020.
//

#include "Window.h"

Window::Window(QWidget *parent) : QWidget(parent){

   this->setFixedSize(800, 500);

   button->setText("Lol");
   button->setToolTip("Ici");
   button->setGeometry(10,10,80,30);


   this->setWindowTitle("New title !");

}
