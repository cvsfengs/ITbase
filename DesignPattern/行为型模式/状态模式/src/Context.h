#ifndef CONTEXT_H
#define CONTEXT_H


#include "Status.h"

class Context
{

public:
    Context();
    virtual ~Context();

    void changeStatus(Status * st);
    void request();

private:
    Status *m_pStatus;
};
#endif // CONTEXT_H
