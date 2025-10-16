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

Sphere::Sphere(const Sphere &sphere) {
    this->radius = sphere.radius;
    this->circle = new Circle(sphere.circle->radius);
}

Sphere &Sphere::operator=(const Sphere &rhs) {
    delete this->circle;
    this->radius = rhs.radius;
    Circle* c = new Circle(rhs.circle->radius);
    this->circle = c;
}



