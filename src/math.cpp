#include <cstdio>
#include <cmath>

#include "math.hpp"

namespace drei {

    void vec_print(glm::vec3* v, const char* name)
    {
        printf(
            "%s: x = %.03f, y = %.03f, z = %.03f\n",
            name, v->x, v->y, v->z);
    }
}

