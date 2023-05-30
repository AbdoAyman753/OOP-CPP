#include "SystemShutdown.h"
#include <iostream>
using namespace std;
SystemShutdown::SystemShutdown():SystemEventsBase(),priority(Low)
{
    //ctor
}

SystemShutdown::~SystemShutdown()
{
    //dtor
}

void SystemShutdown::setupSystem(){
    cout<<"System Shutdown executing..."<<endl;
}

void SystemShutdown::executeEvent(){
    this->SystemShutdown::setupSystem();
}

int SystemShutdown::getPriority()const {
    return priority;
}

