#include "SystemWakeup.h"
#include <iostream>
using namespace std;
SystemWakeup::SystemWakeup():SystemEventsBase(),priority(Medium)
{
    //ctor
}

SystemWakeup::~SystemWakeup()
{
    //dtor
}

void SystemWakeup::setupSystem(){
    cout<<"System Wakeup executing..."<<endl;
}

void SystemWakeup::executeEvent(){
    this->SystemWakeup::setupSystem();
}

int SystemWakeup::getPriority()const{
    return priority;
}
