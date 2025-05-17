//
// Created by Tori on 4/25/2025.
//

#include "Triangle.h"


Triangle::Triangle(Point center, Point q1) : PlaneShape(center, q1)
{

    //diff between centre's and p1's X and Y coordinates
    double deltaX = (q1.getX() - center.getX());
    double deltaY = (q1.getY() - center.getY());

    p2.setX(-0.5 * deltaX + sqrt(3)/2 * deltaY);
    p2.setY(-0.5 * deltaY - sqrt(3)/2 * deltaX);

    p3.setX(-0.5 * p2.getX() + sqrt(3)/2 * p2.getY());
    p3.setY(-0.5 * p2.getY() - sqrt(3)/2 * p2.getX());

    //shift em back to their place after rotation
    p2.move(center.getX(), center.getY());
    p3.move(center.getX(), center.getY());
}

double Triangle::area(const Point& q1, const Point& q2, const Point& q3)
{
    double area = abs((q1.getX()*(q2.getY() - q3.getY())) + (q2.getX()*(q3.getY() - q1.getY())) + (q3.getX()*(q1.getY() - q2.getY()))) / 2;
    return area;
}

double Triangle::area() const
{
    return area(p1, p2, p3);
}

bool Triangle::isPointOnShape(Point& p) const
{
    const double a1 = area(p, p1, p2);
    const double a2 = area(p, p2, p3);
    const double a3 = area(p, p1, p3);
    return abs(area() - a1 - a2 - a3) < EPS;
}
Point& Triangle::getp2()
{
    return p2;
}


Point& Triangle::getp3()
{
    return p3;
}


/*bool Triangle::isShapeOnCircle(double r)
{
    Point np;
    Point orig(0, 0);
    np.setX(centre.getX() * r / distance(centre, orig));
    np.setY(centre.getY() * r / distance(centre, orig));

    return isPointOnShape(np);
}*/


/*std::ostream &operator<<(std::ostream &os, Triangle const & rhs)
{
    os << "Triangle: centre = " << rhs.getCentre() << ", A = " << rhs.getp1() << ", B = " << rhs.getp2() << ", C = " << rhs.getp3() << std::endl;
    return os;
}*/

PlaneShape *Triangle::clone() const
{
    return new Triangle(*this);  // deep copy
}

Triangle &Triangle::operator=(const Triangle& tr)
{
    centre = tr.centre;
    p1 = tr.p1;
    p2 = tr.p2;
    p3 = tr.p3;
    return *this;
}

void Triangle::print(std::ostream &os) const
{
    os << "Triangle: centre = " << centre << ", A = " << p1 << ", B = " << p2 << ", C = " << p3 << std::endl;
}

void Triangle::read(std::istream &is)
{
    Point c;
    Point p;
    is >> c >> p;

    Triangle t(c, p);
    *this = t;
}


