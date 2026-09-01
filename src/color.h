#pragma once

#include "vec3.h"
#include <iostream>

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color){
    int rbyte = int(255.999 * pixel_color.x());
    int gbyte = int(255.999 * pixel_color.y());
    int bbyte = int(255.999 * pixel_color.z());

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}