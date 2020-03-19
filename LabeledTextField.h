#ifndef TP_QT_LABELEDTEXTFIELD_H
#define TP_QT_LABELEDTEXTFIELD_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QLabel>
#include <QTextEdit>

#include <QHBoxLayout>


class LabeledTextField: public QWidget {
Q_OBJECT
public:
    LabeledTextField(QWidget* widgets=0);

    void setLabelo(QByteArray textLabel);

private:
    QTextEdit* text;
    QLabel* labelo;

};


#endif //TP_QT_LABELEDTEXTFIELD_H
