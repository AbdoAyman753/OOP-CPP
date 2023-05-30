#include "SystemEventsBase.h"
#include <iostream>
using namespace std;
SystemEventsBase::SystemEventsBase()
{
    //ctor
}

SystemEventsBase::~SystemEventsBase()
{
    //dtor
}

void SystemEventsBase::setupSystem(){
    cout<<"setup System executing..."<<endl;
}
void SystemEventsBase::executeEvent(){
    this->SystemEventsBase::setupSystem();
}
bool SystemEventsBase::isHwEvent(){
    return false;
}
