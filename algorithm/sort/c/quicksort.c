#include<stdio.h>

int partition(int A[], int p, int r)
{
    int i = p-1, j, temp;
    int x=A[r];
    for(j=p; j<r; j++){
        if(A[j] < x){
            i++;
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }
    temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    return i+1;
}

void quicksort(int A[], int p, int r)
{
    if(p<r){
        int q = partition(A, p, r);
        quicksort(A, p, q-1);
        quicksort(A, q+1, r);
    }
}

int main()
{
    int A[10] = {4, 9, 8, 6, 1, 10, 43, 8, 7, 5};
    quicksort(A, 0, 9);
    for(int i = 0; i < 10; i++)
        printf("%d ",A[i]);
    printf("\n");
}
