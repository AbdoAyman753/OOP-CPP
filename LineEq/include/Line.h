#ifndef LINE_H
#define LINE_H
#include <iostream>
#include "Point.h"
using namespace std;

class Line
{
    private:
        Point p1;
        Point p2;
        float slope;
        float constant;
    public:
        Line(const Point& p1, const Point& p2);
        //Line(float slope,float constant);
        virtual ~Line();
        Line operator+(float num);
        //Line operator+(float num, const Line eq);
        void setSlope(float slope);
        void setConstant(float constant);
        float getSlope()const;
        float getConstant()const;
        void print()const;

};

#endif // LINE_H
