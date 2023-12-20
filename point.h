#ifndef POINT_H
#define POINT_H


class Point
{
    float coordinate_x;
    float coordinate_y;

public:
    Point();
    Point(float x, float y);

    float x() const;
    float y() const;
    void setX(float x);
    void setY(float y);
};

#endif // POINT_H
