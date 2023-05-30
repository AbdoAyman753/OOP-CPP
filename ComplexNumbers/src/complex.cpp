#include "complex.h"


//Default CTOR
complex::complex(): a(0),b(0)
{}
//1 Param CTOR
complex::complex(float a):a(a),b(0){}
//2 Params CTOR
complex::complex(float a, float b):a(a),b(b){}

//DTOR
complex::~complex()
{}

//Getters
float complex::getReal() const{
    return complex::a;
}
float complex::getImaginary() const{
    return complex::b;
}

//Setters
void complex::setReal(float a){
    complex::a = a;
}
void complex::setImaginary(float b){
    complex::b = b;
}
void complex::setComplex(float a, float b){
    complex::a = a;
    complex::b = b;
}

//Operation functions
void complex::add(const complex& other){
    if((complex::b + other.getImaginary()) < 0.0f)
        cout<<complex::a + other.getReal()<<"-i"<<abs(complex::b + other.getImaginary())<<endl;
    else
        cout<<complex::a + other.getReal()<<"+i"<<complex::b + other.getImaginary()<<endl;
}
void complex::subtract(const complex& other){
    if(complex::b+other.getImaginary() < 0.0f)
        cout<<complex::a - other.getReal()<<"-i"<<abs(complex::b - other.getImaginary())<<endl;
    else
        cout<<complex::a - other.getReal()<<"+i"<<complex::b - other.getImaginary()<<endl;
}
void complex::multiply(const complex& other){
    if((complex::a * other.getImaginary()) + (complex::b * other.getReal()) < 0.0f)
        cout<<(complex::a * other.getReal()) - (complex::b * other.getImaginary())<<"-i"
        <<abs( (complex::a * other.getImaginary()) + (complex::b * other.getReal()) )<<endl;
    else
        cout<<(complex::a * other.getReal()) - (complex::b * other.getImaginary())<<"+i"
            <<(complex::a * other.getImaginary()) + (complex::b * other.getReal())<<endl;
}

//Print function
void complex::print(){
    if(complex::b < 0.0f)
        cout<<complex::a<<"-i"<<abs(complex::b)<<endl;
    else
        cout<<complex::a<<"+i"<<complex::b<<endl;
}
