#include <iostream>
#include "src/ConcreteImplementorA.h"
#include "src/ConcreteImplementorB.h"
#include "src/RefinedAbstraction.h"
#include "src/Abstraction.h"

using namespace std;

int main(int argc, char *argv[])
{

    Implementor * pImp = new ConcreteImplementorA();
    Abstraction * pa = new RefinedAbstraction(pImp);
    pa->operation();

    Abstraction * pb = new RefinedAbstraction(new ConcreteImplementorB());
    pb->operation();

    delete pa;
    delete pb;

    return 0;
}
