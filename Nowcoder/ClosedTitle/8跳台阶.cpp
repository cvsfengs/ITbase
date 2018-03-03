//题目:一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

//思路:把每一步想成一段序列的一个元素,跳法数=序列数;以最后一步的角度分为2类:最后走1步和最后走2步,然后递归
//递归:从结果往回退,模拟到初始递归条件
int main(){}
class Solution {
public:
    int jumpFloor(int number) {
		if(number<3){
            return number;
        }else{
            return jumpFloor(number-2)+jumpFloor(number-1);
        }
    }
};
