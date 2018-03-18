#include <iostream>
#define FREE 0
#define BUSY 1
#define OK 1
#define ERROR 0
#define MIN 10  //不再分割的分区大小
#define MAXLENGTH 1024 //内存最大容量

using namespace std;

//定义一个空闲表
typedef struct freearea
{
    int size;
    int address;
    int state;
}ElemType;

//双向链表存储结构
typedef struct DuLNode
{
    ElemType data;
    struct DuLNode *prior;
    struct DuLNode *next;
}DuLNode,*DuLinkList;

DuLinkList blockfirst;
DuLinkList blocklast;

int Initblock()
{
    blockfirst = (DuLinkList)malloc(sizeof(DuLNode));
    blocklast = (DuLinkList)malloc(sizeof(DuLNode));
    blockfirst->prior = NULL;
    blockfirst->next = blocklast;
    blocklast->prior = blockfirst;
    blocklast->next = NULL;
    blocklast->data.size = MAXLENGTH;
    blocklast->data.address = 0;
    blocklast->data.state = FREE;
    return OK;
}

//首次适应算法
//遍历找到满足空间要求+每次迭代通过比较选择地址较小的表
//找到的第一个表没有其他表和它进行比较，所有循环里至少有2个分支。

//如果找到首个满足条件的位置,往双向链表插入新节点,同时新节点的下一个节点要修改地址信息和内存空间
int firstfit(int request)
{
    int ch;  //记录最小剩余空间
    DuLinkList temp = (DuLinkList)malloc(sizeof(DuLNode));
    temp->data.size = request;
    temp->data.state = BUSY;
    DuLinkList p = blockfirst->next;
    DuLinkList q = NULL; //记录最佳插入位置
    while(p != NULL)
    {
        if(p->data.state == FREE && (p->data.size >= request))
        {
            if(q == NULL)
            {
                q = p;
                ch = p->data.size - request;
            }
            else if(q->data.address > p->data.address)
            {
                q = p;
                ch = p->data.size - request;
            }
        }
        p = p->next;
    }
    if(q == NULL) //没有找到空闲块
        return ERROR;
    //小于MIN不能继续分割
    else if(ch <= MIN)
    {
        q->data.state = BUSY;
        return OK;
    }else{
        temp->prior = q->prior;
        temp->next=q;
        temp->data.address=q->data.address;
        q->prior->next=temp;
        q->prior=temp;
        q->data.address+=request;
        q->data.size=ch;
        return OK;
    }
    return OK;
}

//最佳适应算法
//遍历找到满足空间要求+每次迭代通过比较选取满足空间要求且尽可能小的表
//因为第一个满足空间的表无需比较,所以循环内部有2个分支
int bestfit(int request)
{
    int ch;  //记录最小剩余空间
    DuLinkList temp = (DuLinkList)malloc(sizeof(DuLNode));
    temp->data.size = request;
    temp->data.state = BUSY;
    DuLinkList p = blockfirst->next;
    DuLinkList q = NULL; //记录最佳插入位置
    while(p != NULL)  //初始化最小空间和最佳位置
    {
        if(p->data.state == FREE && (p->data.size >= request))
        {
            if(q == NULL)
            {
                q = p;
                ch = p->data.size - request;
            }
            else if(q->data.size > p->data.size)
            {
                q = p;
                ch = p->data.size - request;
            }
        }
        p = p->next;
    }

    if(q == NULL) //没有找到空闲块
        return ERROR;
    else if(ch <= MIN)
    {
        q->data.state = BUSY;
        return OK;
    }else{
        temp->prior = q->prior;
        temp->next=q;
        temp->data.address=q->data.address;
        q->prior->next=temp;
        q->prior=temp;
        q->data.address+=request;
        q->data.size=ch;
        return OK;
    }
    return OK;
}



