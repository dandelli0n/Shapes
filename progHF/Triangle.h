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
    Triangle() = default;
    static double area(const Point&, const Point&, const Point&);
    double area() const override;
    Point& getp2();
    Point& getp3();
    bool isPointOnShape(Point& p) const override;
    PlaneShape* clone() const override;
    void print(std::ostream& os) const override;
    void read(std::istream& is) override;
    //bool isShapeOnCircle(double r) override;
    //friend std::ostream& operator<<(std::ostream& os, Triangle const & rhs);
    Triangle& operator=(const Triangle& tr);
    ~Triangle() override = default;
};

//std::istream& operator>>(std::istream& is, Triangle* rhs);


#endif //TRIANGLE_H
