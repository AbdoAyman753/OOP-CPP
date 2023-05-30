#include <iostream>
#include <cstdint>
#include "RationalNum.h"
using namespace std;

ostream& operator<<(ostream& out, const RationalNum& num){
    //ostream out;
    out<<num.getNumerator()<<"/"<<num.getDenominator();

    return out;
}
int main()
{
    uint8_t num = 10;
    RationalNum num1 (3,7);
    cout << "Num1: "<<num1 << endl;
    RationalNum num2 (2,9);
    cout << "Num2: "<<num2 << endl;
    RationalNum num3 = num1 + 5 + 10;
    cout << "Num3: "<<num3 << endl;
    RationalNum sum = num2 + num3 - RationalNum(1,2);
    cout << "Sum: "<<sum << endl; //1909/126
    RationalNum mul = RationalNum(10) * 5;
    cout << "Mul: "<<mul << endl; //1909/126
    mul--;
    cout << "Mul--: "<<mul << endl; //1909/126
    return 0;
}
