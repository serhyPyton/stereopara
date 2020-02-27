#include <vector>
#include "CImg/CImg.h"
#include <string>
using namespace cimg_library;
struct pixel{
int r,g,b;
};

struct {
    void init(std::string name){
        CImg<unsigned char> image(name.c_str()); 
        height = image.height();
        width = image.width();
        img.resize(height);
        for (auto& row : img){
            row.resize(width);
        }
        for (int i=0; i<height; i++){
            for (int j=0; j<width; j++){
                img[i][j].r = (int)image.atXY(j, i, 0, 0);
                img[i][j].g = (int)image.atXY(j, i, 0, 1);
                img[i][j].b = (int)image.atXY(j, i, 0, 2);
            }
        }
    }

    std::vector<pixel>& row(int i){
        return img[i];
    } 

int height, width;
std::vector<std::vector<pixel>> img;
     
} img;