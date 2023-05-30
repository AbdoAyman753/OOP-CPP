#include "HardwareReceivePacket.h"
#include <iostream>
using namespace std;
HardwareReceivePacket::HardwareReceivePacket():HardwareEventsBase(),priority(Low)
{
    //ctor
}

HardwareReceivePacket::~HardwareReceivePacket()
{
    //dtor
}
void HardwareReceivePacket::setupHardware(){
    cout<<"HardwareReceivePacket is executing..."<<endl;
}

void HardwareReceivePacket::executeEvent(){
    this->HardwareReceivePacket::setupHardware();
}

int HardwareReceivePacket::getPriority()const{
    return priority;
}
