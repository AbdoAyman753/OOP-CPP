#include "HardwareEventsBase.h"
#include <iostream>
using namespace std;
HardwareEventsBase::HardwareEventsBase()
{
    //ctor
}

HardwareEventsBase::~HardwareEventsBase()
{
    //dtor
}
void HardwareEventsBase::setupHardware(){
    cout<<"setup Hardware executing..."<<endl;
}
void HardwareEventsBase::executeEvent(){
    this->HardwareEventsBase::setupHardware();
}

bool HardwareEventsBase::isHwEvent(){
    return true;
}

