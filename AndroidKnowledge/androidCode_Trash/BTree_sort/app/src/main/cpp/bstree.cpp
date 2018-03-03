//
// Created by zzp on 18-1-20.
//

#include "bstree.h"
#include <iostream>
#include <stack>

#include <android/log.h>

#define TAG "JNITEST"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__)


std::stack<pnode> stack1;
std::stack<pnode> stack2;


void BSTree::DestroyTree(pnode Node) {
    if (Node != nullptr) {
        DestroyTree(Node->L);
        DestroyTree(Node->R);
        delete Node;
    }
}

node *BSTree::Search(std::string key) {
    return Search(key, Root);
}

node *BSTree::Search(std::string key, pnode Node) {
    if (Node != NULL) {
        if (key == Node->key) {
            return Node;
        } else if (key < Node->key) {
            return Search(key, Node->L);
        } else {
            return Search(key, Node->R);
        }
    } else
        return nullptr;
}

void BSTree::DestroyTree() {
    DestroyTree(Root);
}

node *BSTree::Insert(std::string key) {
    if (Root != NULL)
        return Insert(key, Root);
    else {
        Root = new node;
        Root->key = key;
        Root->L = NULL;
        Root->R = NULL;
        return Root;
    }
}

node *BSTree::Insert(std::string key, pnode Node) {
    if (key < Node->key) {
        if (Node->L != nullptr)
            return Insert(key, Node->L);
        else {
            Node->L = new node;
            Node->L->key = key;
            Node->L->L = nullptr;
            Node->L->R = nullptr;
            return Node->L;
        }
    } else {
        if (Node->R != nullptr)
            return Insert(key, Node->R);
        else {
            Node->R = new node;
            Node->R->key = key;
            Node->R->R = nullptr;
            Node->R->L = nullptr;
            return Node->R;
        }
    }
}

BSTree::BSTree() {
    Root = NULL;
}


void BSTree::printBSTree(int i) {
    if (i != 1) {
        if (i % 2) {
            while (!stack1.empty()) {
                pnode ptree = stack1.top();
                stack1.pop();
                LOGE("%s", ptree->key.c_str());
                if (ptree->L != nullptr)
                    stack2.push(ptree->L);
                if (ptree->R != nullptr)
                    stack2.push(ptree->R);

            }
            if (!stack2.empty())
                printBSTree(++i);
        } else {
            while (!stack2.empty()) {
                pnode ptree = stack2.top();
                stack2.pop();
                LOGE("%s", ptree->key.c_str());
                if (ptree->R != nullptr)
                    stack1.push(ptree->R);
                if (ptree->L != nullptr)
                    stack1.push(ptree->L);
            }
            if (!stack1.empty())
                printBSTree(++i);
        }
    } else {
        LOGE("%s", Root->key.c_str());
        stack2.push(Root->L);
        stack2.push(Root->R);
        if (!stack2.empty())
            printBSTree(++i);
    }
}
