#ifndef TP_QT_CONFIGURATIONDIALOG_H
#define TP_QT_CONFIGURATIONDIALOG_H

#include <QDialog>

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include "LabeledTextField.h"

class ConfigurationDialog : public QDialog {
    Q_OBJECT
public:

    ConfigurationDialog(QDialog *parent=0);

};


#endif //TP_QT_CONFIGURATIONDIALOG_H
