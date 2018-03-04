#ifndef DECORATOR_H
#define DECORATOR_H
#include "Component.h"

class Decorator : public Component
{

public:
    Decorator(Component* pcmp);
    virtual ~Decorator();

    virtual void operation();

private:
    Component * m_pComponent;
};


#endif // DECORATOR_H
