
#include <iostream>
#include "src/ConcreteFlyweight.h"
#include "src/FlyweightFactory.h"
#include "src/Flyweight.h"
using namespace std;

int main(int argc, char *argv[])
{
    FlyweightFactory factory;
    Flyweight * fw = factory.getFlyweight("one");
    fw->operation();

    Flyweight * fw2 = factory.getFlyweight("two");
    fw2->operation();
    //aready exist in pool
    Flyweight * fw3 = factory.getFlyweight("one");
    fw3->operation();
    return 0;
}
