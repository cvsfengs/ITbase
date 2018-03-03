//输入一个链表，从尾到头填入vector容器内,(打印链表每个节点的值)。

//堆栈的后进先出
//复杂度 N+N+N*某常量(n*m/(m - 1))
//递归版本:如有子节点递归,再填入打印;可行当按题目提供的接口不合适
//复杂度(N-1)*某常量(n*m/(m - 1)) 递归N-1次,填入vector
//stl类库直接反转容器
//复杂度 N+N
#include <vector>
#include <stack>
using namespace std;
int main(){}
struct ListNode {
      int val;
      struct ListNode *next;
      ListNode(int x) :
            val(x), next(NULL) {
      }
};

//栈push pop时间复杂度为1
//push_back 操作所花费的总时间约为 n*m/(m - 1):这是一个常量
class Solution1{
public:
	vector<int> printListFromTailToHead(ListNode* head){
		vector<int> vec;
		stack<int> stk;
		ListNode* p=head;

		while(p!=nullptr){
			stk.push(p->val);
			p=p->next;
		}

		while(!stk.empty()){
			vec.push_back(stk.top());
			stk.pop();
		}
		return vec;
	}

};


class Solution3{
public:
	vector<int> printListFromTailToHead(struct ListNode* head){
		vector<int> v;
		ListNode *p=head;
		while(p!=nullptr){
			v.push_back(p->val);
			p=p->next;
		}
		return vector<int>(v.rbegin(),v.rend());
	}
};
