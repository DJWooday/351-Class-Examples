//
// Created by DownT on 10/9/2025.
//

#include "Circle.h"

Circle::Circle() {
    radius = 0;
}

Circle::Circle(double radius) {
    radius = radius;
}

double Circle::area() {
    return radius * radius * 3.14159;
}

Sphere::~Sphere() {
    delete circle;
}



