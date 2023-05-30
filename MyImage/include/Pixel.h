/*
 * Pixel.h
 *
 *  Created on: Jun 8, 2022
 *      Author: Abdelrahman M .Ayman
 */

#ifndef PIXEL_H_
#define PIXEL_H_
#include <iostream>
using namespace std;

class Pixel {
private:
	int Red;
	int Green;
	int Blue;
public:
	Pixel();
	Pixel(int value);
	Pixel(int red, int green,int blue);
	Pixel (const Pixel& other);
	virtual ~Pixel();
	//Setters
	void setBlue(int blue);
	void setGreen(int green);
	void setRed(int red);
	//Getters
	int getBlue() const ;
	int getGreen() const;
	int getRed() const;
	//operator overloading
	bool operator!=(const Pixel& other);
	Pixel& operator*=(const Pixel& other);
	Pixel& operator+=(const Pixel& other);
	Pixel& operator+(const Pixel& other);
	friend ostream& operator<<(ostream& out, const Pixel& other);


};

#endif /* PIXEL_H_ */
