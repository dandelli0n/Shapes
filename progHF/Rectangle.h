//
// Created by Tori on 4/25/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "PlaneShape.h"
#include "Point.h"
#include "Triangle.h"



class Rectangle : public PlaneShape
{
private:
    Point p2;
    Point p3;
    Point p4;

public:
    Rectangle(Point c, Point p);
    //Rectangle(Point c, Point p1, Point p2, Point p3, Point p4) : PlaneShape(c, p1), p2(p2), p3(p3), p4(p4) {}
    Point& getp2();
    Point& getp3();
    Point& getp4();
    double area() override;
    bool isPointOnShape(Point p) override;
    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rhs);
    Rectangle& operator=(const Rectangle& rect);
    //bool isShapeOnCircle(double r) override;
};

//std::istream& operator>>(std::istream& is, Rectangle* rhs);


#endif //RECTANGLE_H
