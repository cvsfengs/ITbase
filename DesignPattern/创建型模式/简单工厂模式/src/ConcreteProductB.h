#ifndef CONCRETEPRODUCTB_H_
#define CONCRETEPRODUCTB_H_
#include "Product.h"
class ConcreteProductB : public Product
{

public:
	ConcreteProductB();
	virtual ~ConcreteProductB();
	
	virtual void Use();

};
#endif
