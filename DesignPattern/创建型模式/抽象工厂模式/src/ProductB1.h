#ifndef PRODUCTB1_H
#define PRODUCTB1_H
#include "AbstractProductB.h"
#include <iostream>
using namespace std;
class ProductB1 : public AbstractProductB
{

public:
    ProductB1();
    virtual ~ProductB1();

    void eat();

};
#endif // PRODUCTB1_H
