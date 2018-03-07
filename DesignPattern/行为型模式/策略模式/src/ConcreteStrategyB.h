#ifndef CONCRETESTRATEGY_H_
#define CONCRETESTRATEGY_H_

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{

public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();

    virtual void algorithm();

};
#endif
