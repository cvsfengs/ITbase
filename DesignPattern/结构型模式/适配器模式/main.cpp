#include <iostream>
#include "src/Adapter.h"
#include "src/Adaptee.h"
#include "src/Target.h"

using namespace std;

int main(int argc, char *argv[])
{
    Adaptee * adaptee  = new Adaptee();
    Target * tar = new Adapter(adaptee);
    tar->request();

    return 0;
}
