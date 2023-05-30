#ifndef HARDWAREEVENTSBASE_H
#define HARDWAREEVENTSBASE_H
#include "EventsBase.h"

class HardwareEventsBase:public EventsBase
{
    private:
        virtual void setupHardware();
    public:
        HardwareEventsBase();
        virtual ~HardwareEventsBase();

        virtual void executeEvent();
        virtual bool isHwEvent();
};

#endif // HARDWAREEVENTSBASE_H
