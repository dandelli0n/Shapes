//
// Created by Tori on 4/25/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "PlaneShape.h"
#include "Point.h"


class Triangle : public PlaneShape
{
public:
    Triangle(Point center, Point p1) : PlaneShape(center, p1) {}
    bool isPointOnShape(Point p) override;
    bool isShapeOnCircle(double r) override;
};
std::ostream& operator<<(std::ostream& os, const Triangle& rhs);
std::istream& operator>>(std::istream& is, Triangle* rhs);


#endif //TRIANGLE_H
