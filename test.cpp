#include <opencv2/core/core.hpp>
#include <iostream>

int main() {
    // 输出 OpenCV 版本信息
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;
    std::cout << "Major version: " << CV_MAJOR_VERSION << std::endl;
    std::cout << "Minor version: " << CV_MINOR_VERSION << std::endl;
    std::cout << "Subminor version: " << CV_SUBMINOR_VERSION << std::endl;

    // 查找 OpenCV 库的安装路径
    std::string opencvInstallPath = "Unknown";
#if defined(CV_INSTALL_PREFIX)
    opencvInstallPath = CV_INSTALL_PREFIX;
#endif
    std::cout << "OpenCV install path: " << opencvInstallPath << std::endl;

    return 0;
}

