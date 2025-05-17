//
// Created by Tori on 4/25/2025.
//

#include "Rectangle.h"

Rectangle::Rectangle(Point c, Point p) : PlaneShape(c, p)
{
    double deltaX = p.getX() - c.getX();
    double deltaY = p.getY() - c.getY();

    p2.setX(-1 * deltaY);
    p2.setY(deltaX);

    p3.setX(-1 * p2.getY());
    p3.setY(p2.getX());

    p4.setX(-1 * p3.getY());
    p4.setY(p3.getX());

    //put everything back to their place
    p2.move(c.getX(), c.getY());
    p3.move(c.getX(), c.getY());
    p4.move(c.getX(), c.getY());
}


Point& Rectangle::getp2()
{
    return p2;
}


Point& Rectangle::getp3()
{
    return p3;
}


Point& Rectangle::getp4()
{
    return p4;
}

double Rectangle::area() const
{
    double area = distance(centre, p1) * distance(centre, p1) * 2;
    return area;
}

bool Rectangle::isPointOnShape(Point& p) const
{
    const double aSum = Triangle::area(p, p1, p2) + Triangle::area(p, p2, p3) + Triangle::area(p, p3, p4) + Triangle::area(p, p4, p1);
    return abs(area() - aSum) < EPS;
}

/*std::ostream &operator<<(std::ostream &os, const Rectangle & rhs)
{
    os << "Rectangle: centre = " << rhs.getCentre() << ", A = " << rhs.getp1() << ", B = " << rhs.getp2() << ", C = " << rhs.getp3() << ", D = " << rhs.getp4() << std::endl;
    return os;
}*/

PlaneShape *Rectangle::clone() const
{
    return new Rectangle(*this);  // deep copy
}

Rectangle &Rectangle::operator=(const Rectangle& rect)
{
    centre = rect.centre;
    p1 = rect.p1;
    p2 = rect.p2;
    p3 = rect.p3;
    p4 = rect.p4;
    return *this;
}

void Rectangle::print(std::ostream &os) const
{
    os << "Rectangle: centre = " << centre << ", A = " << p1 << ", B = " << p2 << ", C = " << p3 << ", D = " << p4 << std::endl;
}

void Rectangle::read(std::istream &is)
{
    Point c;
    Point p;
    is >> c >> p;

    Rectangle r(c, p);
    *this = r;
}




