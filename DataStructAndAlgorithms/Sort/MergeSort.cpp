#define MAXSIZE 100

struct SqList{
    int data[MAXSIZE];
    int length;
};

void MergeSort(SqList* L);
void Merge(int SR[],int TR[],int i,int m,int n);
void MSort(int  SR[],int  TR1[],int s,int t);

void MergeSort(SqList* L){
    MSort(L->data,L->data,1,L->length);
}

void MSort(int SR[] ,int TR1 [],int s,int t){
    int TR2[MAXSIZE];

    if(s==t){
        TR1[s]=SR[s];
        return;
    }

    int m=(s+t)/2;

    MSort(SR,TR2,s,m);
    MSort(SR,TR2,m+1,t);

    Merge(TR2,TR1,s,m,t);

}

void Merge(int SR[],int TR[],int i,int m,int n){

    int j,k;
    for(k=i,j=m+1;j<=n&&i<=m;k++){
        if(SR[i]<TR[j]){
            TR[k]=SR[i++];
        }else{
            TR[k]=SR[j++];
        }
    }
    if(i<m){
        for(int l=0;l<m-i;l++){
            TR[k+l]=SR[i++];
        }
    }
    if(j<n){
        for(int l=0;l<n-j;l++){
            TR[k+l]=SR[j++];
        }
    }

}

int main(){
    return 0;
}

