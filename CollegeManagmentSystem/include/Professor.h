#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Employee.h"

class Professor :public Employee
{
    protected:
        string publications;
        int cur_id;
    public:
        Professor();
        Professor(string firstName,string lastName, int age, string publications, int cur_id);
        virtual ~Professor();

        string getData();
        void putData();

};

#endif // PROFESSOR_H
