#ifndef CONCRETECOLLEAGUEA_H
#define CONCRETECOLLEAGUEA_H
#include "Colleague.h"

class ConcreteColleagueA : public Colleague
{

public:
    ConcreteColleagueA();
    virtual ~ConcreteColleagueA();

    virtual void sendmsg(int toWho,string str);
    virtual void receivemsg(string str);

};
#endif // CONCRETECOLLEAGUEA_H
