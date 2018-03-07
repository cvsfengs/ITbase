#ifndef CONCRETESTATUSB_H
#define CONCRETESTATUSB_H


#include "Status.h"

class ConcreteStatusB : public Status
{

public:
    static Status * Instance();

    virtual ~ConcreteStatusB();

    virtual void handle(Context * c);
private:
    ConcreteStatusB();
    static Status * m_pStatus;
};
#endif // CONCRETESTATUSB_H
