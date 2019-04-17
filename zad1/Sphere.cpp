//
// Created by venglov on 11.04.19.
//

#include "Sphere.h"

double Sphere::pole() {
    return Circle::pole() * this->r * (4.0 / 3.0);
}
