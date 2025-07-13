#include <opencv2/opencv.hpp>
#include <iostream>

void process_image(const cv::Mat& input) {
    cv::Mat gray, blurred;
    cv::cvtColor(input, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, blurred, {5, 5}, 1.5);
    
    cv::imshow("Processed", blurred);
}

int main() {
    cv::VideoCapture cap(0);
    if(!cap.isOpened()) {
        std::cerr << "Error opening video stream or file" << std::endl;
        return -1;
    }
    constexpr auto image_path = "res/image.png";
    auto image = cv::imread(image_path, cv::IMREAD_COLOR);
    
    while(true) {
        cv::Mat frame;
        cap >> frame; // Capture frame-by-frame
        if(frame.empty()) {
            std::cerr << "Error capturing frame" << std::endl;
            break;
        }
        
        process_image(frame);
        cv::imshow("Webcam Feed", frame);
        
        if(cv::waitKey(30) >= 0) break; // Exit on any key press
    }

    /*if(image.empty()) {
        std::cerr << "Error loading image from: " << image_path << std::endl;
        return -1;
    }*/

    process_image(image);
    cv::waitKey(0);
    return 0;
}