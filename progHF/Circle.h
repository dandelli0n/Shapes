//
// Created by Tori on 4/25/2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "PlaneShape.h"
#include "Point.h"


class Circle : public PlaneShape
{

public:
    Circle(Point c, Point p) : PlaneShape(c, p) {}

    bool isPointOnShape(Point p) override;
    bool isShapeOnCircle(double r) override;
};

std::ostream& operator<<(std::ostream& os, const Circle& rhs);
std::istream& operator>>(std::istream& is, Circle* rhs);



#endif //CIRCLE_H
