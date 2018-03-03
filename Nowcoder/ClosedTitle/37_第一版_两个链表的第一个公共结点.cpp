//题目：输入两个链表，找出它们的第一个公共结点

//时间复杂度 O(1)
//思路:公共结点以后的部分都是相同的,让较长的链表先走

using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(pHead1==nullptr || pHead2==nullptr){
            return nullptr;
        }

        //calculate two Lists' size;
        ListNode* p1=pHead1;
        ListNode* p2=pHead2;
        int count1=1;
        int count2=1;
        do{
            ++count1;
            p1=p1->next;
        }while(p1->next!=nullptr);

        do{
            ++count2;
            p2=p2->next;
        }while(p2->next!=nullptr);

        //sync position of lists aligning from the back
        if(count1>count2){
            for(int i=0;i<count1-count2;i++){
                pHead1=pHead1->next;
            }

        }else{
            for(int i=0;i<count2-count1;i++){
                pHead2=pHead2->next;
            }
        }

        //once match the node,return the list,or return nullptr;
        while ( pHead1!=nullptr) {
            if(pHead1==pHead2){
                return pHead1;
            }
            pHead1=pHead1->next;
            pHead2=pHead2->next;
        }
        return nullptr;
    }
};

int main()
{
    return 0;
}

