#include <iostream>
#define STACK_SIZE 1024
using namespace std;


struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this.data=data;
    }
};

struct Queue{
    Node* head;
    Node* tail;
    int size;
};

struct Stack{
    int array[STACK_SIZE];
    int top;
}

int main(){
    Node* node=new Node;
	return 0;
}

//反转链表
Node* reverse(Node* head){
	Node* prev=nullptr;
    Node* curr=head;
    wile(curr!=nullptr){
        Node* temp=curr->next;
        curr->next=pre;
        prev=curr;
        curr=temp;
    }
    return prev;
}
