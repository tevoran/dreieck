#pragma once

#include <cstdint>

namespace drei
{
    struct Pixel
    {
        uint8_t b;
        uint8_t g;
        uint8_t r;
    } __attribute__((packed));
}