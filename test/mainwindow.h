#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include<QLabel>
#include<stdio.h>

#include "ui_mainwindow.h"
#include "qprogressdialog.h"
#include "qdebug.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//define
private:
    QLabel *label , *CountLable;
    QPushButton *button;
    int count;
    QProgressDialog process ;

private slots:
    void command();
    void progress_click() ;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
