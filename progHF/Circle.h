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
    Circle(Point x, Point y);
    bool isPointOnShape(Point p) override;
    bool isShapeOnCircle(Point p) override;
    void operator<<(std::ostream os, Circle& circle);
    void operator>>() override;

};



#endif //CIRCLE_H
