#include "RationalNum.h"

RationalNum::RationalNum():numerator(0),denominator(1)
{}
RationalNum::RationalNum(int num):numerator(num),denominator(1)
{}
RationalNum::RationalNum(int num, int den){
    //calculate gcd
    RationalNum::numerator = num /gcd(num,den);
    RationalNum::denominator = den /gcd(num,den);
}
RationalNum::RationalNum(const RationalNum& other):numerator(other.numerator),denominator(other.denominator)
{}
RationalNum::~RationalNum()
{}

void RationalNum::setNumerator(int num){
    RationalNum::numerator = num;
}
void RationalNum::setDenominator(int den){
    RationalNum::denominator;
}
int RationalNum::getNumerator()const{
    return RationalNum::numerator;
}
int RationalNum::getDenominator()const{
    return RationalNum::denominator;
}
//Helper Function -> Greatest common divisor
int RationalNum::gcd(int a, int b) {
   if (b == 0)
    return a;
   return gcd(b, a % b);
}

//operators overloading
RationalNum RationalNum::operator+(const RationalNum& number){
    RationalNum temp(this->numerator*number.getDenominator() + number.getNumerator()*this->denominator,
                     this->denominator * number.getDenominator());
    return temp;
}
RationalNum RationalNum::operator-(const RationalNum& number){
    RationalNum temp(this->numerator*number.getDenominator() - number.getNumerator()*this->denominator,
                     this->denominator * number.getDenominator());
    return temp;
}
RationalNum RationalNum::operator*(const RationalNum& number){
    RationalNum temp(this->numerator *number.getNumerator(), this->denominator * number.getDenominator());
    return temp;
}
/*RationalNum RationalNum::operator+(int number){
    RationalNum temp(this->numerator +number *this->denominator,this->denominator);
    return temp;
}
RationalNum RationalNum::operator-(int number){
    RationalNum temp(this->numerator - number *this->denominator,this->denominator);
    return temp;
}
RationalNum RationalNum::operator*(int number){
    RationalNum temp(this->numerator * number,this->denominator);
    return temp;
}*/
void RationalNum::operator--(int number){
    this->setNumerator(this->numerator - this->denominator);
}
void RationalNum::operator++(int number){
    this->setNumerator(this->numerator + this->denominator);
}
