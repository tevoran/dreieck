// system headers
#include <iostream>
#include "bitmap.hpp"

int main(int argc, char* argv[])
{
    if(argc == 4)
    {
        uint64_t res_x = std::stoi(argv[1]);
        uint64_t res_y = std::stoi(argv[2]);
        drei::Bitmap bitmap(res_x, res_y);
        bitmap.write(argv[3]);
    }
    else
    {
        std::cout << "dreieck usage:\n";
        std::cout << "dreieck [resolution_x] [resolution_y] [filename for final rendering image]\n";
        std::cout << "\nexample:\n";
        std::cout << "dreieck 1920 1080 rendered_image.bmp\n";
        std::cout << "\nonly BMPs are supported\n";
    }
    return 0;
}