//最差适应算法
//遍历找到满足空间要求+每次迭代通过比较选取满足空间要求且最大的表
//因为第一个满足空间的表无需比较,所以循环内部有2个分支
int worstfit(int request)
{
    int ch; //记录最大剩余空间
    DuLinkList temp = (DuLinkList)malloc(sizeof(DuLNode));
    temp->data.size = request;
    temp->data.state = BUSY;
    DuLinkList p = blockfirst->next;
    DuLinkList q = NULL; //记录最佳插入位置
    while(p != NULL) //初始化最大空间和最佳位置
    {
        if(p->data.state == FREE && (p->data.size >= request))
        {
            if(q == NULL)
            {
                q = p;
                ch = p->data.size - request;
            }
            else if(q->data.size < p->data.size)
            {
                q = p;
                ch = p->data.size - request;
            }
        }
        p = p->next;
    }

    if(q == NULL) //没有找到空闲块
        return ERROR;
    else if(ch <= MIN)
    {
        q->data.state = BUSY;
        return OK;
    }else{
        temp->prior = q->prior;
        temp->next=q;
        temp->data.address=q->data.address;
        q->prior->next=temp;
        q->prior=temp;
        q->data.address+=request;
        q->data.size=ch;
        return OK;
    }
    return OK;
}

//分配内存
int mallc(int ch)
{
    int request;
    cout <<"请输入需要分配的内存大小：";
    cin >>request;
    if(request < 0 || 0 == request)
    {
        cout <<"分配的大小不合适！！请重试."<<endl;
        return ERROR;
    }
    if(ch == 1)
    {
        if(firstfit(request) == OK)
            cout <<"分配成功"<<endl;
        else
            cout << "内存不足，分配失败"<<endl;
        return OK;
    }
    if(ch == 2)
    {
        if(bestfit(request) == OK)
            cout <<"分配成功"<<endl;
        else
            cout << "内存不足，分配失败"<<endl;
        return OK;
    }
    if(ch == 3)
    {
        if(worstfit(request) == OK)
            cout <<"分配成功"<<endl;
        else
            cout << "内存不足，分配失败"<<endl;
        return OK;
    }
}

//内存回收
//前边空闲,当前空闲块删除
//后边空闲,当前空闲块的下一个空闲块删除
//特例:检测到后边两块都空闲,不会存在当前链表的下下链表指回当前链表
int recycle(int flag)
{
    DuLinkList p=blockfirst;
    for(int i=0;i<=flag;i++)
    {
        if(p != NULL)
            p = p->next;
        else
            return ERROR;
    }
    p->data.state = FREE;
    if(p->prior != blockfirst && (p->prior->data.state == FREE)) //与前面的空闲块相连
    {
        p->prior->data.size += p->data.size;
        p->prior->next = p->next;
        p->next->prior = p->prior;
        p = p->prior;
    }
    if(p->next != blocklast && (p->next->data.state == FREE)) //与后面的空闲块相连
    {
        p->data.size += p->next->data.size;
        p->next->next->prior = p;
        p->next = p->next->next;
    }
    if(p->next == blocklast && (p->next->data.state == FREE)) //与最后的空闲块相连
    {
        p->data.size += p->next->data.size;
        p->next = NULL;
    }
    return OK;
}

//显示内存分配情况
void show()
{
    int flag = 0;
    cout << "----------------内存分配情况表---------------\n";
    cout <<"|分区号\t起始地址\t分区大小\t状态|"<<endl;
    DuLinkList p=blockfirst->next;
    while(p != NULL)
    {
        cout <<"|\t"<<flag++<<"\t";
        cout <<"\t"<<p->data.address<<"\t\t";
        cout <<"\t"<<p->data.size<<"\t\t";
        if(p->data.state == FREE)
            cout <<"空闲|\n";
        else
            cout <<"分配|\n";
        p = p->next;
    }
    cout <<"---------------------------------------------"<<endl;
}

//主函数
int main()
{
    int choice; //算法选择标记
index:cout <<"1)首次适应算法\n2)最佳适应算法\n3)最坏适应算法\n";
    cout <<"请输入所使用的内存分配算法：";
    cin >> choice;
    while(choice<1 || choice>2)
    {
        cout<<"输入错误！！请重新输入所使用的内存分配算法："<<endl;;
        cin >> choice;
    }
    Initblock();
    int ch;
    while(1)
    {
        show();
        cout <<"\n1: 分配内存\n2: 回收内存\n3: 返回上一层\n0: 退出\n\n请输入您的操作：";
        cin>>ch;
        if(ch == 1)
            mallc(choice);
        else if(ch == 2){
            int flag;
            cout <<"请输入您要回收的内存的分区号：";
            cin>>flag;
            recycle(flag);
            cout << "ok";
        }else if(ch == 3){
            goto index;
        }else if(ch == 0){
            break;
        }else{
            cout <<"输入有误，请重试！！"<<endl;
            continue;
        }
    }
    return 0;
}
