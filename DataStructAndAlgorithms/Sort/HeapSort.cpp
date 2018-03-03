#include <utility>
#define MAXSIZE 100
struct  SqList{
    int r[MAXSIZE];
    int length;
};


void HeapAdjust(SqList *L,int s,int m){
    int temp,j;
    temp=L->r[s];
    for(int j=2*s;j<m;j*=2){
		if(L->r[j]<L->r[j+1]){
            ++j;
		}
        if(L->r[s]>L->r[j]){
            break;
        }
        L->r[s]=L->r[j];
        s=j;
	}
    L->r[s]=temp;
}

void HeapSort(SqList *L){
    int i;
    for(i=L->length/2;i>0;i/=2){
        HeapAdjust(L,i,L->length);
    }
    //delete max num in SqLists each iterator
    for(i=L->length;L>0;i--){
		int temp=L->r[1];
		L->r[1]=L->r[i];
		L->r[i]=temp;
        HeapAdjust(L,1,i-1);
    }
}

int main(){
	return 0;
}
