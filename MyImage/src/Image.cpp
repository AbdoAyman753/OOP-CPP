#include "Image.h"
#include "Pixel.h"
#include <iostream>
using namespace std;

Image::Image():width(0),height(0),pixels(nullptr),lastEmpty(0){
    //ctor
}
Image::Image(int width,int height):width(width),height(height),pixels(new Pixel[width * height]),lastEmpty(0){
}
Image::Image(const Image& other):Image(other.width,other.height){
    for(int i = 0; i < width * height; i++){
        pixels[i] = other.pixels[i];
    }
}
Image::~Image()
{
    if(pixels != nullptr)
        delete [] pixels;
}
int Image::getSize()const{
    return width*height;
}
Image& Image::operator<<(const Pixel& other){
    this->pixels[lastEmpty++] = other;
    return *this;
}
Image& Image::operator<<(const Image& other){
    //appending 2nd image to temporary image
    for(int i = 0; lastEmpty < sizeof(this->pixels); i++){
        this->pixels[lastEmpty++] = other.pixels[i];
    }
    //returning 1st image(this image)
    return *this;
}
ostream& operator<<(ostream& out, const Image& img){
    out<<"[";
    for(int i = 0; i< img.getSize();i++){
        out<<img.pixels[i];
        if(i != img.getSize() -1)
            out<<",";
    }
    out<<"]";
    return out;
}
Pixel& Image::operator[](int no){
    return this->pixels[no];
}
Image& Image::operator=(const Image& other){
    //deallocating 1st image(this image) array of pixels
    delete [] pixels;
    //allocating 1st image(this image) array of pixels with the new size
    pixels = new Pixel [sizeof(other.pixels)];
    //copying from temporary image to 1st image (this image)
    for(int i = 0; i< sizeof(other.pixels); i++){
        this->pixels[i] = other.pixels[i];
    }
    this->width = other.width;
    this->height = other.height;
    this->lastEmpty = other.lastEmpty;
    //returning 1st image(this image)
    return *this;
}
