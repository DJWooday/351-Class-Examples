//
// Created by DownT on 10/9/2025.
//

#ifndef CUSTOMDATA_2_CIRCLE_H
#define CUSTOMDATA_2_CIRCLE_H


class Circle {
public:
    double radius;
    double get_area();
    Circle();
    Circle(double radius);
};

class Sphere {
    public:
    double radius;
    Circle *circle;
    ~Sphere();
};
inline Sphere::~Sphere() {
    delete circle;
}



#endif //CUSTOMDATA_2_CIRCLE_H
