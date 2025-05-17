//
// Created by Tori on 4/25/2025.
//

#include "Circle.h"

bool Circle::isPointOnShape(Point& p) const
{
    double d = distance(this->getCentre(), p);
    return d <= radius();
}

double Circle::area() const
{
    return radius()*radius()*3.14;
}

Circle &Circle::operator=(const Circle& circ)
{
    centre = circ.centre;
    p1 = circ.p1;
    return *this;
}

/*std::ostream &operator<<(std::ostream &os, Circle const& rhs)
{
    os << "Circle: centre = " << rhs.getCentre() << " point = " << rhs.getp1() << std::endl;
    return os;
}*/

PlaneShape *Circle::clone() const
{
    return new Circle(*this);  // deep copy
}

void Circle::print(std::ostream &os) const
{
    os << "Circle: centre = " << centre << " point = " << p1 << std::endl;
}

void Circle::read(std::istream &is)
{
    is >> centre >> p1;
}

