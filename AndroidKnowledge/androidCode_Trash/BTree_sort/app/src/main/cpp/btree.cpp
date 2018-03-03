//
// Created by zzp on 18-1-24.
//

#include "btree.h"
#include <stdio.h>
#include <iostream>
#include <android/log.h>

#define TAG "JNITEST"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__)

void traverse(BTreeNode *p) {
//    cout<<endl;
    LOGE("\n");
    int i;
    for (i = 0; i < p->n; ++i) {
        if (p->leaf== false){
            traverse(p->child_ptr[i]);
        }
//        cout << " "<<p->data[i];
        LOGE(" _%d %d",p->data[i],i);

    }
    if (p->leaf== false){
        traverse(p->child_ptr[i]);
        if (p->child_ptr[i]!= nullptr)
            LOGE("##%d",p->child_ptr[i]->data[0]);
    }
//    cout<<endl;
    LOGE("\n");
}

int split_child(BTreeNode *x, int i) {
    int mid;
    BTreeNode *np1,*np3,*y;
    np3=init();
    np3->leaf=true;
    if (i==-1){
        //发生第一次分裂,np1是新根；np3是新叶;x腾出3/5的空间
        //中间的分离，减少数组长
        mid=x->data[2];//3th是1-5的中位数
        x->data[2]=0;
        x->n--;
        x->leaf= true;
        for (int j = 0; j < 6; ++j) {
            x->child_ptr[j]=NULL;
        }
        np1=init();
        np1->leaf=false;
        np1->data[0]=mid;
        np1->child_ptr[np1->n]=x;
        np1->child_ptr[np1->n+1]=np3;
        np1->n++;
        root=np1;
        for (int j = 3; j <5 ; ++j) {
            np3->data[j-3]=x->data[j];
            np3->child_ptr[j-3]=x->child_ptr[j];
            np3->leaf=true;
            np3->n++;
            x->data[j]=0;
            x->n--;
        }
    } else{
        y=x->child_ptr[i];
        mid=y->data[2];
        y->data[2]=0;
        y->n--;
        for (int j = 3; j < 5; ++j) {
            np3->data[j-3]=y->data[j];
            np3->n++;
            y->data[j]=0;
            y->n--;
        }
        x->child_ptr[i+1]=np3;
    }
    return mid;
}

void insert(int a) {
    int i,temp;
    x=root;
    if (x==NULL){
        root=init();
        x=root;
    } else{
        if(x->leaf==true && x->n==5){
            temp= split_child(x,-1);
            x=root;
            for ( i = 0; i < (x->n); ++i) {
                if (a>x->data[i]&&a<x->data[i+1]){
                    i++;
                    break;
                } else if (a<x->data[0]){
                    break;
                } else{
                    continue;
                }
            }
            x=x->child_ptr[i];
        } else{
            while(x->leaf== false){
                for ( i = 0; i < (x->n); ++i) {
                    if ((a>x->data[i])&&(a<x->data[i+1])){
                        i++;
                        break;
                    } else if (a<x->data[0]){
                        break;
                    } else{
                        continue;
                    }
                }
                if ((x->child_ptr[i]->n==5)){
                    temp=split_child(x,i);
                    x->data[x->n]=temp;
                    x->n++;
                    continue;
                } else{
                    x=x->child_ptr[i];
                }
            }

        }
    }
    x->data[x->n]=a;
    sort(x->data,x->n);//插入叶子节点排序
    x->n++;
}

void sort(int *p, int n) {
    int i,j,temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j <= n; ++j) {
            if (p[i]>p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
