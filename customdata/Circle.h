//
// Created by DownT on 10/9/2025.
//

#ifndef CUSTOMDATA_CIRCLE_H
#define CUSTOMDATA_CIRCLE_H


class Circle{
public:
    double radius;
    Circle();
    Circle(double radius);
    double area();
};


class Sphere {
    public:
    double radius;
    Circle *circle;

    Sphere(double radius, Circle *circle);
    ~Sphere();
};

#endif //CUSTOMDATA_CIRCLE_H

