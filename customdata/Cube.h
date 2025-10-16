//
// Created by DownT on 10/9/2025.
//

#ifndef CUSTOMDATA_CUBE_H
#define CUSTOMDATA_CUBE_H
class Rectangle {
public:
    int width, height;
    //Rectangle() {}
    Rectangle(int width, int height);
    //Rectangle(){width = height = 5;};
    int area() {return width * height;};
    void set_vals(int w, int h);
};
void Rectangle::set_vals(int w, int h) {
    width = w;
    height = h;
}
Rectangle::Rectangle(int width, int height) {
    this->width = width; this->height = height;
}

class Cube {
public:
    int depth;
    Rectangle rect;
    Cube() : depth(5), rect() {}
    Cube(int d) : depth(d), rect() {}
};


#endif //CUSTOMDATA_CUBE_H