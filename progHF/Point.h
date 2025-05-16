//
// Created by Tori on 4/25/2025.
//

#ifndef POINT_H
#define POINT_H
#include <math.h>
#include <iostream>



class Point
{
private:
    double x;
    double y;

    public:
    Point() : x(0), y(0) {}
    Point(double x, double y) : x(x), y(y) {}
    double getX();
    double getY();
    void setX(double nx);
    void setY(double ny);
    void move(double nx = 0, double ny = 0);
    Point& operator=(Point rhs);

};

bool operator==(Point& lhs, Point& rhs);
std::ostream &operator<<(std::ostream &os, Point rhs);

#endif //POINT_H
