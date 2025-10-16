//
// Created by DownT on 10/9/2025.
//

#ifndef CUSTOMDATA_2_CUBE_H
#define CUSTOMDATA_2_CUBE_H
class Rectangle {
public:
    int width, height;
    void set_vals(int width, int height);
    int get_area() {return width * height;};
    Rectangle() : width(0), height(0) {};
    Rectangle(int w, int h) : width(w), height(h) {};
};

class Cube {
public:
    int depth;
    Rectangle rect;
    Cube() : depth(0), rect() {};
};


#endif //CUSTOMDATA_2_CUBE_H