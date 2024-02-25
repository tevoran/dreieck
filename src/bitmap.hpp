#pragma once
#include <cstdint>
#include "pixel.hpp"

namespace drei
{
    class Bitmap
    {
        private:
            uint64_t m_res_x;
            uint64_t m_res_y;
            drei::Pixel *m_pixels = nullptr;

        public:
            Bitmap(uint64_t res_x, uint64_t res_y);
    };
}
