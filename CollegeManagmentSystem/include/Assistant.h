#ifndef ASSISTANT_H
#define ASSISTANT_H
#include "Employee.h"

class Assistant : public Employee
{
    protected:
        string department;
        string researchName;
    public:
        Assistant();
        Assistant(string firstName,string lastName, int age,string department,string researchName);
        virtual ~Assistant();

        string getData();
        void putData();
};

#endif // ASSISTANT_H
