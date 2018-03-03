//
// Created by zzp on 18-1-31.
//

#ifndef ALGORITHMS_SQLIST_H
#define ALGORITHMS_SQLIST_H


/* 存储空间初始分配量 */
#define MAXSIZE 20
/* ElemType类型根据实际情况而定，这里假设为int */
typedef int ElemType;
typedef struct
{
    /* 数组存储数据元素，最大值为MAXSIZE */
    ElemType data[MAXSIZE];
    /* 线性表当前长度 */
    int length;
} SqList;


#endif //ALGORITHMS_SQLIST_H
