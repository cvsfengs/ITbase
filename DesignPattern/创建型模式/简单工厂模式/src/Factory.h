#ifndef FACTORY_H_
#define FACTORY_H_
#include "Product.h"
#include <string>
using namespace std;

class Factory
{

public:
	Factory();
	virtual ~Factory();

	static Product * createProduct(string proname);

};

#endif
