#ifndef UNSHAREDFLYWEIGHT_H
#define UNSHAREDFLYWEIGHT_H

#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{

public:
    UnsharedConcreteFlyweight();
    virtual ~UnsharedConcreteFlyweight();

    void operation();

private:
    int allState;

};

#endif // UNSHAREDFLYWEIGHT_H
