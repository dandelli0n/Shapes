//
// Created by Tori on 4/25/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "PlaneShape.h"
#include "Point.h"



class Rectangle : public PlaneShape
{

public:
    Rectangle(Point c, Point p) : PlaneShape(c, p) {}
    bool isPointOnShape(Point p) override;
    bool isShapeOnCircle(double r) override;
};
std::ostream& operator<<(std::ostream& os, const Rectangle& rhs);
std::istream& operator>>(std::istream& is, Rectangle* rhs);


#endif //RECTANGLE_H
