#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    //define a pic
    cv::Mat image;// initialize an image of size 0
    std::cout<<"Size:"<<image.size().height<<","<<image.size().width<<std::endl;
    image = cv::imread("/home/yucicheung/handsDirtyOn_OpenCV/00_basicInstruction/img.png");
    assert(image.data);//data是指向已分配的内存块的指针，内存块中包含图像数据，当数据不存在会被设为0
    // define a window
    cv::namedWindow("Original Image");
    cv::imshow("Original Image",image);
    // flip image horizontally
    cv::Mat result;//也可以原地反转
    cv::flip(image,result,1);//1水平,0垂直，负数表示水平加垂直反转
    cv::waitKey(500);
    cv::namedWindow("Output Image");
    cv::imshow("Output Image",result);
    //exit till user takes operation
    cv::waitKey(0);//不停等待用户按键输入
    //save pics into disk
    cv::imwrite("output.png",result);
    return 1;
}

