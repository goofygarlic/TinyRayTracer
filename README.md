# TinyRayTracer

## Building & running

You need CMake and a C++17 compiler (g++, clang, or MSVC).

```bash
mkdir build
cd build
cmake .. # if using msys2, cmake .. -G "MinGW Makefiles"
cmake --build .
./TinyRayTracer > ../image.ppm     # on Windows: .\TinyRayTracer.exe > ..\image.ppm
```

Open `image.ppm` with an image viewer that supports PPM (GIMP, or on macOS "Preview" can't, use `feh`, `IrfanView`, or convert it: `magick image.ppm image.png` if you have ImageMagick).

You should see a gradient: red increasing left to right, green increasing top to bottom.

## What's here

- `src/main.cpp`
- `src/vec3.h` - Class made to represent a 3D Vector.
- `src/ray.h`
- `src/color.h`



## Roadmap

1. Output an image
2. Rays & a sphere (vec3 math, ray-sphere intersection)
3. Multiple objects + surface normals (Hittable abstraction)
4. Antialiasing (multisampling)
5. Diffuse materials (recursive bouncing — global illumination begins here)
6. Metal & glass materials (reflection/refraction)
7. Camera controls (positionable camera, depth of field)
8. Path tracing proper (Monte Carlo, importance sampling, lights)
9. Performance (BVH acceleration structure)
10. Beyond: textures, mesh loading, multithreading, denoising