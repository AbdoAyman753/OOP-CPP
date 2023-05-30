#ifndef HARDWARESENDPACKET_H
#define HARDWARESENDPACKET_H
#include "HardwareEventsBase.h"

class HardwareSendPacket:public HardwareEventsBase
{
    private:
        Priority priority;
        virtual void setupHardware();
    public:
        HardwareSendPacket();
        virtual ~HardwareSendPacket();

        virtual void executeEvent();
        virtual int getPriority()const;
};

#endif // HARDWARESENDPACKET_H
