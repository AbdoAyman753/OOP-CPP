#ifndef EVENTGENERATOR_H
#define EVENTGENERATOR_H
#include "EventsBase.h"
#include "EventManager.h"
#include <thread>

class EventGenerator
{
    private:
        int frequency;
        EventManager* evntMan;
        thread* genThread;
        bool stopFlag;
        void generationStart();
        EventsBase* generateRandomEvent();

    public:
        EventGenerator(int freq);
        virtual ~EventGenerator();

        void start();
        void stop();
        void setEventManager(EventManager* object);



};

#endif // EVENTGENERATOR_H
