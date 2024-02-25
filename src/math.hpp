#pragma once

namespace drei {

    struct Vec3 {
        double x; double y; double z;
    };

    Vec3 vec_sub(Vec3* a, Vec3* b);
    double vec_inner_product(Vec3* a, Vec3* b);
    double vec_magnitude(Vec3* a);
    Vec3 vec_project_a_onto_b(Vec3* a, Vec3* b);
    Vec3 vec_line_a_to_b(Vec3* a, Vec3* b);
    void vec_print(Vec3* v, const char* = "vec");
}

