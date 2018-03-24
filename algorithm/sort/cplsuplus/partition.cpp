#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int> &nums, int p, int r) {
    int i = p-1, j = p;
    for(; j < r; j++){
        if(nums[j] < nums[r]){
            i++;
            swap(nums[i], nums[j]);
        }
    }
    i++;
    swap(nums[i], nums[r]);
    return i;
}

void quicksort(vector<int> &nums, int p, int r) {
    if(p < r){
        int q = partition(nums, p, r);
        quicksort(nums, p, q-1);
        quicksort(nums, q+1, r);
    }
}

int main(int argc, char** argv){
    int A[10] = {4, 9, 8, 6, 1, 10, 43, 8, 7, 5};
    vector<int> nums(A, A+10);

    cout<<"Before partition: ";
    for(int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    int point = partition(nums, 0, nums.size() - 1);
    cout<<"After partition: ";
    for(int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<endl;
    cout<<"partition point is "<<point<<endl;

    quicksort(nums, 0, nums.size() - 1);
    cout<<"After sorting: ";
    for(int i = 0; i < nums.size(); i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    return 0;
}
