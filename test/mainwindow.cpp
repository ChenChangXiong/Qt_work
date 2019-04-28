#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h>
#include <string.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Ui_MainWindow myui ;

    label=new QLabel(tr("click: "),this);
    label->setGeometry(60,36,36,50);

    CountLable = new QLabel(tr(0),this);
    CountLable->setGeometry(100,36,36,50);

     button=new QPushButton(tr("buttun"),this);//实例化label,button控件
     button->setGeometry(50,90,80,40);//设置label以及button位置和大小
       //click_lisenner_handler
       connect(button,SIGNAL(clicked()),this,SLOT(command()));//响应的槽函数
     //background
     //QPalette palette(this->palette());
     //palette.setColor(QPalette::Background, Qt::darkBlue);
     //this->setPalette(palette);

     //progressbar
     QProgressDialog process(this);
     process.setLabelText(tr("processing..."));
     process.setRange(0,500000);
     process.setModal(true);
     process.setCancelButtonText(tr("cancel"));
     process.setValue(20000);

     for(int i=0;i<500000;i++)
     {
     for(int j=0;j<20000;j++);
     process.setValue(i);
     if(process.wasCanceled())
     break;
     }

     count = 0 ;
}
void MainWindow::command()
{
    CountLable->setNum(count++);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::progress_click()
{

}
