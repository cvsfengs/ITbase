#ifndef REALSUBJECT_H
#define REALSUBJECT_H

#include "Subject.h"

class RealSubject : public Subject
{

public:
    RealSubject();
    virtual ~RealSubject();

    void request();

};
#endif // REALSUBJECT_H
