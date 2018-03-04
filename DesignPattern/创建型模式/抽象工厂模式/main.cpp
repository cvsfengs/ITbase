#include <iostream>
#include "src/AbstractFactory.h"
#include "src/AbstractProductA.h"
#include "src/AbstractProductB.h"
#include "src/ConcreteFactory1.h"
#include "src/ConcreteFactory2.h"
using namespace std;

int main(int argc, char *argv[])
{
    AbstractFactory * fc = new ConcreteFactory1();
    AbstractProductA * pa =  fc->createProductA();
    AbstractProductB * pb = fc->createProductB();
    pa->use();
    pb->eat();

    AbstractFactory * fc2 = new ConcreteFactory2();
    AbstractProductA * pa2 =  fc2->createProductA();
    AbstractProductB * pb2 = fc2->createProductB();
    pa2->use();
    pb2->eat();

    delete fc;
    delete pa;
    delete pb;
    delete fc2;
    delete pa2;
    delete pb2;

    return 0;
}
