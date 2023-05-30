#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include "HardwareEventsBase.h"
#include "SystemEventsBase.h"
#include "Comparator.h"
#include <iostream>
#include <queue>
#include <thread>
using namespace std;

class EventManager
{
    private:
        bool runFlag;
        EventManager();
        priority_queue<HardwareEventsBase*,vector<HardwareEventsBase*>,Comparator> HardwareEventsPQ;
        priority_queue<SystemEventsBase*,vector<SystemEventsBase*>,Comparator> SystemEventsPQ;
        thread* HwThread;
        thread* SysThread;

        void hardwareLoop();
        void systemLoop();

    public:

        virtual ~EventManager();
        static EventManager& getInstance();
        void postEvent(EventsBase* object);
        void startHandlingEvents();
        void stopHandlingEvents();
};

#endif // EVENTMANAGER_H
