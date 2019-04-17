//
// Created by venglov on 11.04.19.
//

#include <iostream>
#include "zad1/Circle.h"
#include "zad1/Circle.cpp"
#include "zad1/Sphere.cpp"
#include "zad1/Sphere.h"

int main() {
    auto cir_t_ptr = new Circle();
    cir_t_ptr->r = 4;
    std::cout << cir_t_ptr->pole() << std::endl;
    auto sph_t_ptr = new Sphere();
    sph_t_ptr->r = 4;
    std::cout << sph_t_ptr->pole() << std::endl;
    return 0;
}