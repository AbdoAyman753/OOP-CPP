#include "Comparator.h"

Comparator::Comparator()
{
    //ctor
}

Comparator::~Comparator()
{
    //dtor
}

bool Comparator::operator()(EventsBase* ob1,EventsBase* ob2)const{
    return ob1->getPriority() < ob2->getPriority();
}
