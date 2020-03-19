#ifndef TP_QT_MAINWINDOW_H
#define TP_QT_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
class MainWindow : public QMainWindow {
Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow(){};
private:
    QPushButton* button;
    QTextEdit* textedit;
};

#endif //TP_QT_MAINWINDOW_H
