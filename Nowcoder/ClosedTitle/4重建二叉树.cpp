#include <vector>
using namespace std;

//思路:先序遍历的第一个元素是根节点,
//中序遍历的根节点位于先序遍历和后序遍历之间
//先序遍历和中序遍历的根节点右子树序号始终相同,是根的右子树的根
//递归:每次递归找出根结点和根的左右子树是下一次递归的新根

//复杂度 取得新根N*(二分大法)logN=NlogN


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	//pre: pre order sequence;
	//in:in order sequence; 
    //Return the root of tree
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        if(pre.empty() || in.empty()){
            return nullptr;
        }
   
        vector<int> left_pre,left_in,right_pre,right_in;
   
        TreeNode* Head=new TreeNode(pre[0]);
        int root=0;
        for(int i=0;i<in.size();i++){
            if(in[i]==pre[0]){
                root=i;
                break;
            }
        }

        //In order to traverse: root_index-1 is the next root
        //pre order to traverse: always the first element is the next root
        for(int i=0;i<root;i++){
            left_in.push_back(in[i]);
            left_pre.push_back(pre[i+1]);
        }

        for(int i=root+1;i<in.size();i++){
            right_in.push_back(in[i]);
            right_pre.push_back(pre[i]);
        }

        Head->left=reConstructBinaryTree(left_pre,left_in);
        Head->right=reConstructBinaryTree(right_pre,right_in);

        return Head;
    }
};

