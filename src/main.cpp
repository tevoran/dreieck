// system headers
#include <iostream>
#include "bitmap.hpp"
#include "math.hpp"

int main(int argc, char* argv[])
{
    if(argc == 4)
    {
        uint64_t res_x = std::stoi(argv[1]);
        uint64_t res_y = std::stoi(argv[2]);
        drei::Bitmap bitmap(res_x, res_y);

        drei::Pixel pixel;
        pixel.r = 255;
        pixel.g = 0;
        pixel.b = 255;

        for(uint64_t i = 0; i < res_y-100; i++)
        {
            bitmap.put_pixel(i,i,pixel);
        }

        bitmap.write(argv[3]);


    }
    else
    {
        std::cout << "dreieck usage:\n";
        std::cout << "dreieck [resolution_x] [resolution_y] [filename for final rendering image]\n";
        std::cout << "\nexample:\n";
        std::cout << "dreieck 1920 1080 rendered_image.bmp\n";
        std::cout << "\nonly BMPs are supported\n";
        return 0;
    }

    glm::vec3 a = {0.5f, 1.0f, 0.0f};
    glm::vec3 b = {1.0f, 0.0f, 0.0f};
    drei::vec_print(&a, "a");
    drei::vec_print(&b, "b");

    std::cout << "super awesome raytracer\n";
    return 0;
}
