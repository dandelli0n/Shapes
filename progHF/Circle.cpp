//
// Created by Tori on 4/25/2025.
//

#include "Circle.h"

bool Circle::isPointOnShape(Point& p) const
{
    double d = distance(this->getCentre(), p);
    return d <= radius();
}

double Circle::area()
{
    return 0;
}

Circle &Circle::operator=(Circle circ)
{
    centre = circ.centre;
    p1 = circ.p1;
    return *this;
}

std::ostream &operator<<(std::ostream &os, Circle& rhs)
{
    os << "Circle: centre = " << rhs.getCentre() << " point = " << rhs.getp1() << std::endl;
    return os;
}
