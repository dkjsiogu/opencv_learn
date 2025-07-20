# OpenCV with VSCode 示例项目

## 项目概述

这个示例项目展示了如何在 Visual Studio Code (VSCode) 中配置和使用 OpenCV 进行图像处理开发。项目包含基本的配置文件和示例代码，帮助您快速搭建 OpenCV 开发环境。

## 环境要求

- Visual Studio Code
- OpenCV 库 (建议版本 4.x)
- C++ 编译器 (如 g++ 或 MSVC)
- CMake (可选，用于更复杂的项目)

## 配置文件说明

<img width="2880" height="1800" alt="屏幕截图 2025-07-20 154937" src="https://github.com/user-attachments/assets/e462e311-87c1-4139-a121-2f3df79e9d49" />
<img width="2880" height="1800" alt="屏幕截图 2025-07-20 155018" src="https://github.com/user-attachments/assets/fbc4ed7d-b828-4cb2-92a3-48db82b9175f" />
<img width="2880" height="1800" alt="屏幕截图 2025-07-20 155117" src="https://github.com/user-attachments/assets/b1a6aec5-c1e8-44a7-b684-2337248f552b" />


## 使用说明

1. 克隆或下载本项目到本地
2. 根据您的系统环境修改上述三个配置文件中的路径
3. 在 `src/main.cpp` 中编写您的 OpenCV 代码
4. 将您的测试图片放在项目目录下的 `images` 文件夹中
5. 使用快捷键 `Ctrl+Shift+B` 构建项目
6. 使用快捷键 `F5` 调试运行

## 示例代码

项目包含一个简单的 OpenCV 示例，演示如何:
- 读取图像文件（注释掉了）
- 调用摄像头
- 转换为灰度图像
- 显示原始图像和处理后的图像
- 保存处理后的图像（注释掉了）
- 注释掉内容可自己删除注释，不影响其他内容

## 注意事项

1. 请确保所有路径配置正确，特别是 OpenCV 的包含路径和库路径
2. 根据您的操作系统和 OpenCV 安装方式，路径可能不同
3. 如果使用 Windows 系统，路径需要使用双反斜杠 (`\\`) 或正斜杠 (`/`)
4. 您可能需要根据实际需求调整链接的 OpenCV 库

## 贡献

欢迎提交问题和改进建议！
