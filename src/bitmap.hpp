#pragma once
#include <cstdint>
#include <iostream>
#include <fstream>
#include <string>
#include "pixel.hpp"

namespace drei
{
    class Bitmap
    {
        private:
            uint64_t m_res_x;
            uint64_t m_res_y;
            drei::Pixel *m_pixels = nullptr;
            std::ofstream m_file;

            struct Header
            {
                uint16_t m_signature = 0x4D42;
                uint32_t m_filesize = 0;
                uint32_t m_reserved = 0;
                uint32_t m_offset = 54;
                uint32_t m_size_header = 40;
                uint32_t m_res_x = 0;
                uint32_t m_res_y = 0;
                uint16_t m_num_planes = 1;
                uint16_t m_bpp = 24;
                uint32_t m_compression_type = 0;
                uint32_t m_pixel_data_size = 0;
                uint32_t m_pixel_per_meter_horizontal = 100;
                uint32_t m_pixel_per_meter_vertical = 100;
                uint64_t m_num_colors = 0;
            } __attribute__((packed));

        public:
            Bitmap(uint64_t res_x, uint64_t res_y);
            void write(std::string file);
    };
}
