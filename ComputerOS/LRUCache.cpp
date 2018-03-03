#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRUCache{
	list<int> dq;
    
    //store 
    unordered_map<int,list<int>::iterator> ma;
    //maximum capacity of cache
    int csize;
public:
    LRUCache(int);
    void refer(int);
    void display();
};

LRUCache::LRUCache(int n){
    csize=n;
}

//更新原有数据不用从哈希表中移除；
//插入操作
void LRUCache::refer(int x){
    if(ma.find(x)==ma.end()){
        //增加数据到已满的记录表中需要从哈希表中移除最近最少使用的元素，往列表增加新数据
        if(dq.size()==csize){
            int last=dq.back();
            dq.pop_back();
            ma.erase(last);
        } 
    }else{
        //更新的元素删除后重放到表头，这也是用list不用dequeue的原因；
        dq.erase(ma[x]);
    }
    dq.push_front(x);
    ma[x]=dq.begin();
}

void LRUCache::display(){
    for(auto it=dq.begin();it!=dq.end();it++){
        cout << (*it) << " ";
    }
    cout << endl;
}

int main(){
    LRUCache ca(4);

	ca.refer(1);
    ca.refer(2);
    ca.refer(3);
    ca.refer(1);
    ca.refer(4);
    ca.refer(5);
    ca.display();
    return 0;
}
