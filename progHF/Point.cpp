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



double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}
Point& Point::operator=(const Point & rhs)
{
    x = rhs.getX();
    y = rhs.getY();
    return *this;
}

std::istream &operator>>(std::istream &is, Point &p)
{
    return is >> p.x >> p.y;
}

std::ostream &operator<<(std::ostream &os, Point const & rhs)
{
    os << "(" << rhs.getX() << ", " << rhs.getY() << ")";
    return os;
}

bool operator==(Point const & lhs, Point const & rhs)
{
    return (lhs.getX() == rhs.getX() && lhs.getY() == rhs.getY());
}

