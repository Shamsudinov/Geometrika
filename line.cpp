#include "line.h"

Line::Line()
{

}

void Line::setPointP1(const Point &p1){

    this->p1 = p1;
}

void Line::setPointP2(const Point &p2){

    this->p2 = p2;
}

Point Line::getPointP1() const{

    return p1;
}

Point Line::getPointP2() const{

    return p2;
}

float Line::distance() const{

    return line_distance;
}

