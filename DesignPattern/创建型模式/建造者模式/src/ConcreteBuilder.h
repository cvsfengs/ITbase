#ifndef CONCRETEBUILDER_H_
#define CONCRETEBUILDER_H_
#include "Builder.h"
class ConcreteBuilder : public Builder{
public:
    ConcreteBuilder();
    virtual ~ConcreteBuilder();

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();
};

#endif
