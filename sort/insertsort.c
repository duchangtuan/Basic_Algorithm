#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertsort(int A[], int N)
{
    for(int i = 1; i < N; i++)
    {
        for(int j = i; j > 0 && A[j]<A[j-1]; j--)
            swap(&A[j], &A[j-1]);
    }
}

int main()
{
    int A[10] = {4, 9, 8, 6, 1, 10, 43, 8, 7, 5};
    insertsort(A, 10);
    for(int i = 0; i < 10; i++)
        printf("%d ",A[i]);
    printf("\n");
}
