#include "HardwareSendPacket.h"
#include <iostream>
using namespace std;
HardwareSendPacket::HardwareSendPacket():priority(High)
{
    //ctor
}

HardwareSendPacket::~HardwareSendPacket()
{
    //dtor
}

void HardwareSendPacket::setupHardware(){
    cout<<"HardwareSendPacket is executing..."<<endl;
}

void HardwareSendPacket::executeEvent(){
    this->HardwareSendPacket::setupHardware();
}
int HardwareSendPacket::getPriority()const{
    return priority;
}



