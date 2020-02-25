#include <iostream>
#include "CImg/CImg.h"

using namespace cimg_library;

int main(){
    CImg<unsigned char> image("aloe/view0.png");
    CImgDisplay main_disp(image,"Click a point");

    std::cout << "image height " << image.height() << "\n";
    std::cout << "image width " << image.width() << "\n";

    int x=0, y=0;
    for (x = 0; x < 20; x++)
    {
        std::cout << (int)image.atXY(x, y, 0, 0) <<" "<< (int)image.atXY(x, y, 0, 1) <<" "<< (int)image.atXY(x, y, 0, 2) << "\n";         
    }
    
    return 0;
}