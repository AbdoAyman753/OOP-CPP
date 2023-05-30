#ifndef EVENTSBASE_H
#define EVENTSBASE_H

enum Priority{
    Low,
    Medium,
    High
};

class EventsBase
{
    public:
        EventsBase();
        virtual ~EventsBase();
        virtual void executeEvent() = 0;
        virtual int getPriority()const = 0;
        virtual bool isHwEvent() = 0;
};

#endif // EVENTSBASE_H
