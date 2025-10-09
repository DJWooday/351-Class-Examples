//
// Created by DownT on 10/9/2025.
//

#include "Circle.h"

Circle::Circle() {
    radius = 0;
}
Circle::Circle(double radius) {
    this->radius = radius;
}
double Circle::get_area() {
    return radius * radius * 3.141592;
}


