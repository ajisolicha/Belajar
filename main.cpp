#include "mainwindow.h"
#include <QApplication>
//#inlcude <MainWindow.h>
#include <QMainWindow>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow widow;
    MainWindow w;
    CVImageWidget* imageWidget= new CVImageWidget();
    widow.setCentralWidget(imageWidget);
    cv::Mat image = cv::imread("E:\Album Foto\bunga\1.jpg");
    imageWidget-> showImage(image);

    w.show();

    return a.exec();
}
