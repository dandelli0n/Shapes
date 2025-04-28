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
    Triangle(Point x, Point y);
    bool isPointOnShape(Point p) override;
    bool isShapeOnCircle(Point p) override;
    void operator<<(std::ostream& os, Triangle& t);
    void operator>>() override;
    void print();
};



#endif //TRIANGLE_H
