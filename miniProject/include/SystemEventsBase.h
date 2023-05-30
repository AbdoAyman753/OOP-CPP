#ifndef SYSTEMEVENTSBASE_H
#define SYSTEMEVENTSBASE_H
#include "EventsBase.h"

class SystemEventsBase:public EventsBase
{
    private:
        virtual void setupSystem();
    public:
        SystemEventsBase();
        virtual ~SystemEventsBase();

        virtual void executeEvent();
        virtual bool isHwEvent();
};

#endif // SYSTEMEVENTSBASE_H
