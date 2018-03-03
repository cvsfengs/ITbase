//[编程题] 算法基础-字符移位
//问题描述:
//小Q最近遇到了一个难题：把一个字符串的大写字母放到字符串的后面，各个字符的相对位>置不变，且不能申请额外的空间。
//输入描述:
//输入数据有多组，每组包含一个字符串s，且保证:1<=s.length<=1000.
//输出描述:
//对于每组数据，输出移位后的字符串。

#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        if(s.length() >= 1 && s.length() <= 1000){
            for(int i=0;i<s.length();i++){
                for(int j=0;j<s.length()-1;j++){
                    if(s[j]>='A' && s[j]<='Z' && s[j+1]>='a' && s[j+1]<='z' ){
                        swap(s[j],s[j+1]);
                    }
                }
            }
            cout << s << endl;//刷新缓冲区
        }
    }
    return 0;
}

