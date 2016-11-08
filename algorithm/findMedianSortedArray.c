#include<stdio.h>

int min(int a, int b)
{
    return a>b?b:a;
}

int findKth(int A[], int m, int B[], int n, int k)
{
    if(m>n)
        return findKth(B, n, A, m, k);
    if(m==0)
        return B[k-1];
    if(k==1)
        return min(A[0], B[0]);
    int pa = min(k/2, m), pb=k-pa;
    if(A[pa-1]<B[pb-1])
        return findKth(A+pa, m-pa, B, n, k-pa);
    else if(A[pa-1]>B[pb-1])
        return findKth(A, m, B+pb, n-pb, k-pb);
    else
        return A[pa-1];
}

double findMedian(int A[], int m, int B[], int n)
{
    int total = m+n;
    if(total%2)
        return findKth(A, m, B, n, total/2+1);
    else
        return 0.5 *(findKth(A, m, B, n, total/2) +
                     findKth(A, m, B, n, total/2+1));
}

int main()
{
    int A[5] = {1, 3, 5, 7, 9};
    int B[6] = {2, 4, 7, 8, 10, 12};

    printf("%f\n", findMedian(A, 5, B, 6));

    return 0;
}
