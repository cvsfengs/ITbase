#ifndef COLLEAGUE_H
#define COLLEAGUE_H
#include "Mediator.h"
#include <string>
using namespace std;

class Colleague
{

public:
    Colleague();
    virtual ~Colleague();

    virtual void receivemsg(string str);
    virtual void sendmsg(int toWho,string str);
    void setMediator(Mediator * aMediator);
protected:
    Mediator * m_pMediator;

};
#endif // COLLEAGUE_H
