
#include "Context.h"
#include "ConcreteStatusA.h"

Context::Context(){
    //default is a
    m_pStatus = ConcreteStatusA::Instance();
}

Context::~Context(){
}

void Context::changeStatus(Status * st){
    m_pStatus = st;
}

void Context::request(){
    m_pStatus->handle(this);
}
