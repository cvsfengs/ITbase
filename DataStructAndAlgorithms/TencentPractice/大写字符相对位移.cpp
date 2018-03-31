#include <iostream>
#include <string>
using namespace std;

//
bool isUpper(char ch){
    if(ch>='a' && ch<='z'){
        return false;
    }else if(ch>='A' && ch<='Z'){
        return true;
    }
    exit(-1);
}

void swap(int* a, int* b){
    cout << "swap" << endl;
    if(*a==*b)
        return;
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    string s;
    while( cin >> s){
        if(s.length()<=1){
            cout << s << endl;
        }else{
            int prevUp=s.length()-1;
            while(!isUpper(s[prevUp])){
                --prevUp;
                if(prevUp==-1){
                    break;
                }
            }
            for(int i=prevUp;i<s.length()-1;i++){
                swap(s[i],s[i+1]);
            }
            prevUp=s.length()-1;
            int Up=prevUp-1;

            while(Up>=0){
                while(!isUpper(s[Up])){
                    --Up;
                    if(Up==-1){
                        break;
                    }
                }
                for(int i=Up;i<prevUp-1&&i>-1;i++){
                    swap(s[i],s[i+1]);
                }
                --prevUp;
                --Up;
            }
            cout << s << endl;
        }

    }
    return 0;
}

