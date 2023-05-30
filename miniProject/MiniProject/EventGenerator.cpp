#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "EventGenerator.h"
#include "HardwareSendPacket.h"
#include "HardwareReceivePacket.h"
#include "SystemShutdown.h"
#include "SystemSleep.h"
#include "SystemWakeup.h"
#include <cstdlib>
EventGenerator::EventGenerator(int freq):frequency(freq)
{
    //ctor
}

EventGenerator::~EventGenerator()
{
    //dtor
}

void EventGenerator::generationStart(){
    cout<<"Generation Thread is Running: "<<endl;
    while(!EventGenerator::stopFlag){
            EventsBase* tempObj = this->generateRandomEvent();
            //cout<<tempObj->getPriority()<<endl;
            evntMan->postEvent(tempObj);
            sleep(1/frequency);
    }
}

void EventGenerator::start(){
    cout<<"start Generating random events!"<<endl;
    EventGenerator::stopFlag = false;
    EventGenerator::genThread = new thread(&EventGenerator::generationStart,this);
}
void EventGenerator::stop(){
    cout<<"stop Generating random events!"<<endl;
    EventGenerator::stopFlag = true;
    genThread->join();
    delete genThread;
}
void EventGenerator::setEventManager(EventManager* object){
    cout<<"Event Generator : Event Manager Linked!"<<endl;
    EventGenerator::evntMan = object;
}

EventsBase* EventGenerator::generateRandomEvent(){
    cout<<"Randomizing..."<<endl;
    int temp = static_cast<int>(rand()%5);
    EventsBase* tempObj;
        switch(temp){
            case 0:{
                tempObj = new HardwareSendPacket;
                break;}
            case 1:{
                tempObj = new HardwareReceivePacket;
                break;}
            case 2:{
                tempObj = new SystemShutdown;
                break;}
            case 3:{
                tempObj = new SystemSleep;
                break;}
            case 4:{
                tempObj = new SystemWakeup;
                break;}
            default:{
                break;}
        }
        return tempObj;
}
