//
// Created by Tori on 4/25/2025.
//

#ifndef PLANESHAPE_H
#define PLANESHAPE_H
#include "Point.h"
#include <iostream>
#include <math.h>
class PlaneShape
{
private:
    Point centre;
    Point p1;
public:
    PlaneShape(Point c, Point p) : centre(c), p1(p) {}

    /*  behavior of different kind of plane shapes is implemented here in these two functions, no need for other attributes
     * (such as more points or the radius of the circle) */
    virtual bool isPointOnShape(Point p) = 0;
    virtual bool isShapeOnCircle(double r) = 0;
    Point getCentre();
    Point getP();
    double distance(Point a, Point b);
    double radius();

    virtual ~PlaneShape() = default;
};

#endif //PLANESHAPE_H
