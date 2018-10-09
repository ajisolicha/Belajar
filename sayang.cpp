#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <QMainWindow>
#include <QLabel>
#include <QtGui>
#include <QTimer>

//using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Timer = new QTimer(this);
    Timer->setInterval(10000);
    connect(Timer, SIGNAL(timeout()),this,SLOT(pengolahangambar()));
    Timer->start();

}

MainWindow::~MainWindow()
{

//    QPixmap pix ("C:/Users/User/Documents/pengolahangambar/doraemon.jpg");
//    ui->label->setPixmap(
  //  pix);
}

//void MainWindow::changeEvent(QEvent *e)
//{
//    QMainWindow::changeEvent(e);
//    switch (e->type()){
//    case QEvent::LanguageChange:
//        ui->retranslateUi(this);
//        break;
//    default:
//        break;

//    }
//}


//void MainWindow::pengolahangambar()
//{
//    Mat img1;
//    img1= imread ("C:/users/user/documents/101.png");
//    Mat img2;
//    img2= imread ("C:/users/user/documents/Gray_image.jpg");
//    Mat img3;
//   addWeighted(img1,0.1,img2,0.7,0,img3);
//    Mat imgfix;
//   cvtColor (img3,imgfix,CV_BGR2RGB);
//     QImage gambarku= QImage((const unsigned char*)imgfix.data,imgfix.cols,imgfix.rows,imgfix.step,QImage::Format_RGB888);
//      QPixmap alhamdulillah= QPixmap::fromImage(gambarku);
//   ui->label->setPixmap(QPixmap::fromImage(gambarku));

//}
