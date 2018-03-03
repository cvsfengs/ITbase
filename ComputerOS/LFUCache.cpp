#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

struct Node{
	int key;
    int value;
    list<struct FreqList>::iterator parent;
};

struct FreqList{
    list<struct Node> FList;
    int Freq;
};

class LFUCache{
    list<struct FreqList> CacheList;
    unordered_map<int,list<struct Node>::iterator> hash_map;
    int size;//cache max size
    int capacity;
public:
    LFUCache(int);
    void put(int,int);
    void display();
};

int main(){
	LFUCache ca(4);

   return 0;
}

LFUCache::LFUCache(int capacity):capacity(capacity),size(0)
{
    struct FreqList flst;
    flst.Freq=1;
    CacheList.push_front(flst);
}


void LFUCache::put(int key,int value){
    if(capacity<=0){
        return;
    }
    unordered_map<int,list<struct Node>::iterator>::iterator got;
    list<struct FreqList>::reverse_iterator clst_rit;
    list<struct FreqList>::iterator clst_it;
    list<struct Node>::iterator nd_it;
    
    struct Node nd;
    nd.key=key;
    nd.value=value;
    got=hash_map.find(key);
    if(got!=hash_map.end()){
        int current_freq,pre_freq;
        nd_it=hash_map[key];
        clst_it=nd_it->parent;
        current_freq=clst_it->Freq;
        list<struct FreqList>::iterator current_clst_it;
        current_clst_it=clst_it;
        if(clst_it!=CacheList.begin()){
            --clst_it;
        }
        pre_freq=clst_it->Freq;

        current_clst_it->FList.erase(nd_it);
        if(pre_freq==current_freq+1){
            nd.parent=clst_it;
            clst_it->FList.push_front(nd);
        }
        
        if(current_clst_it->FList.size()==0){
            CacheList.erase(current_clst_it);
        }
        
        hash_map[key]=clst_it->FList.begin();
    }else if(size<capacity){
        clst_rit=CacheList.rbegin();
        if(clst_rit->Freq!=1){
            struct FreqList flst_tmp;
            flst_tmp.Freq=1;
            CacheList.push_back(flst_tmp);
            clst_rit=CacheList.rbegin();
        }
        nd.parent=CacheList.end();
        nd.parent--;
        clst_rit->FList.push_front(nd);

        hash_map[key]=clst_rit->FList.begin();
        size++;
    }else{
    //Cache中不存在，且Cache已满，寻找合适位置替换即可
        list<struct FreqList>::reverse_iterator flst_last_rit;
        list<struct Node>::reverse_iterator nd_last_rit;
		flst_last_rit=CacheList.rbegin();
        nd_last_rit=flst_last_rit->FList.rbegin();
        int delete_key=nd_last_rit->key;
        clst_rit=CacheList.rbegin();
        if(clst_rit->Freq!=1){
            struct FreqList flst_tmp;
            flst_tmp.Freq=1;
            CacheList.push_back(flst_tmp);
            clst_rit=CacheList.rbegin();
        }
        nd.parent=CacheList.end();
        nd.parent--;
        clst_rit->FList.push_front(nd);
        

        list<struct FreqList>::iterator parent;
        list<struct Node>::iterator nd_delete_it;
        nd_delete_it=hash_map[delete_key];
        parent=nd_delete_it->parent;
        parent->FList.erase(nd_delete_it);
        if(parent->FList.size()==0){
            CacheList.erase(parent);
        }
        hash_map[key]=clst_rit->FList.begin();
    }
}

void display(){

}
