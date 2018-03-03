//
// Created by zzp on 18-1-24.
//
//http://www.sanfoundry.com/cpp-program-implement-b-tree/
//未考虑数据相同情况
#include <string>
#ifndef BTREE_SORT_BTREE_H
#define BTREE_SORT_BTREE_H


using namespace std;
struct BTreeNode {
    int* data;
    BTreeNode** child_ptr;
    bool leaf;
    int n;
}*root=NULL,*np=NULL,*x=NULL;

BTreeNode* init()
{
    np=new BTreeNode;
    np->data=new int[5];
    np->child_ptr=new BTreeNode*[6];
    np->leaf=true;
    np->n=0;
    for (int i = 0; i < 6; ++i) {
        np->child_ptr[i]=NULL;
    }
    return np;
}

void traverse(BTreeNode *p);
void sort(int*p,int n);
int split_child(BTreeNode*x,int i);
void insert(int a);

#endif //BTREE_SORT_BTREE_H
