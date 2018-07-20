#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cv::Mat image = cv::imread("/home/yucicheung/handsDirtyOn_OpenCV/pics/img.png");
    salt(image,3000);
    cv::namedWindow(("Image"));
    cv::imshow("Image",image);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::salt(cv::Mat &image,int n)
{
    for(int k=0;k<n;k++){
        int i = rand()%image.cols;
        int j = rand()%image.rows;
        if(image.channels()==1){
            image.at<uchar>(j,i)=255;
        }else if(image.channels()==3){
            image.at<cv::Vec3b>(j,i)[0]=255;
            image.at<cv::Vec3b>(j,i)[1]=255;
            image.at<cv::Vec3b>(j,i)[2]=255;
        }
    }
}
