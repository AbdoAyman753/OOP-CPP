#include "EventManager.h"

EventManager::EventManager():runFlag(false)
{
    //ctor
}

EventManager::~EventManager()
{
    //dtor
}

void EventManager::hardwareLoop(){
    //cout<<"Hardware Thread is Running: "<<endl;
    while (runFlag){
        if(!EventManager::HardwareEventsPQ.empty()){
            EventManager::HardwareEventsPQ.top()->executeEvent();
            //delete EventManager::HardwareEventsPQ.top();
            EventManager::HardwareEventsPQ.pop();
           }
    }
}

void EventManager::systemLoop(){
    //cout<<"System Thread is Running: "<<endl;
    while (runFlag){
        if(!EventManager::SystemEventsPQ.empty()){
            EventManager::SystemEventsPQ.top()->executeEvent();
            //delete EventManager::SystemEventsPQ.top();
            EventManager::SystemEventsPQ.pop();
        }
    }
}

EventManager& EventManager::getInstance(){
    static EventManager object;
    return object;
}
void EventManager::postEvent(EventsBase* object){
    if(object->isHwEvent()){
            EventManager::HardwareEventsPQ.push(dynamic_cast<HardwareEventsBase*>(object));
            cout<<"Adding Hw object to queue"<<endl;
    }
    else{
            EventManager::SystemEventsPQ.push(dynamic_cast<SystemEventsBase*>(object));
            cout<<"Adding Sys object to queue"<<endl;
        }

}
void EventManager::startHandlingEvents(){
    runFlag =true;
    EventManager::HwThread = new thread (&EventManager::hardwareLoop,this);
    EventManager::SysThread = new thread (&EventManager::systemLoop,this);
}
void EventManager::stopHandlingEvents(){
    runFlag=false;
    EventManager::HwThread->join();
    EventManager::SysThread->join();
    delete HwThread;
    delete SysThread;
}
