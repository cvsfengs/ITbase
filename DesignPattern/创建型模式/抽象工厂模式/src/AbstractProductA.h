#ifndef ABSTRACTPRODUCTA_H_
#define ABSTRACTPRODUCTA_H_
class AbstractProductA
{

public:
	AbstractProductA();
	virtual ~AbstractProductA();

	virtual void use() = 0;
};

#endif
