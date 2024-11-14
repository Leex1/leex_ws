cmake_minimum_required(VERSION 2.8.3)
project(test)

set(CMAKE_BUILD_TYPE "Release")

set(OpenCV_DIR "/usr/local/opencv4/share/OpenCV")

find_package(OpenCV REQUIRED)

add_executable(result test.cpp)

target_link_libraries(result ${OpenCV_LIBS})

message(WARNING "OpenCV_VERSION: ${OpenCV_VERSION}")
