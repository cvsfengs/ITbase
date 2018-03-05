#include <iostream>
#include "src/ConcreteCommand.h"
#include "src/Invoker.h"
#include "src/Receiver.h"

using namespace std;

int main(int argc, char *argv[])
{
    Receiver * pReceiver = new Receiver();
    ConcreteCommand * pCommand = new ConcreteCommand(pReceiver);
    Invoker * pInvoker = new Invoker(pCommand);
    pInvoker->call();

    delete pReceiver;
    delete pCommand;
    delete pInvoker;
    return 0;
}
