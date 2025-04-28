//
// Created by Tori on 4/25/2025.
//

#ifndef PLANESHAPE_H
#define PLANESHAPE_H
#include "Point.h"
#include <iostream>
class PlaneShape
{
    private:
    Point p1, p2;

    public:
    virtual bool isPointOnShape(Point p) = 0;

    virtual bool isShapeOnCircle(Point p) = 0;

    virtual void operator<<();

    virtual void operator>>() = 0;

    virtual ~PlaneShape() = default;
};


#endif //PLANESHAPE_H
