#include<stdio.h>

void Merge(int A[], int first, int mid, int last, int temp[])
{
    int i = first, j=mid+1;
    int m = mid, n = last;
    int k = 0;

    while(i<=m && j <=n){
        if(A[i] < A[j])
            temp[k++] = A[i++];
        else
            temp[k++] = A[j++];
    }
    while(i<=m){
        temp[k++] = A[i++];
    }
    while(j<=n)
        temp[k++] = A[j++];
    for(i=0; i<k; i++)
        A[first+i] = temp[i];
}

void MergeSort(int A[], int first, int last, int temp[])
{
    if(first < last){
       int mid = (first+last)>>1;
       MergeSort(A, first, mid, temp);
       MergeSort(A, mid+1, last, temp);
       Merge(A, first, mid, last, temp);
    }
}

int main()
{
    int A[10] = {4, 9, 8, 6, 1, 10, 43, 8, 7, 5};
    int temp[10];
    MergeSort(A, 0, 9, temp);
    for(int i = 0; i < 10; i++)
        printf("%d ",A[i]);
    printf("\n");

    return 0;
}
