# OpenCV
## cv::Mat类
用于保存图像以及其他矩阵数据的数据结构，默认情况下，它们的尺寸是0。但是也可以**指定初始尺寸**:
```shell
cv::Mat ima(240,320,CV_8U,cv::Scalar(100));
```
- 其中：
  - **单像素格式**:`CV_8U`指定单字节的像素图像，`U`表示无符号数，如果是`S`表示带符号类型;`CV_8UC3`表示三通道彩色图像;还可以声明16/32位的U/S整数图像，或32/64位的浮点数，如`CV_32F`;
  - `CV::Scalar(v1,v2,v3,v4)`for`BGRA`，其中A代表透明度;

当`CV::Mat`对象离开作用域后，分配的内存将自动释放。`CV::Mat`实现了**引用计数**以及**浅拷贝**:
- 浅拷贝
  - 当图像之间进行赋值时，图像数据没有进行复制，两个对象都指向同一块内存块。
  - 如果要创建一个崭新拷贝，用`copyTo()`方法。
- 引用计数
  - 当且仅当素有引用内存数据的对象都被析构后，才会释放内存块(只要仍被引用就不被释放)。

