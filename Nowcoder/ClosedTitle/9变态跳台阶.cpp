//题目:一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

int main(){}

//和上局的思路一致:每一步看做序列的一个元素,序列数=跳法数,按最后一个元素分类为走0,1,2,...number步数
//感悟:相似的题目可以放一起总结,提高效率
class Solution {
public:
    int jumpFloorII(int number) {
		//number取0返回1,只是个人为了统一递归做的假定,测试用例不会输入number为0的参数
		//number取0的含义是什么都不做,比如:jumpFloorII(0)+最后一次跳N级,跳完N级,当然只算jumpFloorII(0)=1种跳法
		//number取1的含义是先跳一级,比如:jumpFloorII(1)+最后一次跳N-1级,跳完N级,只算jumpFloorII(1)=1种跳法
		//number取i的含义是先跳jumpFloorII(i)级,比如:jumpFloorII(i)+最后一次跳N-i级,跳完N级别,算跳了jumpFloorII(i)种
        if(number==0){
            return 1;
        }else if(number<3){
            return number;
        }else{
            int temp=0;
			//累计最后一次跳的[0,number)级情况
            for(int i=0;i<number;i++){
                temp+=jumpFloorII(i);
            }
            return temp;
        }

    }
};
