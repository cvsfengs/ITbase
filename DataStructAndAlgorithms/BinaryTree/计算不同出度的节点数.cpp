#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* right,*left;
};

int N2,NL,NR,N0;
//t!=nullptr
void count(node* t){
    if(t->left!=nullptr){
        if(t->right!=nullptr){
            ++N2;
        }else{
            ++NL;
        }
    }else if(t->right!=nullptr){
        ++NR;
    }else{
        ++N0;
    }
    
    if(t->left!=nullptr){
        count(t->left);    
    }
    if(t->right!=nullptr){
        count(t->right);
    }
}

int main(){return 0;}
