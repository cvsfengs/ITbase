#ifndef PRODUCTA1_H
#define PRODUCTA1_H
#include "AbstractProductA.h"
#include <iostream>
using namespace std;
class ProductA1 : public AbstractProductA
{

public:
    ProductA1();
    virtual ~ProductA1();

    void use();

};

#endif // PRODUCTA1_H
