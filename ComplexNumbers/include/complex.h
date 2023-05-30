#ifndef COMPLEX_H
#define COMPLEX_H

#include "stdlib.h"
#include <iostream>
using namespace std;

class complex
{
    private:
        float a,b;
    public:
        complex();
        complex(float a);
        complex(float a, float b);
        virtual ~complex();

        //Getters
        float getReal() const;
        float getImaginary() const;

        //Setters
        void setReal(float a);
        void setImaginary(float b);
        void setComplex(float a, float b);

        //Operation functions
        void add(const complex& other);
        void subtract(const complex& other);
        void multiply(const complex& other);

        //Print function
        void print();



};

#endif // COMPLEX_H
