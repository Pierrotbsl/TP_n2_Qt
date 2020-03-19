#include "Window.h"

Window::Window(QWidget *parent) : QWidget(parent){

   this->setFixedSize(800, 500);

   button->setText("Texte1");
   button->setToolTip("Texte2");
   button->setGeometry(10,10,80,30);


   this->setWindowTitle("Nouveau Titre");

}
