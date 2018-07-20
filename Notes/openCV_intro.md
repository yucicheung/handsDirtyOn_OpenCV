# OpenCV
## 组成
OpenCV库被划分为多个模块，这些模块编译成库文件后，位于lib文件夹中:
- `opencv_core`模块，包含核心功能，有球是底层数据结构和算法函数;
- `opencv_imgproc`模块，包含图像处理函数;
- `opencv_highgui`模块，包含读写图像及视频的函数，以及操作图形用户界面;
- `opencv_features2d`模块，包含兴趣点检测子、描述子及兴趣点匹配框架;
- `opencv_calib3d`，包含相机标定、双目几何估算以及立体视觉函数;
- `opencv_video`，包含运动估算、特征跟踪及前景提取函数与类;
- `opencv_objdetect`，包括物体检测函数，如脸部与行人检测。
还有其他工具模块，如机器学习`opencv_ml`、计算几何`opencv_flann`、`opencv_contrib`第三方代码、`opencv_legacy`废弃代码及GPU加速代码`opencv_gpu`。
每个模块有一个单独的头文件(在include文件夹下)。
推荐的声明方式如下:
```c++
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
```

## 库文件链接
- unix
  - 可以直接指定静态和动态文件位置进行;
  - 也可以使用`pkg-config`工具包辅助配置正确的编辑器选项和库文件(自动i决定链接什么文件)。在使用CMake安装OpenCV时，unix-install包含一个`opencv.pc`文件，`pkg-config`读取该文件来决定编译时的参数，此时跨平台的qmake项目文件变为如下：
```
unix{
	CONFIG += link_pkgconfig
	PKGCONFIG += opencv
}
```

- win32
```
win32{
INCLUDEPATH += c:\OpenCV2.2\include\
LIBS += -LC:\OpenCV2.2\lib\
-lopencv_core220\
-lopencv_highgui220\
-lopencv_improc220\
}

```

