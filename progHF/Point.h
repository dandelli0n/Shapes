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
    double getX() const;
    double getY() const;
    void setX(double nx);
    void setY(double ny);
    void move(double nx = 0, double ny = 0);
    friend std::istream& operator>>(std::istream& is, Point& p);
    friend std::ostream &operator<<(std::ostream &os, Point const & rhs);
    Point& operator=(const Point & rhs);

};

bool operator==(Point const & lhs, Point const & rhs);


#endif //POINT_H
