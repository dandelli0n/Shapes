//
// Created by Tori on 4/25/2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "PlaneShape.h"
#include "Point.h"


class Circle : public PlaneShape
{

public:
    Circle(Point c, Point p) : PlaneShape(c, p) {}
    Circle() = default;
    bool isPointOnShape(Point & p) const override;
    double area() const override;
    Circle& operator=(const Circle& circ);
    PlaneShape* clone() const override;
    void print(std::ostream& os) const override;
    void read(std::istream& is) override;
    //friend std::ostream& operator<<(std::ostream& os, Circle const & rhs);
    ~Circle() override = default;
};
//std::istream& operator>>(std::istream& is, Circle* rhs);



#endif //CIRCLE_H
