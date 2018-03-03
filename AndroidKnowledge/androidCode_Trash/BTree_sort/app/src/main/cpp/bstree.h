//
// Created by zzp on 18-1-20.
//

#include <string>

#ifndef BSTREE_SORT_H
#define BSTREE_SORT_H

typedef struct node {
    std::string key;
    struct node* L;
    struct node* R;
}node,*pnode;

class BSTree
{
public:
    BSTree();

    node* Insert(std::string key);
    node* Search(std::string key);
    void DestroyTree();

    void printBSTree(int i=1);

    pnode Root;

private:
    node *Search(std::string key,pnode Node);
    void DestroyTree(pnode Node);
    node* Insert(std::string key,pnode Node);
};


#endif //BSTREE_SORT_H
