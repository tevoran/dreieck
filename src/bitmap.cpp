#include "bitmap.hpp"

drei::Bitmap::Bitmap(uint64_t res_x, uint64_t res_y)
{
    m_pixels = new drei::Pixel[res_x * res_y];
    m_res_x = res_x;
    m_res_y = res_y;
}