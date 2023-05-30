#include <iostream>
#include "EventManager.h"
#include "EventGenerator.h"
using namespace std;

int main()
{
    EventManager& evntManager = EventManager::getInstance();
    EventGenerator evntGenerator(100);
    evntGenerator.setEventManager(&evntManager);
    evntGenerator.start();
    evntManager.startHandlingEvents();
    //evntGenerator.stop();
    //evntManager.stopHandlingEvents();
}
