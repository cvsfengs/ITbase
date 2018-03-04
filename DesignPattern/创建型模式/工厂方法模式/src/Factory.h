#ifndef FACTORY_H_
#define FACTORY_H_
#include "Product.h"

class Factory
{

public:
	Factory();
	virtual ~Factory();
	virtual Product* factoryMethod();
};
#endif
