#ifndef SYSTEMSHUTDOWN_H
#define SYSTEMSHUTDOWN_H
#include "SystemEventsBase.h"

class SystemShutdown:public SystemEventsBase
{
    private:
        Priority priority;
        virtual void setupSystem();
    public:
        SystemShutdown();
        virtual ~SystemShutdown();
        virtual void executeEvent();

        virtual int getPriority()const;
};

#endif // SYSTEMSHUTDOWN_H
