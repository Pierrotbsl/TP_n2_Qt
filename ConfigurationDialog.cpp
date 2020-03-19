#include "ConfigurationDialog.h"


ConfigurationDialog::ConfigurationDialog(QDialog *parent) :QDialog(parent)
{

    QVBoxLayout* mainLayoutVertical = new QVBoxLayout();

    LabeledTextField* text1=new LabeledTextField();
    text1->setLabelo("IP adress");

    LabeledTextField* text2=new LabeledTextField();
    text2->setLabelo("User");

    LabeledTextField* text3=new LabeledTextField();
    text3->setLabelo("Password");

    mainLayoutVertical->addWidget(text1);
    mainLayoutVertical->addWidget(text2);
    mainLayoutVertical->addWidget(text3);
    setLayout(mainLayoutVertical);

    this->setWindowTitle("Configuration");
    this->setFixedSize(300,140);

}