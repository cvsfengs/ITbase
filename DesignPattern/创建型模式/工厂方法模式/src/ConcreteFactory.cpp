#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

ConcreteFactory::ConcreteFactory(){

}


ConcreteFactory::~ConcreteFactory(){

}

Product* ConcreteFactory::factoryMethod(){
	return  new ConcreteProduct();
}

