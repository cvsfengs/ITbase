#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorB : public Decorator
{

public:
        ConcreteDecoratorB(Component* pcmp);
        virtual ~ConcreteDecoratorB();

        void addBehavior();
        virtual void operation();

};
