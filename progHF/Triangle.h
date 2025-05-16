//
// Created by Tori on 4/25/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "PlaneShape.h"
#include "Point.h"


class Triangle : public PlaneShape
{
private:
    Point p2;
    Point p3;
public:
    Triangle(Point center, Point q1);
    Triangle(Point center, Point q1, Point q2, Point q3) : PlaneShape(center, q1), p2(q2), p3(q3) {}
    static const double area(Point&, Point&, Point&);
    double area() override;
    Point getp2() const;
    Point getp3() const;
    bool isPointOnShape(Point& p) override;
    //bool isShapeOnCircle(double r) override;
    friend std::ostream& operator<<(std::ostream& os, Triangle& rhs);
    Triangle& operator=(const Triangle& tr);
};

//std::istream& operator>>(std::istream& is, Triangle* rhs);


#endif //TRIANGLE_H
