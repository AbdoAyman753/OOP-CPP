#ifndef HARDWARERECEIVEPACKET_H
#define HARDWARERECEIVEPACKET_H
#include "HardwareEventsBase.h"

class HardwareReceivePacket:public HardwareEventsBase
{
    private:
        Priority priority;
        virtual void setupHardware();
    public:
        HardwareReceivePacket();
        virtual ~HardwareReceivePacket();

        virtual void executeEvent();


        virtual int getPriority()const;
};

#endif // HARDWARERECEIVEPACKET_H
