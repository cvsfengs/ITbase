#ifndef CONCRETEPRODUCT_H_
#define CONCRETEPRODUCT_H_
#include "Product.h"

class ConcreteProduct : public Product
{

public:
	ConcreteProduct();
	virtual ~ConcreteProduct();
	virtual void use();
};

#endif
