#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    image = cv::imread("/home/yucicheung/handsDirtyOn_OpenCV/pics/lena.png");
    cv::namedWindow("Original");
    cv::imshow("Original",image);
    colorReduce(image);
    cv::namedWindow("Processed");
    cv::imshow("Processed",image);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::colorReduce(cv::Mat &image, int div){
    cv::MatIterator_<cv::Vec3b> it = image.begin<cv::Vec3b>();
    cv::MatIterator_<cv::Vec3b> itend = image.end<cv::Vec3b>();
    while(it!=itend)
    {
        (*it)[0]=(*it)[0]/div*div;
        (*it)[1]=(*it)[1]/div*div;
        (*it)[2]=(*it)[2]/div*div;
        it++;
    }
}
