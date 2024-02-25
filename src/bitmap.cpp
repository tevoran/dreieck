#include "bitmap.hpp"

drei::Bitmap::Bitmap(uint64_t res_x, uint64_t res_y)
{
    m_pixels = new drei::Pixel[res_x * res_y];
    m_res_x = res_x;
    m_res_y = res_y;
}

void drei::Bitmap::write(std::string file)
{
    m_file.open(file, std::ios::binary | std::ios::trunc);
    if(!m_file.is_open())
    {
        std::cout << "ERROR: no valid file is open\n";
        return;
    }

    //write BMP header
    Header header;
    header.m_filesize = (m_res_x * m_res_y * sizeof(drei::Pixel) + sizeof(Header));
    header.m_res_x = m_res_x;
    header.m_res_y = m_res_y;
    header.m_pixel_data_size = m_res_x * m_res_y * sizeof(drei::Pixel);

    m_file.write((const char*)&header, sizeof(Header));

    //write pixel data
    for(uint64_t iy = 0; iy < m_res_y; iy++)
    {
        for(uint64_t ix = 0; ix < m_res_x; ix++)
        {
            m_file << m_pixels[ix + m_res_y * iy].r;
            m_file << m_pixels[ix + m_res_y * iy].g;
            m_file << m_pixels[ix + m_res_y * iy].b;
        }
    }

    m_file.close();
}