#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("/home/yucicheung/handsDirtyOn_OpenCV/00_showImg/img.png");
    cv::namedWindow("My Image");
    cv::imshow("My Image",image);
    cv::waitKey(500);
    return 1;
}

