#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() 
{
    string imagePath = "image1.jpg";
    Mat image = imread(imagePath);
    Mat hsvImage, labImage, yuvImage, xyzImage, grayImage, yccImage, cieluvImage, hlsImage;
    cvtColor(image, hsvImage, COLOR_BGR2HSV);
    cvtColor(image, labImage, COLOR_BGR2Lab);
    cvtColor(image, yuvImage, COLOR_BGR2YUV);
    cvtColor(image, xyzImage, COLOR_BGR2XYZ);
    cvtColor(image, grayImage, COLOR_BGR2GRAY);
    cvtColor(image, yccImage, COLOR_BGR2YCrCb);
    cvtColor(image, cieluvImage, COLOR_BGR2Luv);
    cvtColor(image, hlsImage, COLOR_BGR2HLS);
    imshow("Original Image", image);
    imshow("HSV Image", hsvImage);
    imshow("Lab Image", labImage);
    imshow("YUV Image", yuvImage);
    imshow("XYZ Image", xyzImage);
    imshow("Gray Image", grayImage);
    imshow("YCC Image", yccImage);
    imshow("CIE_LUV Image", cieluvImage);
    imshow("HLS Image", hlsImage);
    waitKey(0);
    return 0;
}
