#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"),
                                                    "/home/yucicheung/handsDirtyOn_OpenCV/pics",
                                                    tr("Images (*.png *.jpg *.jpeg *.bmp)"));
    image = cv::imread(fileName.toLatin1().data());
    cv::namedWindow("Original Image");
    cv::imshow("Original Image",image);
    if(image.data){
        ui->pushButton_2->setEnabled(true);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    cv::flip(image,image,1);
    cv::namedWindow("Output image");
    cv::imshow("Output image",image);


}
