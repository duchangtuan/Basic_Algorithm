#include<vector>
#include<iostream>
using namespace std;

void merge(vector<int> &nums, int start, int mid, int end, vector<int> &temp){
    int i = start, j = mid + 1;
    int m = mid, n = end;
    int k = 0;

    while(i<=m && j<=n){
        if(nums[i] < nums[j]){
            temp[k++] = nums[i++];
        }
        else{
            temp[k++] = nums[j++];
        }
    }
    while(i<=m)
        temp[k++] = nums[i++];
    while(j<=n)
        temp[k++] = nums[j++];

    for(i = 0; i < k; i++)
        nums[start+i] = temp[i];
}

void mergesort(vector<int> &nums, int first, int last, vector<int> &temp){
    if(first < last){
        int mid = (first + last) >> 1;
        mergesort(nums, first, mid, temp);
        mergesort(nums, mid+1, last, temp);
        merge(nums, first, mid, last, temp);
    }
}

int main()
{
    int A[] = {9,8,7,6,5,4,3,2,1,0};
    vector<int> nums(A, A+10);
    vector<int> temp(10);
    mergesort(nums, 0, 9, temp);

    for(int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    return 0;
}
