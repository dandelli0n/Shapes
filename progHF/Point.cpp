//
// Created by Tori on 4/25/2025.
//

#include "Point.h"

void Point::setX(double nx)
{
    x = nx;
}

void Point::setY(double ny)
{
    y = ny;
}

void Point::move(double nx, double ny)
{
    x += nx;
    y += ny;
}

Point& Point::operator=(Point rhs)
{
    x = rhs.getX();
    y = rhs.getY();
    return *this;
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return x;
}

std::ostream &operator<<(std::ostream &os, Point& rhs)
{
    os << "(" << rhs.getX() << ", " << rhs.getY() << ")";
    return os;
}