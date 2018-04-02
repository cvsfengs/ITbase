// 面试题47：礼物的最大价值
// 题目：在一个m×n的棋盘的每一格都放有一个礼物，每个礼物都有一定的价值
// （价值大于0）。你可以从棋盘的左上角开始拿格子里的礼物，并每次向左或
// 者向下移动一格直到到达棋盘的右下角。给定一个棋盘及其上面的礼物，请计
// 算你最多能拿到多少价值的礼物？


#include <iostream>
using namespace std;

int getMaxValue_Solution(const int* values,int rows,int cols ){
	if(values == nullptr || rows<=0 || cols<=0){
        return 0;
	}	

    int *temp=new int[cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            int up=0;
            int left=0;

            if(i>0){
                up=temp[j];
            }
            if(j>0){
                left=temp[j-1];
            }
            temp[j]=max(left,up)+values[i*rows+j];

        }
    }
    int result=temp[cols-1];
    delete[] temp;
    return result;
}

int main(){
	int result;
    // 三行三列
    int values[][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
	result=getMaxValue_Solution((int*)values,3,3);
	cout << result << endl;
	
	return 0;
}
