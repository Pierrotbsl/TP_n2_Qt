#ifndef TP_QT_WINDOW_H
#define TP_QT_WINDOW_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>

class Window : public QWidget{
Q_OBJECT
public:
    Window(QWidget* parent=0);

private:
    QPushButton* button = new QPushButton("Bonjour", this);
};


#endif //TP_QT_WINDOW_H
