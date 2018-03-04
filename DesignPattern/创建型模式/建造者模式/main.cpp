#include <iostream>
#include "src/ConcreteBuilder.h"
#include "src/Director.h"
#include "src/Builder.h"
#include "src/Product.h"

using namespace std;

int main(){
    ConcreteBuilder* builder=new ConcreteBuilder();
    Director director;
    director.setBuilder(builder);
    Product* pd=director.construct();
    pd->show();

    delete builder;
    delete pd;
    return 0;
}
