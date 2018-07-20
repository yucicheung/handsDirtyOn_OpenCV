#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void salt(cv::Mat &image,int n);

private:
    Ui::MainWindow *ui;
    cv::Mat image;

};

#endif // MAINWINDOW_H
