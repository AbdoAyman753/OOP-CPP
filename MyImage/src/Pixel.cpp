/*
 * Pixel.cpp
 *
 *  Created on: Jun 8, 2022
 *      Author: Abdelrahman M .Ayman
 */

#include "Pixel.h"

Pixel::Pixel():Red(0),Green(0),Blue(0) {
	// TODO Auto-generated constructor stub
}
Pixel::Pixel(int value):Red(value),Green(value),Blue(value){
}
Pixel::Pixel(int red, int green,int blue):Red(red%256),Green(green%256),Blue(blue%256){

}
Pixel::Pixel(const Pixel& other):Red(other.Red),Green(other.Green),Blue(other.Blue){
}
Pixel::~Pixel() {
	// TODO Auto-generated destructor stub
}

//Setters
void Pixel::setBlue(int blue){
    Blue = blue%256;
}
void Pixel::setGreen(int green){
    Green = green%256;
}
void Pixel::setRed(int red){
    Red = red%256;
}
//Getters
int Pixel::getRed() const{
    return Red;
}
int Pixel::getGreen() const{
    return Green;
}
int Pixel::getBlue() const {
    return Blue;
}
//operator overloading
bool Pixel::operator!=(const Pixel& other){
    if(this->Red == other.Red)
        if(this->Green == other.Green)
            if(this->Blue == other.Blue)
                return false;
    return true;
}
Pixel& Pixel::operator*=(const Pixel& other){
    this->Red *= other.Red;
    this->Green *= other.Green;
    this->Blue *= other.Blue;

    //value Modulus 256
    this->Red %= 256;
    this->Green %= 256;
    this->Blue %= 256;
    return *this;
}
Pixel& Pixel::operator+=(const Pixel& other){
    this->Red += other.Red;
    this->Green += other.Green;
    this->Blue += other.Blue;

    //value Modulus 256
    this->Red %= 256;
    this->Green %= 256;
    this->Blue %= 256;
    return *this;
}

ostream& operator<<(ostream& out, const Pixel& other){
    out <<"["<<other.getRed()<<","<<other.getGreen()<<","<<other.getBlue()<<"]";
    return out;
}
