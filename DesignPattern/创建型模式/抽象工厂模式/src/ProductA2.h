#ifndef PRODUCTA2_H
#define PRODUCTA2_H


#include "AbstractProductA.h"
#include <iostream>
using namespace std;
class ProductA2 : public AbstractProductA
{

public:
    ProductA2();
    virtual ~ProductA2();

    void use();

};
#endif // PRODUCTA2_H
