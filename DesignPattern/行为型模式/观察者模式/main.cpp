
#include <iostream>
#include "src/Subject.h"
#include "src/Observer.h"
#include "src/ConcreteObserver.h"
#include "src/ConcreteSubject.h"

using namespace std;

int main(int argc, char *argv[])
{
    Subject * subject = new ConcreteSubject();
    Observer * objA = new ConcreteObserver("A");
    Observer * objB = new ConcreteObserver("B");
    subject->attach(objA);
    subject->attach(objB);

    subject->setState(1);
    subject->notify();

    cout << "--------------------" << endl;
    subject->detach(objB);
    subject->setState(2);
    subject->notify();

    delete subject;
    delete objA;
    delete objB;

    return 0;
}
