//
// Created by Tori on 4/25/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "PlaneShape.h"
#include "Point.h"
#include "Triangle.h"



class Rectangle : public PlaneShape
{
private:
    Point p2;
    Point p3;
    Point p4;

public:
    Rectangle(Point c, Point p);
    Rectangle() = default;

    Point& getp2();
    Point& getp3();
    Point& getp4();

    double area() const override;
    PlaneShape* clone() const override;
    //friend std::ostream& operator<<(std::ostream& os, const Rectangle & rhs);
    Rectangle& operator=(const Rectangle& rect);
    void read(std::istream& is) override;
    void print(std::ostream& os) const override;
    bool isPointOnShape(Point & p) const override;
    ~Rectangle() override = default;
};

//std::istream& operator>>(std::istream& is, Rectangle* rhs);


#endif //RECTANGLE_H
