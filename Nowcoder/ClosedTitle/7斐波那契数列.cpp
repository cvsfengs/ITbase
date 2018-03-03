//题目:斐波那契数列的编程实现
//思路一:递归 浪费大量栈空间
//思路二:循环 迭代计算的结果可以作为下一次迭代的输入 时间复杂度N 空间复杂度1
int main(){}

class Solution {
public:
    int Fibonacci(int n) {
        if(n<=0)
            return 0;
        else if(n==1 || n==2) 
            return 1;
        else{
            return Fibonacci(n-1)+Fibonacci(n-2);
        }        
    }
};

class Solution1{
public:
    int Fibonacci(int n) {
		//第一个被加数
		int prepreNum=0;
		//第二个被加数
		int preNum=1;
		int result;
		
		if(n<2){
			return n;
		}		

		// 每次迭代更新被加数
		for(int i=2;i<=n;i++){
			result=preNum+prepreNum;
			prepreNum=preNum;
			preNum=result;
		}
		return result;
    }
};

