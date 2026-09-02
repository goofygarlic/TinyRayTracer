#pragma once

#include "vec3.h"
#include <algorithm>
#include <iostream>

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color){
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    r = std::clamp(r, 0.0, 0.999);
    g = std::clamp(g, 0.0, 0.999);
    b = std::clamp(b, 0.0, 0.999);
    
    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}