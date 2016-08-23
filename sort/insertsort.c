#include<stdio.h>

void insertsort(int A[], int N)
{
    for(int i = 1; i < N; i++)
    {
        if(A[i-1] > A[i]){
            int temp = A[i];
            int j = i;
            while(j>0&&A[j-1]>temp){
                A[j] = A[j-1];
                j--;
            }
            A[j] = temp;
        }
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
