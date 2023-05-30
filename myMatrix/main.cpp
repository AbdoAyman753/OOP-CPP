#include "Matrix.h"

using namespace std;

int main()
{
    cout<<"m: "<<endl;
    Matrix m(2,2);
    m.setElement(0,0,3);
    m.setElement(0,1,4);
    m.setElement(1,0,5);
    m.setElement(1,1,6);
    m.print();
    cout<<endl;
    cout<<"m1: "<<endl;
    Matrix m1(m);
    m1.print();
    return 0;
}
