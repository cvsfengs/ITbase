//题目:把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

//思路一:暴力冒泡排序
//思路二:二分查找的思想,缩小左右边界:旋转分界处分为两个递增数组,且存在明显的大小关系
//怎么缩小?见核心代码:rotateArray[left] 与 rotateArray[mid]比较
//如果旋转后第一个元素较中间大:第一个元素位于大数组,中间元素位于小数组
//如果旋转后第一个元素较中间小:第一个元素位于大数组,第二个元素也位于大数组,但在第一个元素右边
//查找的缺陷:出现中间左边右边都相等的情况,只能遍历搜索


#include <vector>
using namespace std;
int main(){return 0;}

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {

        int size = rotateArray.size();
        if(size==0){
            return 0;
        }

        int left=0;
        int right=size-1;
        int mid;
        while(rotateArray[left] >= rotateArray[right]){
			//二分查找重点
            if(left==right-1){
                mid=right;
                break;
            }

            int mid=(left+right)/2;
			
			//重复元素会对排序造成干扰,当出现最左最右中间的值都相等,改为普通顺序呢查找
            if(rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid]){
                return repeatDataOrder(rotateArray,left,right);
            }
			
			//难点:核心比较代码,确定索引mid元素值
            if(rotateArray[left] > rotateArray[mid]){
                right=mid;
            }else {
                left=mid;
            }
        }
        return rotateArray[mid];
        }
private:
    // 普通的迭代顺序寻找最小值
    int repeatDataOrder(vector<int> vec,int left,int right){
        int min=vec[left];
        for(int i=left+1;i<=right;i++){
            if(vec[i]<min){
                min=vec[i];
            }
        }
        return min;
    }
};
