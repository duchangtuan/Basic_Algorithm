#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void heapAdjust(vector<int> &nums, int i, int n){
    int nchild;
    for(; 2*i + 1 < n; i=nchild){
        nchild = 2*i+1;
        if(nchild<n-1 && nums[nchild] < nums[nchild+1]){
            nchild += 1;
        }
        if(nums[i] < nums[nchild])
            swap(nums[i], nums[nchild]);
        else
            break;
    }
}

void heapSort(vector<int> &nums){
    int n = nums.size();
    for(int i = n/2-1; i >= 0; i--){
        heapAdjust(nums, i, n);    
    }
    for(int i=n-1; i > 0; i--){
        swap(nums[i], nums[0]);
        heapAdjust(nums, 0, i);
    }
}

int main()
{
    int A[] = {9,8,7,6,5,4,3,2,1,0};
	vector<int> nums(A, A+10);
    heapSort(nums); 	

    for(int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    return 0;
}
