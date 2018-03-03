//在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

//思路一:每一行选一个元素代表行这个整体:target与array[i][0]
//复杂度 nlogn
//思路二:改变搜索的起始元素:从(0,0)有2递增分岔,而从(end,0)分岔递增与递减数组
//复杂度 N+M,行列数相等仅需2N

//二分查找:有序数组的查找
//重点:mid元素的修正
#include <vector>
#include <array>
using namespace std;
int main(){return 0;}

class Solution1 {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.empty()){
            return false;
        }
        for(int i=0;i<array.size();i++){
            if(array[i].empty())
                continue;
            if(target>=array[i][0]){
                int low=0;
                int high=array[i].size()-1;
                while(low<=high){
                int mid=(low+high)/2;
                if(target>array[i][mid])
                    low=mid+1;
                else if(target<array[i][mid])
                    high=mid-1;
                else
                    return true;
            	}
        	}
        }
        return false;
    }
};


class Solution2 {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(array.empty() || array[0].empty()){
            return false;
        }
        for(int i=array.size()-1,j=0;i>=0 && j<=array[i].size();){
            if(array[i].empty()){
             	++i;
                continue;
            }
            if(target==array[i][j]){
                return true;
            }else if(target>array[i][j]){
                ++j;
        	}else if(target<array[i][j]){
                --i;
            }
        }
        return false;
    }
};

