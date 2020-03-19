#ifndef TP_QT_BUTTONSPANEL_H
#define TP_QT_BUTTONSPANEL_H

#include <QtWidgets/QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>
#include "SQLClientWindow.h"


class ButtonsPanel : public QWidget{
    Q_OBJECT
public:
    ButtonsPanel(QWidget* parent=0);
private:
    QPushButton* button1;
    QPushButton* button2;
    QPushButton* button3;
};


#endif //TP_QT_BUTTONSPANEL_H
