#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    image = cv::imread("/home/yucicheung/handsDirtyOn_OpenCV/pics/lena.png");
    cv::namedWindow("Original Image");
    cv::imshow("Original Image",image);
    colorReduce(image);
    cv::namedWindow("Processed Image");
    cv::imshow("Processed Image",image);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::colorReduce(cv::Mat &image, int div)
{
    int nl = image.rows;int nc = image.cols*image.channels();
    for(int j=0;j<nl;j++){
        uchar* data = image.ptr<uchar>(j);
        for(int i=0;i<nc;i++){
            data[i]=data[i]/div*div;
        }
    }
}
