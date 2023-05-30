#include <iostream>
#include "Pixel.h"
#include "Image.h"
using namespace std;

int main(){
    Pixel color1(10, 20, 50);                  // Create a pixel object with value red = 10, green = 20, blue = 50
    Image img(3, 2);                           // Create a black  image with width = 3, height = 2
    Image img2 (2, 2);                         // Create another black  image with width = 2, height = 2

    img<<color1<<Pixel()<<Pixel(1)<<Pixel(0, 1, 0)<<Pixel(1, 0, 0)<<Pixel(0, 0, 1);   // add pixels’ value in the image 1.
    cout<<"img: "<<img<<endl;
    img2<<Pixel()<<Pixel(20, 10, 5)<<Pixel(40, 0, 0)<<Pixel(1);                       // add pixels’ value in the image 2.
    cout<<"img2: "<<img2<<endl;

    Pixel color2(img[2]);                       // return 3rd pixel value in image 1
    cout<<color2<<endl;
    Pixel color3(img2[3]);                     // return 4th pixel value in the image 2
    cout<<color3<<endl;

    color2 != color3 ? cout<<"not White\n" :  cout<<"White\n";   // Compare two pixels values
    img2[1] += color1;//img2: [[0,0,0],[30,30,55],[40,0,0],[1,1,1]]
    img[img.getSize()-1] *= img2[1];
    img2 = img;
    cout<<"img2: "<<img2<<endl;                     // should print all pixels’ values for the img

    Image img3(3, 3);
    img3<<color1<<Pixel(10, 10, 10)<<Pixel(1);  // add pixels’ value in the image 3.
    img3<<img;                              //Appending two images
    cout<<"img3: "<<img3<<endl;
}
