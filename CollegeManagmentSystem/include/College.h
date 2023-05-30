#ifndef COLLEGE_H
#define COLLEGE_H
class Employee;

class College
{
    protected:
        Employee** ptr;
        int lastEmpty;
    public:
        College();
        College(int Size);
        virtual ~College();

        void addStuffMember(Employee* other);
        void getData();
        void putData();

};

#endif // COLLEGE_H
