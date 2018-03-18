#include <stdio.h>
#include <stdlib.h>
#define FREE 0
#define BUSY 1
#define OK 1
#define ERROR 0
#define MIN 10  //不再分割的分区大小
#define MAXLENGTH 1024 //内存最大容量

//定义一个空闲表(尺寸地址状态)
typedef struct frearea{
	int size;
	int address;
	int state;
}ElemType;

//
typedef struct DuNode{
	ElemType data;
	DuNode* prior;
	DuNode* next;
}DuNode,*DuLinkList;

DuLinkList blockfirst;
DuLinkList blocklast;

//
int Initblock(){
	blockfirst=new DuNode;
    blocklast=new DuNode;	
    blockfirst->prior=nullptr;
    blockfirst->next=blocklast;
    blocklast->prior=blockfirst;
    blocklast->next=nullptr;
    blocklast->data.size=MAXLENGTH;
    blocklast->data.address=0;
    blocklast->data.state=FREE;
	return OK;
}

void show()
{
    int flag = 0;
    printf("----------------内存分配情况表---------------\n");
    printf("|分区号\t起始地址\t分区大小\t状态|\n");
    DuLinkList p=blockfirst->next;
    while(p != NULL)
    {
        printf("|  %d\t",flag++);
        printf("   %d\t\t",p->data.address);
        printf("  %d\t\t",p->data.size);
        if(p->data.state == FREE)
            printf("空闲|\n");
        else
            printf("分配|\n");
        p = p->next;
    }
    printf("---------------------------------------------\n");
}

//分配内存
int mallc(int ch)
{
    int request=0;
    printf("请输入需要分配的内存大小：");
    scanf("%d",&request);
    if(request < 0 || 0 == request)
    {
        printf("分配的大小不合适！！请重试.\n");
        return ERROR;
    }
    if(ch == 1)
    {
        if(firstfit(request) == OK)
            printf("分配成功\n");
        else
            printf("内存不足，分配失败\n");
        return OK;
    }
    if(ch == 2)
    {
        if(bestfit(request) == OK)
            printf("分配成功\n");
        else
            printf("内存不足，分配失败\n");
        return OK;
    }
    if(ch == 3)
    {
        if(worstfit(request) == OK)
            printf("分配成功\n");
        else
            printf("内存不足，分配失败\n");
        return OK;
    }
}



int main(){
	int choice; //算法选择标记
    index:printf("1)首次适应算法\n2)最佳适应算法\n3)最坏适应算法\n");
    printf("请输入所使用的内存分配算法：");
    scanf("%d",&choice);
    while(choice<1 || choice>2)
    {
        printf("输入错误！！请重新输入所使用的内存分配算法：\n");
        scanf("%d",&choice);
    }
	Initblock();
    int ch;
	while(1){
		show();
		printf("\n1: 分配内存\n2: 回收内存\n3: 返回上一层\n0: 退出\n\n请输入您的操作：");
        scanf("%d",&ch);
        if(ch == 1)
            mallc(choice);
        else if(ch == 2){
            int flag;
            printf("请输入您要回收的内存的分区号：");
            scanf("%d",&flag);
            recycle(flag);
        }else if(ch == 3){
            goto index;
        }else if(ch == 0){
            break;
        }else{
            printf("输入有误，请重试！！\n");
 	           continue;
        }
    }
    return 0;
}	
