cmake_minimum_required(VERSION 3.15)
project(OpenCV_Playground)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 OpenCV 包
find_package(OpenCV REQUIRED)
message(STATUS "OpenCV version: ${OpenCV_VERSION}")

# 添加可执行文件
add_executable(${PROJECT_NAME} src/main.cpp)

# 链接 OpenCV 库
target_link_libraries(${PROJECT_NAME} PRIVATE ${OpenCV_LIBS})

# 包含 OpenCV 头文件
target_include_directories(${PROJECT_NAME} PRIVATE ${OpenCV_INCLUDE_DIRS})

# 复制资源文件夹到构建目录
file(COPY res DESTINATION ${CMAKE_BINARY_DIR})