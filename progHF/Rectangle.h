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
    Rectangle();
    bool isPointOnShape(Point p) override;
    bool isShapeOnCircle(Point p) override;
    void operator<<(std::ostream& os, Rectangle& rec);
    void operator>>(std::istream& is, Rectangle& rec);
};



#endif //RECTANGLE_H
