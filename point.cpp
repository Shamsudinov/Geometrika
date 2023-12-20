#include "point.h"

Point::Point(){

    coordinate_x = coordinate_y = 0;
}

Point::Point(float x, float y){

    this->coordinate_x = x;
    this->coordinate_y = y;
}

float Point::x() const{

    return coordinate_x;
}

float Point::y() const{

    return coordinate_y;
}

void Point::setX(float x){

    coordinate_x = x;
}

void Point::setY(float y){

    coordinate_y = y;
}
