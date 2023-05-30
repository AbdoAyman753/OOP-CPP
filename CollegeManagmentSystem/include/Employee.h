#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee
{
    protected:
        string firstName;
        string lastName;
        int age;
    public:
        Employee();
        Employee(string firstName,string lastName, int age);
        virtual ~Employee();

        virtual string getData() = 0;
        virtual void putData() = 0;

};

#endif // EMPLOYEE_H
