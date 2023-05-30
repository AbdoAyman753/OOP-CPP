#include "Line.h"

Line::Line(const Point& p1, const Point& p2):p1(p1),p2(p2){
    Line::slope = ((p1.getY() - p2.getY())/(p1.getX() - p2.getX()));
    Line::constant = ( -1*p1.getX()*((p1.getY() - p2.getY())/(p1.getX() - p2.getX())) )+ p1.getY();
}

//Line::Line(float slope , float constant):slope(slope),constant(constant){}

Line::~Line()
{}

Line Line::operator+(float num){
    //int newConst= Line::constant;
    Line result(Line::p1, Line::p2);
    result.setConstant(result.getConstant()+num);
    //result.setConstant(num + newConst);
    //result.setSlope(Line::slope);
    return result;
}
/*Line Line::operator+(float num, const Line eq){
    Line result(eq);
    result.setConstant(num + eq.getConstant());
    return result;
}*/

void Line::setSlope(float slope){
    Line::slope = slope;
}
void Line::setConstant(float constant){
    Line::constant = constant;
}
float Line::getSlope()const{
    return Line::slope;
}
float Line::getConstant()const{
    return Line::constant;
}
void Line::print()const{
    cout<<"Y = "<<Line::slope<<" * X + ("<<Line::constant<<")"<<endl;
}
