// system headers
#include <iostream>
#include "bitmap.hpp"

int main(int argc, char* argv[])
{
    drei::Bitmap bitmap(1, 1);
    bitmap.write("awesome.bmp");
    std::cout << "super awesome raytracer\n";
    return 0;
}