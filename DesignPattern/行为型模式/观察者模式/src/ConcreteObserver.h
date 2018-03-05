#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H
#include "Observer.h"
#include <string>
using namespace std;

class ConcreteObserver : public Observer
{

public:
    ConcreteObserver(string name);
    virtual ~ConcreteObserver();
    virtual void update(Subject * sub);

private:
    string m_objName;
    int m_ObserverState;
};
#endif // CONCRETEOBSERVER_H
