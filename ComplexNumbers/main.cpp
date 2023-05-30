#include "complex.h"

int main()
{
    complex c1;
    complex c2(10);
    complex c3(15,-20);
    complex c4(10,12);
    cout<<"c1: "; c1.print();
    cout<<"c2: "; c2.print();
    cout<<"c3: "; c3.print();
    cout<<"c4: "; c4.print();

    cout<<"Adding c3 & c4: ";
    c3.add(c4);
    cout<<"Subtracting c3 & c4: ";
    c3.subtract(c4);
    cout<<"Multiplying c2 & c3: ";
    c3.multiply(c2);
    return 0;
}
