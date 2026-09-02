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
- `src/vec3.h` - Represents a 3D Vector.
- `src/ray.h` - Represents a ray (origin and a direction)
- `src/color.h` - Takes a color and puts it into PPM format for output.
- `src/hittable.h`- Interface that represents if another object is hittable
- `src/hittable_list.h` - Loops over a collection of hittable objects and makes sure if they were hit or not
- `src/sphere.h` - Does actual work on hittable objects defined as spheres. Contains the actual math behind detecting hits.
- `src/common.h` - Contains common reference materials shared across multiple classes
- `src/camera.h` - Works as the display of all the previous classes. Renders the image and handles ray coloring logic.



## Roadmap

1. Output an image
2. Rays & a sphere (vec3 math, ray-sphere intersection)
3. Multiple objects + surface normals (Hittable abstraction)
4. Antialiasing (multisampling)
5. Diffuse materials (recursive bouncing, global illumination)
6. Metal & glass materials (reflection/refraction)
7. Camera controls (positionable camera, depth of field)
8. Path tracing proper (Monte Carlo, importance sampling, lights)
9. Performance (BVH acceleration structure)
10. Beyond: textures, mesh loading, multithreading, denoising