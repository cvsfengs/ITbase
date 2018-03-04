#include "src/Singleton.h"
#include <iostream>
using namespace std;
int main(){
	Singleton * sg = Singleton::getInstance();
	sg->singletonOperation();
	Singleton * sg1 = Singleton::getInstance();

    if(sg!=sg1){
        cout << "not single class" <<endl;
    }else{
        cout << "is single class"<<endl;
    }
    return 0;
}
