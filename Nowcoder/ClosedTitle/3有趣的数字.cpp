#include <iostream>
#include <map>
#include <utility>
using namespace std;
// 用一个map来存储输入的数，当存在相同的数时不插入新的数，而是将计数值+1
int main()
{
    int num;
    while(cin>>num)
    {
        map<int,int> myMap;
        bool flag = false;
        for(int i = 0; i < num ; i++)
        {
            int k ;
            cin>>k;
            map<int,int>::iterator ite;
            ite = myMap.find(k);
            if(ite != myMap.end())
            {    (*ite).second++;flag = true;}
            else
            {
                myMap.insert(make_pair(k,1));
            }
        } // end of for 读取输入的数据
        map<int,int>::iterator ite = myMap.begin();
        int min =0;
        int minv = -1;
        if(flag)  //如果存在相同的数
        {
            for( ; ite!= myMap.end(); ite++)
            {
                if((*ite).second > 1)
                    min += ((*ite).second * ((*ite).second -1 ))/2;
            } //最小差元组对数等于所有相等的数构成的元组对
        }
            else
        {
            for( map<int,int>::iterator ite2 = (++myMap.begin()); (ite2)!= myMap.end(); ite2++,ite++ )
            {
                int k = (*(ite2)).first - (*(ite)).first;
                if( minv ==-1 || k < minv )
                { min = (*ite).second * (*ite2).second ;
                    minv = k; }
                else if(minv == k)
                {
                    min+= (*ite).second * (*ite2).second;
                }
            }  // end of for 求不存在相等的值时的最小差的元组对数
        }// 最小对的个数
        int max;
        if( (*myMap.rbegin()).first != (*myMap.begin()).first)
            max = (*myMap.rbegin()).second * (*myMap.begin()).second;
        else
            max = (*myMap.rbegin()).second *((*myMap.rbegin()).second-1)/2;//最大差的对数
        cout<< min<<" "<<max<<endl;

    }
}
