#include "Line.h"

int main()
{
    Point p1(8.0f,5.0f);
    Point p2(3.0f,3.0f);
    Line eq1(p1,p2);
    eq1.print();

    Line eq2(eq1+2);

    cout<<endl;
    cout<<"eq2: "<<endl;

    eq2.print();
    return 0;
}
