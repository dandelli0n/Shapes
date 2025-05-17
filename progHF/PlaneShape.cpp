//
// Created by Tori on 4/25/2025.
//

#include "PlaneShape.h"

double PlaneShape::distance(Point a, Point b)
{
    Point np((a.getX() - b.getX()), (a.getY() - b.getY())); // new Point so the calculations don't get all over the place
    double res = sqrt((np.getX() * np.getX()) + (np.getY() * np.getY()));
    return res;
}

double PlaneShape::radius() const
{
    return distance(centre, p1);
}

Point& PlaneShape::getCentre()
{
    return centre;
}

Point& PlaneShape::getp1()
{
    return p1;
}

bool PlaneShape::isShapeOnCircle(double r) const
{
    Point np;
    Point orig(0, 0);
    double centreDistance = distance(orig, centre);
    if(centreDistance < r)
        return true;

    np.setX(centre.getX() * r / centreDistance);
    np.setY(centre.getY() * r / centreDistance);


    return isPointOnShape(np);
}

std::ostream &operator<<(std::ostream &os, const PlaneShape &rhs)
{
    rhs.print(os);
    return os;
}

std::istream &operator>>(std::istream &is, PlaneShape & rhs)
{
    rhs.read(is);
    return is;
}

const Point &PlaneShape::getCentre() const
{
    return centre;
}







