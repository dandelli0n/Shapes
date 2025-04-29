//
// Created by Tori on 4/25/2025.
//

#include "PlaneShape.h"

double PlaneShape::distance(Point a, Point b)
{
    double dist = sqrt(((a.getX() - b.getX()) * (a.getX() - b.getX())) + ((a.getY() - b.getY()) * (a.getY() - b.getY())));
    return dist;
}

double PlaneShape::radius()
{
    return distance(centre, p1);
}

Point PlaneShape::getCentre()
{
    return centre;
}

Point PlaneShape::getP()
{
    return p1;
}
