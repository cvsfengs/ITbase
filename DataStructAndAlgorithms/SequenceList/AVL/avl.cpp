#include <iostream>
using namespace std;

class BST{
    struct node
    {
        int data;
        node* left;
        node* right;
        int height;
    };

    node* root;

    void makeEmpty(node* t){
        if(t==nullptr)
            return;
        makeEmpty(t->left);
        makeEmpty(t->right);
        delete t;
        t=nullptr;
    }

    node* insert(int x,node* t){
        if(t==nullptr){
            t=new node;
            t->data=x;
            t->left=t->right=nullptr;
            t->height=0;
        }else if(x<t->data){
            t->left=insert(x,t->left);
            if(height(t->left)-height(t->right)==2){
                if(x<t->left->data){
                    t=singleRightRotate(t);
                }else{
                    t=doubleRightRotate(t);
                }
            }
        }else if(x>t->data){
            t->right=insert(x,t->right);
            if(height(t->right)-height(t->left)==2){
                if(x>t->right->data){
                    t=singleLeftRotate(t);
                }else{
                    t=doubleLeftRotate(t);
                }
            }
        }

        t->height=height(t->left)>height(t->right)?height(t->left)+1:height(t->right)+1;
        return t;
    }


    node* singleRightRotate(node* &t){
        node* temp=t->left;
        t->left=temp->right;
        temp->right=t;
        t->height=height(t->left)>height(t->right)?height(t->left)+1:height(t->right)+1;
        temp->height=height(temp->left)>height(temp->right)?height(temp->left)+1:height(temp->right)+1;
        return temp;
    }

    node* singleLeftRotate(node* &t){
        node* temp=t->right;
        t->right->left=t->right;
        temp->left=t;
        t->height=height(t->left)>height(t->right)?height(t->left)+1:height(t->right)+1;
        temp->height=height(temp->left)>height(temp->right)?height(temp->left)+1:height(temp->right)+1;
        return temp;
    }

    node* doubleLeftRotate(node* &t){
        t->right=singleRightRotate(t->right);
        return singleRightRotate(t);
    }

    node* doubleRightRotate(node* &t){
        t->left=singleLeftRotate(t->left);
        return singleRightRotate(t);
    }

    node* findMin(node* t){
        if(t==nullptr)
            return nullptr;
        else if(t->left==nullptr)
            return t;
        else{
            return findMin(t->left);
        }
    }

    node* findMax(node* t){
        if(t==nullptr)
            return nullptr;
        else if(t->right==nullptr)
            return t;
        else{
            return findMax(t->right);
        }
    }
    node* remove(int x,node* t){
        if(t==nullptr)
            return nullptr;
        else if(t->data==x)
            return t;
        else if(x<t->data){
            return remove(x,t->left);
        }else if(x>t->data){
            return remove(x,t->right);
        }else if(t->right&&t->left){
            node* temp=findMin(t->right);
            t->data=temp->data;
            temp->height;
            t->right = remove(t->data, t->right);
        }else{
            node* temp=t;
            if(temp->left=nullptr)
                temp=temp->right;
            else
                temp=temp->right;
            delete temp;
        }

        //???
        if(t == NULL)
            return t;

        t->height = max(height(t->left), height(t->right))+1;

        // If node is unbalanced
        // If left node is deleted, right case
        if(height(t->left) - height(t->right) == 2)
        {
            // right right case
            if(height(t->left->left) - height(t->left->right) == 1)
                return singleLeftRotate(t);
            // right left case
            else
                return doubleLeftRotate(t);
        }
        // If right node is deleted, left case
        else if(height(t->right) - height(t->left) == 2)
        {
            // left left case
            if(height(t->right->right) - height(t->right->left) == 1)
                return singleRightRotate(t);
            // left right case
            else
                return doubleRightRotate(t);
        }
        return t;


    }

    int height(node* t){
        return (t==nullptr?-1:t->height);
    }

    //no use
    int getBalance(node* t){
        if(t==nullptr)
            return 0;
        else return height(t->left) - height(t->right);
    }

    //in order traverse
    void inorder(node* t){
        if(t==nullptr)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

public:
    BST(){
        root=nullptr;
    }

    void insert(int x){
        root=insert(x,root);
    }

    void remove(int x){
        root=remove(x,root);
    }

    void display(){
        inorder(root);
        std::cout << endl;
    }
};

int main(){
    BST t;
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.display();

    return 0;
}

