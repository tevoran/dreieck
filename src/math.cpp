#include <cstdio>
#include <cmath>
#include "math.hpp"

namespace drei {

    Vec3 vec_sub(Vec3* a, Vec3* b)
    {
        return {
            .x = a->x - b->x,
            .y = a->y - b->y,
            .z = a->z - b->z,
        };
    }

    double vec_inner_product(Vec3* a, Vec3* b)
    {
        return (a->x * b->x) + (a->y * b->y) + (a->z * b->z);
    }

    double vec_magnitude(Vec3* a)
    {
        return std::sqrt(a->x * a->x + a->y * a->y + a->z * a->z);
    }

    Vec3 vec_project_a_onto_b(Vec3* a, Vec3* b)
    {
        double proj_on_b = vec_inner_product(a, b) / vec_magnitude(b);

        return {
            .x = b->x * proj_on_b,
            .y = b->y * proj_on_b,
            .z = b->z * proj_on_b,
        };
    }

    Vec3 vec_line_a_to_b(Vec3* a, Vec3* b)
    {
        return vec_sub(b, a);
    }

    void vec_print(Vec3* v, const char* name)
    {
        printf(
            "%s: x = %.03f, y = %.03f, z = %.03f\n",
            name, v->x, v->y, v->z);
    }
}

