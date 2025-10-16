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
    Sphere() {
        radius = 0;
        circle = new Circle(radius);
    }
    Sphere(double radius) : radius(radius), circle(new Circle(radius)) {}
    Sphere(const Sphere& s) {
        radius = s.radius;
        circle = new Circle(s.circle->radius);
    }

    Sphere& operator=(const Sphere& rhs) {
        delete circle;
        radius = rhs.radius;
        circle = new Circle(rhs.circle->radius);
        return *this;
    }
};
inline Sphere::~Sphere() {
    delete circle;
}



#endif //CUSTOMDATA_2_CIRCLE_H
