//问题：
//给定一个字符串s，你可以从中删除一些字符，使得剩下的串是一个回文串。如何删除才能使得回文串最长呢？
//输出需要删除的字符个数。
//输入描述：
//输入数据有多组，每组包含一个字符串s，且保证:1<=s.length<=1000.
//输出描述：
//对于每组数据，输出一个整数，代表最少需要删除的字符个数。


#include<string>
#include<algorithm>
using namespace std;
const int MAX = 1001;

int main(){
    string s;
    while(cin>>s){
        if(s.length()==1){
            cout<<1<<endl;
            continue;
        }

        int max[MAX+1][MAX+1];
        string s1=s;
        reverse(s1.begin(),s1.end());
        for(int i=0;i<=s.length();i++){
            max[0][i]=0;//??
        }
        for(int i=0;i<=s.length();i++){
            max[i][0]=0;
        }

        for(int i=1;i<=s.length();i++){
            for(int j=1;j<=s1.length();j++){
                if(s[i-1]==s1[j-1]){
                    max[i][j]=max[i-1][j-1]+1;
                }else{
                    max[i][j]=max[i][j-1]>max[i-1][j]?max[i][j-1]:max[i-1][j];
                }
            }
        }
        cout << s.length()- max[s.length()][s1.length()]<<endl;
    }
    return 0;
}
