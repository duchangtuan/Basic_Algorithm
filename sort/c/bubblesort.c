#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int *A, int N)
{
    int i, j;
    for(i = 0; i < N-1; i++){
        for(int j = 0; j < N-1-i; j++)
            if(A[j] > A[j+1])
                swap(&A[j], &A[j+1]);
    }
}

int main()
{
    int A[10] = {4, 9, 8, 6, 1, 10, 43, 8, 7, 5};
    bubblesort(A, 10);
    for(int i = 0; i < 10; i++)
        printf("%d ",A[i]);
    printf("\n");
}
