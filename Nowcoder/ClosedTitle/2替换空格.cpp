//请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy

//思路:越在数组前面修改开销越大,从后往前排列
//数组扩容:原容量+2*空格数
//复杂度N 
int main(){return 0;}
class Solution {
public:
        int count=0;
        for(int i=0, j=0;i<length;i++){
            if(str[i]==' '){
                temp[j++]=i;
                ++count;
            }
        }
        
        int newLength=length+count*2;
        for(int i=length-1,j=newLength-1;i>=0;i--){
            if(str[i]!=' '){
                str[j--]=str[i];
            }else{
                str[j--]='0';
                str[j--]='2';
                str[j--]='%';
            }
        }
	}
};
