#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

#include "AbstractProductA.h"
#include "AbstractProductB.h"
class AbstractFactory
{

public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProductA * createProductA() = 0;
	virtual AbstractProductB * createProductB() = 0;

};
#endif
