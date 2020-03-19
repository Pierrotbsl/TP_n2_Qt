#ifndef TP_QT_SQLCLIENTWINDOW_H
#define TP_QT_SQLCLIENTWINDOW_H
#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QTableWidget>
#include "ButtonsPanel.h"



class SQLClientWindow : public QMainWindow{
Q_OBJECT

public:
    SQLClientWindow(QWidget *fenetre=0);
private:
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;

};



#endif //TP_QT_SQLCLIENTWINDOW_H
