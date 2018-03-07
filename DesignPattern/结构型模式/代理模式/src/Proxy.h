#ifndef PROXY_H
#define PROXY_H
#include "RealSubject.h"
#include "Subject.h"

class Proxy : public Subject
{

public:
    Proxy();
    virtual ~Proxy();

    void request();

private:
    void afterRequest();
    void preRequest();
    RealSubject *m_pRealSubject;

};

#endif // PROXY_H
