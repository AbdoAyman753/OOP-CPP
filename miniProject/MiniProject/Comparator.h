#ifndef COMPARATOR_H
#define COMPARATOR_H
#include "EventsBase.h"

class Comparator
{
    public:
        Comparator();
        virtual ~Comparator();

        bool operator()(EventsBase* ob1,EventsBase* ob2)const;

};

#endif // COMPARATOR_H
