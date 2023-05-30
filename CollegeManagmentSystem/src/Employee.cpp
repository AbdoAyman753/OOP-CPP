#include "Employee.h"

Employee::Employee():firstName(""),lastName(""),age(0){
    //cout<<"Emloyee: Default CTOR."<<endl;
}
Employee::Employee(string firstName,string lastName,int age):
    firstName(firstName),lastName(lastName),age(age){
        //cout<<"Emloyee: Param CTOR."<<endl;
    }
Employee::~Employee(){
    //cout<<"Emloyee: DTOR."<<endl;
}

/*string& Employee::getData(){
    string out;
    out = "Name: " +firstName+" "+lastName+", Age: "+to_string(age);
    return out;
}
void Employee::putData(){
    cout<<"Enter Employee's First Name: "<<endl;
    cin>>firstName;
    cout<<"Enter Employee's Last Name: "<<endl;
    cin>>lastName;
    cout<<"Enter Employee's Age: "<<endl;
    cin>>age;
}*/
