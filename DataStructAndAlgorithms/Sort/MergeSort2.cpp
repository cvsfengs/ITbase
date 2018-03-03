void MergeSort2(SqList *L)
{
    /* 申请额外空间 */
    int * TR = (int *)malloc(L->length * sizeof(int));    
    int k = 1;
    while (k < L->length)
    {
        MergePass(L->r, TR, k, L->length);
        /*子序列长度加倍 */
        k = 2 * k;                                        
        MergePass(TR, L->r, k, L->length);
        /* 子序列长度加倍 */
        k = 2 * k;                                        
    }
}

