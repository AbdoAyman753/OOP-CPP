#ifndef SYSTEMWAKEUP_H
#define SYSTEMWAKEUP_H
#include "SystemEventsBase.h"

class SystemWakeup:public SystemEventsBase
{
    private:
        Priority priority;
        virtual void setupSystem();
    public:
        SystemWakeup();
        virtual ~SystemWakeup();


        virtual void executeEvent();

        virtual int getPriority()const;
};

#endif // SYSTEMWAKEUP_H
