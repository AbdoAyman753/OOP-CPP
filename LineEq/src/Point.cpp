#include "Point.h"

Point::Point(float x,float y):x(x),y(y)
{}
Point::Point(const Point& other):x(other.x),y(other.y)
{}
Point::~Point()
{}

void Point::setX(float x){
    Point::x = x;
}
void Point::setY(float y){
    Point::y = y;
}

float Point::getX()const{
    return Point::x;
}
float Point::getY()const{
    return Point::y;
}
