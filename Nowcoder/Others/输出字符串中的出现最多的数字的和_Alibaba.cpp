//写段代码，定义一个字符串常量，字符串中只有大小写字母和整数，输出字符串中的出现最多的数字的和？例如 ” 9fil3dj11P0jAsf11j ” 中出现最多的是11两次，输出22
//#include <stoi.h>

#include <map>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int calculateMax(string s){
    int maxCount=0;
    int maxVal=0;
    vector<string> vec;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            string temp="";
            while(i<s.length() && s[i]>='0' && s[i]<='9'){
                temp+=s[i++];
            }
            vec.push_back(temp);
        }
    }

    if(vec.empty()){
        return 0;
    }else{
        map<string,int> mMap;


        for(string& str:vec){
            int key=stoi(str);
            if(mMap.find(str)!=mMap.end()){
                ++mMap[str];
            }else{
                mMap.insert(pair<string,int>(str,1));
            }
            if(maxCount<mMap[str]){
                maxCount=mMap[str];
                maxVal=key;
            }

        }
    }
    return maxVal*maxCount;
}

using namespace std;
int main(){
    string s;
    cin>>s;
    cout << calculateMax(s) << endl;
    return 0;
}

