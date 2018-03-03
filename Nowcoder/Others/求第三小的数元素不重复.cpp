//问题：度度熊想去商场买一顶帽子，商场里有N顶帽子，有些帽子的价格可能相同。度度熊想买一顶价格第三便宜的帽子，问第三便宜的帽子价格是多少？

//题意模糊点：第三便宜不是第三大！！

#include <iostream>
using namespace std;

int Min3_1(){
    int n,result=-1,t=0,sync=0;
    int price[1000]={0};
    cin >> n;
    while(n--){
        cin >> t;
        price[t]=1;
    }
    
    for(int i=0;i<1000;i++){
        if(price[i] && sync<3){
            ++sync;
            if(sync==3){
                result=i;
                break;
            }            
        }
    }
    
    return t=(t==-1?-1:result);
}

int main(){
    cout << Min3_1()<<endl;
    return 0;
}
