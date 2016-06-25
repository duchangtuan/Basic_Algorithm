#include<stdio.h>

// Construct big root heap
void heapAdjust(int A[], int i, int n)
{
    int nChild;
    int temp;
    for(; 2*i+1<n; i=nChild){
        nChild = 2*i+1;
        if(nChild<n-1&&A[nChild]<A[nChild+1])
            nChild++;
        if(A[i] < A[nChild]){
            temp = A[i];
            A[i] = A[nChild];
            A[nChild] = temp;
        }
        else
            break;
    }
}

void heapsort(int A[], int n)
{
    int i, temp;
    for(i=n/2-1; i>=0; i--)
        heapAdjust(A, i, n);
    for(i=n-1; i>0; i--){
        temp = A[i];
        A[i] = A[0];
        A[0] = temp;
        heapAdjust(A, 0, i);
    }
}

int main()
{
    int A[] = {9,8,7,6,5,4,3,2,1,0};
    heapsort(A,sizeof(A)/sizeof(int));
    for(int i=0;i<sizeof(A)/sizeof(int);i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nok\n");
    return 0;
}
