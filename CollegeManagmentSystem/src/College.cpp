#include "College.h"
#include "Employee.h"
College::College():ptr(nullptr),lastEmpty(0){
    //cout<<"College: Default CTOR."<<endl;
}
College::College(int Size):ptr(new Employee*[Size]),lastEmpty(0){
    //cout<<"College: Param CTOR."<<endl;
}

College::~College(){
    if(ptr != nullptr)
        delete [] ptr;
    //cout<<"College: DTOR."<<endl;
    }

void College::addStuffMember(Employee* other){
    ptr[lastEmpty++] = other;
}
void College::getData(){
    for(int i = 0; i < lastEmpty;i++ ){
        cout<<ptr[i]->getData()<<endl;
    }
}
void College::putData(){
    for(int i = 0; i < lastEmpty;i++ ){
        ptr[i]->putData();
    }
}
