#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;


int removeMid(const int& a,const int& b,const int& c){
    return abs(a-b)+abs(b-c)-abs(a-c);
}

int main(){

    int N;
    cin >> N;
    vector<int> vec(N);
    for(int& i:vec){
        cin >> i;
    }
    if(N<3){
        return -1;
    }

    int distance=0;
    for(int i=1;i<N;i++){
        distance+=abs(vec[i]-vec[i-1]);
    }

    vector<int> removePoint(N);
    for(int i=0;i<N-2;i++){
        removePoint[i]=removeMid(vec[i],vec[i+1],vec[i+2]);
    }

        //min_element
    auto  max=max_element(std::begin(removePoint),std::end(removePoint));
    cout<<distance-*max<<endl;
    return 0;
}

