#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include "Flyweight.h"
#include <map>
#include <string>
using namespace std;

class FlyweightFactory
{

public:
    FlyweightFactory();
    virtual ~FlyweightFactory();

    Flyweight*  getFlyweight(string str);

private:
    map<string,Flyweight*> m_mpFlyweight;

};
#endif // FLYWEIGHTFACTORY_H
