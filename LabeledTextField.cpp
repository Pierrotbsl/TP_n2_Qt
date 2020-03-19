#include "LabeledTextField.h"

LabeledTextField::LabeledTextField(QWidget *widgets) :QWidget(widgets){


    text= new QTextEdit("");
    labelo=new QLabel("User :");
    labelo->setToolTip("lol");

    text->setMaximumHeight(25);




    //QWidget* mainWidget = new QWidget(this);
    //mainWidget->setMinimumSize(200, 30);

    QHBoxLayout* LayoutHorizontal = new QHBoxLayout();
    LayoutHorizontal->addWidget(labelo);
    LayoutHorizontal->addWidget(text);

    //mainWidget->setLayout(LayoutHorizontal);
    this->setLayout(LayoutHorizontal);

}

void LabeledTextField::setLabelo(QByteArray textLabel) {
    LabeledTextField::labelo = labelo;
    labelo->setText(textLabel);
}
