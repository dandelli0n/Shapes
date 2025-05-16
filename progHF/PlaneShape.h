//
// Created by Tori on 4/25/2025.
//

#ifndef PLANESHAPE_H
#define PLANESHAPE_H
#define EPS 0.0001
#include "Point.h"
#include <iostream>
#include <math.h>
class PlaneShape
{
protected:
    Point centre;
    Point p1;
public:
    PlaneShape(Point c, Point p) : centre(c), p1(p) {}
    void setPoint(Point& dest, Point& what);
    virtual bool isPointOnShape(Point& p) const = 0;
    bool isShapeOnCircle(double r);
    virtual double area() = 0;
    Point getCentre() const;
    Point getp1() const;
    static double distance(Point a, Point b);
    double radius() const;

    virtual ~PlaneShape() = default;
};

#endif //PLANESHAPE_H
