//
// Created by Anselmet on 13/02/2020.
//

#ifndef TP_QT_SQLCLIENTWINDOW_H
#define TP_QT_SQLCLIENTWINDOW_H
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>
#include "ButtonsPanel.h"
#include <QTextEdit>
#include <QTableWidget>



class SQLClientWindow : public QMainWindow{
Q_OBJECT
public:
    SQLClientWindow(QMainWindow* fenetre=0);

private:
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;

};



#endif //TP_QT_SQLCLIENTWINDOW_H
