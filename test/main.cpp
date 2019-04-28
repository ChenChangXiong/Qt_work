#include<QApplication>
#include<QLabel>
#include<mainwindow.h>


 int main(int argc ,char **argv)
 {
     QApplication a(argc,argv);

     MainWindow MainWindow ;

      MainWindow.setWindowTitle("Main_Windows");
      MainWindow.setGeometry(0,0,800,480);

     //QLabel *label =new QLabel("Hello world");
     //label->show();



       MainWindow.show();
     return a.exec();
 }
