#include <iterator>
#include <iostream>
#include <vector>
using namespace std;
const int BUCKET_NUM=10;

//C++ 空指针用nullptr
struct ListNode{
    explicit ListNode(int i=0):mData(i),mNext(nullptr){}
    ListNode* mNext;
    int mData;
}

ListNode* insert(ListNode* head,int val){
    ListNode dummyNode;
    ListNode* newNode=new ListNode(val);
    ListNode* pre,*curr;
    //链表常用临时的栈结点辅助处理头结点问题
    dummyNode.mNext=head;
    pre=&dummyNode;
    curr=head;
    while(curr!=nullptr && curr->mData<=val){
        pre=curr;
        curr=curr->mNext;
    }
    newNode->mNext=curr;
    pre->mNext=newNode;
    return dummyNode.mNext;
}

ListNode* Merge(ListNode *head1,ListNode *head2){
    ListNode dummyNode;
    ListNode *dummy=&dummyNode;
    while(head1!=nullptr && head2!=nullptr){
        //head1，head2往前走，dummy->next先不动
        if(head1->mData<=head2->mData){
            dummy->mNext=head1;
            head1=head1->mNext;
        }else{
            dummy->mNext=head2;
            head2=head2->mNext;
        }
        dummy=dummy->mNext;
    }
    //head1存在比head2都大的
    if(head1!=nullptr) dummy->mNext=head1;
    //
    if(head2!=nullptr) dummy->mNext=head2;
    //返回恰比另一个链表最大节点的值大一点的链表节点
    return dummyNode.mNext;
}

void BucketSort(int n,int arr[]){
    vector<ListNode*> buckets(BUCKET_NUM,(ListNode*)(0));
    for(int i=0;i<n;i++){
        int index=arr[i]/BUCKET_NUM;
        //数位值找到对应的桶
        ListNode *head=bucket.at(index);
        //插入，顺便桶内排序
        buckets.a(index)=insert(head,arr[i]);
    }
    ListNode* head=buckets.at(0);
    for(int i=1;i<BUCKET_NUM;i++){
        head=Merge(head,buckets.at(i));
    }
    for(int i=0;i<n;i++){
        arr[i]=head->mData;
        head=head->mNext;
    }
}

int main(){
    return 0;
}
