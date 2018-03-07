#ifndef CONCRETESTATUSA_H
#define CONCRETESTATUSA_H
#include "Status.h"

class ConcreteStatusA : public Status
{

public:
    virtual ~ConcreteStatusA();

    static Status * Instance();

    virtual void handle(Context * c);

private:
    ConcreteStatusA();
    static Status * m_pStatus;
};
#endif // CONCRETESTATUSA_H
