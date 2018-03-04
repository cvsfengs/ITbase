#ifndef CONCRETEFACTORY_H_
#define CONCRETEFACTORY_H_

#include "Product.h"
#include "Factory.h"

class ConcreteFactory : public Factory
{
public:
	ConcreteFactory();
	virtual ~ConcreteFactory();
	virtual Product* factoryMethod();
};

#endif
