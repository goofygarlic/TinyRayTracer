#pragma once

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable {
    public:
        sphere(const point3& center, double radius) : center(center), radius(std::fmax(0, radius)) {}

        bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const override {
            vec3 oc = center - r.origin();
            auto a = dot(r.direction(), r.direction());
            auto b = -2.0 * dot(r.direction(), oc);
            auto c = dot(oc, oc) - radius * radius;
            auto discriminant = b * b - 4 * a * c;

            if(discriminant < 0) {
                return false;
            }
            auto sqrtdisc = std::sqrt(discriminant);

            auto root = (-b - sqrtdisc) / (2.0 * a);

            if(root <= ray_tmin || ray_tmax <= root) {
                root = (-b + sqrtdisc) / (2.0 * a);
                if(root <= ray_tmin || ray_tmax <= root) {
                    return false;
                }
            }

            rec.t = root;
            rec.p = r.at(rec.t);
            vec3 outward_normal = (rec.p - center) / radius;
            rec.set_face_normal(r, outward_normal);

            return true;

        }

    private:
        point3 center;
        double radius;
};