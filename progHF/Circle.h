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

    bool isPointOnShape(Point& p) const override;
    double area() override;
    Circle& operator=(Circle circ);

};
std::istream& operator>>(std::istream& is, Circle* rhs);
std::ostream& operator<<(std::ostream& os, Circle& rhs);


#endif //CIRCLE_H
