#include "Assistant.h"

Assistant::Assistant():Employee(),department(""),researchName("")
{//cout<<"Assistant: Default CTOR."<<endl;
}

Assistant::Assistant(string firstName,string lastName, int age,string department,string researchName):
    Employee(firstName,lastName,age),department(department),researchName(researchName)
{
    //cout<<"Assistant: Param CTOR."<<endl;
}

Assistant::~Assistant()
{
    //cout<<"Assistant: DTOR."<<endl;
}

string Assistant::getData(){
    string out;
    out = "Name: " +firstName+" "+lastName+", Age: "+to_string(age)+", Department: "+department+", Research Name: "+researchName;
    return out;
}

void Assistant::putData(){
    cout<<"Enter Assistant's First Name: "<<endl;
    cin>>firstName;
    cout<<"Enter Assistant's Last Name: "<<endl;
    cin>>lastName;
    cout<<"Enter Assistant's Age: "<<endl;
    cin>>age;
    cout<<"Enter Assistant's Department: "<<endl;
    cin>>department;
    cout<<"Enter Assistant's Research Name: "<<endl;
    cin>>researchName;
}
