//用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

//活用栈的特性,入出栈会翻转数据,比如翻转2次(原)顺序-> 逆序->顺序
//

#include <stack>
using namespace std;
int main(){}

class Solution
{
public:
    void push(int node) {
        if(stack1.empty() && stack2.empty()){
            stack1.push(node);
        }else if(stack1.empty()){

            while(!stack2.empty()){
                int temp=stack2.top();
                stack2.pop();
                stack1.push(temp);
            }
            stack2.push(node);
            while(!stack1.empty()){
                int temp=stack1.top();
                stack1.pop();
                stack2.push(temp);
            }
        }else if(stack2.empty()){
            while(!stack1.empty()){
                int temp=stack1.top();
                stack1.pop();
                stack2.push(temp);
            }
            stack1.push(node);
            while(!stack2.empty()){
                int temp=stack2.top();
                stack2.pop();
                stack1.push(temp);
            }
        }
    }

    int pop() {
        int result;
        if(!stack1.empty()){
            result=stack1.top();
            stack1.pop();
        }else if(!stack2.empty()){
            result=stack2.top();
            stack2.pop();
        }
        return result;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
