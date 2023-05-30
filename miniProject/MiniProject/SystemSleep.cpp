#include "SystemSleep.h"
#include <iostream>
using namespace std;
SystemSleep::SystemSleep():SystemEventsBase(),priority(High)
{
    //ctor
}

SystemSleep::~SystemSleep()
{
    //dtor
}

void SystemSleep::setupSystem(){
    cout<<"System sleep executing..."<<endl;
}

void SystemSleep::executeEvent(){
    this->SystemSleep::setupSystem();
}

int SystemSleep::getPriority()const {
    return priority;
}
