#include <iostream>
#include "Shapes.hpp"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"


int main() {

    Point p1(2, 3);
    Point p2(4, 5);
    Point p3(1, 1);
    Point p4(6, 6);
    Point rp1(2, 2);
    Point o(0, 0);

     Triangle triangle(o, rp1);
     Circle circ(p2, p3);
     Rectangle rect(p1, p2);

    Circle c2 = circ;
    std::cout << circ << c2;

    Shapes<3> sh;
    sh.addToCollection(&circ);
    sh.addToCollection(&rect);
    sh.addToCollection(&triangle);



    return 0;
}