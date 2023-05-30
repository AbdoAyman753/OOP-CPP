#include "Professor.h"

Professor::Professor():Employee(),publications(""),cur_id(0)
{
    //cout<<"Professor: Default CTOR."<<endl;
}
Professor::Professor(string firstName,string lastName, int age, string publications, int cur_id):
    Employee(firstName,lastName,age),publications(publications),cur_id(cur_id)
    {
        //cout<<"Professor: Param CTOR."<<endl;
}
Professor::~Professor()
{
    //cout<<"Professor: DTOR."<<endl;
}
string Professor::getData(){
    string out;
    out = "Name: " +firstName+" "+lastName+", Age: "+to_string(age)+", Publications: "+publications+", Cur_id: "+to_string(cur_id);
    return out;
}
void Professor::putData(){
    cout<<"Enter Professor's First Name: "<<endl;
    cin>>firstName;
    cout<<"Enter Professor's Last Name: "<<endl;
    cin>>lastName;
    cout<<"Enter Professor's Age: "<<endl;
    cin>>age;
    cout<<"Enter Professor's Publications: "<<endl;
    cin>>publications;
    cout<<"Enter Professor's Cur_id: "<<endl;
    cin>>cur_id;
}
