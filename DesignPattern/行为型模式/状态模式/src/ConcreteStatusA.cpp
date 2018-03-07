#include "ConcreteStatusA.h"
#include "ConcreteStatusB.h"
#include "Context.h"
#include <iostream>
using namespace std;

Status * ConcreteStatusA::m_pStatus = NULL;
ConcreteStatusA::ConcreteStatusA(){
}

ConcreteStatusA::~ConcreteStatusA(){
}

Status * ConcreteStatusA::Instance()
{
    if ( NULL == m_pStatus)
    {
        m_pStatus = new ConcreteStatusA();
    }
    return m_pStatus;
}

void ConcreteStatusA::handle(Context * c){
    cout << "doing something in Status A.\n done,change state to B" << endl;
    c->changeStatus(ConcreteStatusB::Instance());
}
