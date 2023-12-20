#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <point.h>

class Triangle{

    Point A , B , C;

public:
    Triangle();
    Triangle(Point A,Point B,Point C);
    ~Triangle();
    void setPointA(const Point &A);
    void setPointB(const Point &B);
    void setPointC(const Point &C);
    Point getPointA() const;
    Point getPointB() const;
    Point getPointC() const;

    void info() const;

};

#endif // TRIANGLE_H
