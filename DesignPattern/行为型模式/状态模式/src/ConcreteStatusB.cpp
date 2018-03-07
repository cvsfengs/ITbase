#include "ConcreteStatusB.h"
#include "ConcreteStatusA.h"
#include "Context.h"
#include <iostream>
using namespace std;

Status * ConcreteStatusB::m_pStatus = NULL;
ConcreteStatusB::ConcreteStatusB(){

}

Status * ConcreteStatusB::Instance()
{
    if ( NULL == m_pStatus)
    {
        m_pStatus = new ConcreteStatusB();
    }
    return m_pStatus;
}

ConcreteStatusB::~ConcreteStatusB(){

}

void ConcreteStatusB::handle(Context * c){
    cout << "doing something in Status B.\n done,change state to A" << endl;
    c->changeStatus(ConcreteStatusA::Instance());
}
