
#include "ConcreteColleagueB.h"
#include <iostream>
using namespace std;


ConcreteColleagueB::ConcreteColleagueB(){

}



ConcreteColleagueB::~ConcreteColleagueB(){

}

void ConcreteColleagueB::sendmsg(int toWho,string str){
    cout << "send msg from colleagueB,to:" << toWho << endl;
    m_pMediator->operation(toWho,str);
}

void ConcreteColleagueB::receivemsg(string str){
    cout << "ConcreteColleagueB reveivemsg:" << str <<endl;
}
