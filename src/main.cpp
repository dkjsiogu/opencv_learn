#include <opencv2/opencv.hpp>
#include <iostream>


int main() {
    constexpr auto image_path = "res/1.png";
    cv::Mat image = cv::imread(image_path, cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cerr << "Error loading image from: " << image_path << std::endl;
        std::cerr << "Please ensure the file exists and the path is correct." << std::endl;
        return -1;
    }

    cv::imshow("Original Image", image);

    cv::waitKey(0);
    return 0;
}