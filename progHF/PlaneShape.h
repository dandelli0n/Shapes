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
    PlaneShape() = default;
    PlaneShape(Point c, Point p) : centre(c), p1(p) {}

    Point& getp1();
    Point& getCentre();
    const Point& getCentre() const;
    static double distance(Point a, Point b);
    double radius() const;
    virtual double area() const = 0;
    virtual PlaneShape* clone() const = 0;

    virtual void print(std::ostream& os) const = 0;
    virtual void read(std::istream& is) = 0;

    bool isShapeOnCircle(double r) const;
    virtual bool isPointOnShape(Point& p) const = 0;
    friend std::ostream& operator<<(std::ostream& os, const PlaneShape & rhs);
    friend std::istream& operator>>(std::istream& is, PlaneShape & rhs);
    virtual ~PlaneShape() = default;
};

#endif //PLANESHAPE_H
