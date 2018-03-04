#include <iostream>
#include "src/ConcreteComponent.h"
#include "src/ConcreteDecoratorA.h"
#include "src/ConcreteDecoratorB.h"
#include "src/Component.h"
using namespace std;

int main(int argc, char *argv[])
{
    ConcreteComponent * pRealProd = new ConcreteComponent();
    //动态增加行为
    Component * pA = new ConcreteDecoratorA(pRealProd);
    pA->operation();
    //继续动态增加行为
    Component * pB = new ConcreteDecoratorB(pA);
    pB->operation();

    delete pRealProd;
    delete pA;
    delete pB;
    return 0;
}
