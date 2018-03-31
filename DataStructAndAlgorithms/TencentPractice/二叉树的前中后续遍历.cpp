#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int val;
	struct Node* left;
    struct Node* right; 
};

//
//递归遍历,前中后遍历思路类似
void preTraverse(struct Node* root){
    cout << root->val;
    preTraverse(root->left);
    preTraverse(root->right);
}

stack<Node*> s;

//非递归遍历
void preTraverseCore(struct Node* root){
    Node* p=root;
    while(!p || !s.empty()){
        while(!p){
            cout << p->val << endl;
            s.push(p);
            p=p->left;
        }
        if(!s.empty()){
            p=s.top();
            s.pop();
            p=p->right;
        }
    }
}

int main(){
	return 0;
}
