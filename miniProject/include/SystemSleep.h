#ifndef SYSTEMSLEEP_H
#define SYSTEMSLEEP_H
#include "SystemEventsBase.h"

class SystemSleep:public SystemEventsBase
{
    private:
        Priority priority;
        virtual void setupSystem();
    public:
        SystemSleep();
        virtual ~SystemSleep();


        virtual void executeEvent();

        virtual int getPriority()const;
};

#endif // SYSTEMSLEEP_H
