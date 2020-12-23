#ifndef MATERIAL_H
#define MATERIAL_H

#include "common.h"

struct hit_record;

class material
{
public:
    virtual bool scatter(
        const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered) const = 0;
};

class lambertian : public material
{
public:
    lambertian(const color &a) : albedo(a) {}

    virtual bool scatter(
        const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered) const override
    {
        auto scatter_direction = rec.normal + random_unit_vector();

        if (scatter_direction.near_zero())
        {
            scatter_direction = rec.normal;
        }

        scattered = ray(rec.p, scatter_direction);
        attenuation = albedo;
        return True;
    }

public:
    color albedo;
}

#endif