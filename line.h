#ifndef LINE_H
#define LINE_H

#include <point.h>

class Line
{
    Point p1;
    Point p2;
    float line_distance;
public:
    Line();
    Line(Point p1, Point p2);

    void setPointP1(const Point &p1);
    void setPointP2(const Point &p2);
    Point getPointP1() const;
    Point getPointP2() const;
    float distance() const;

};

#endif // LINE_H
