#ifndef CONCRETECOLLEAGUEB_H
#define CONCRETECOLLEAGUEB_H

#include "Colleague.h"

class ConcreteColleagueB : public Colleague
{

public:
    ConcreteColleagueB();
    virtual ~ConcreteColleagueB();

    virtual void sendmsg(int toWho,string str);
    virtual void receivemsg(string str);
};
#endif // CONCRETECOLLEAGUEB_H
