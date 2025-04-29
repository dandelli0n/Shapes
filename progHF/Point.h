//
// Created by Tori on 4/25/2025.
//

#ifndef POINT_H
#define POINT_H



class Point
{
    private:
    double x, y;

    public:
    Point();
    Point(Point&);
    Point(double x, double y);
    double getX();
    double getY();
};



#endif //POINT_H
