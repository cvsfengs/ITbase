#ifndef PRODUCTB2_H
#define PRODUCTB2_H

#include "AbstractProductB.h"
#include <iostream>
using namespace std;
class ProductB2 : public AbstractProductB
{

public:
    ProductB2();
    virtual ~ProductB2();

    void eat();

};

#endif // PRODUCTB2_H
