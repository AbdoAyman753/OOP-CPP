#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
using namespace std;

class Pixel;


class Image
{
    private:
        int width, height;
        Pixel* pixels;
        int lastEmpty;
    public:
        Image();
        Image(int width, int height);
        Image (const Image& other);
        virtual ~Image();

        int getSize()const;
        Image& operator<<(const Pixel& other);
        Image& operator<<(const Image& other);
        friend ostream& operator<<(ostream& out, const Image& img);
        Pixel& operator[](int no);
        Image& operator=(const Image& other);

};

#endif // IMAGE_H
