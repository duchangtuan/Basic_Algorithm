#include<iostream>
#include"array.h"

using namespace std;

void test_maxSubArray(){
    Array array;

    vector<int> nums;
    int A[] = {-2,1,-3,4,-1,2,1,-5,4};
    for(int i = 0; i < 9; i++)
        nums.push_back(A[i]);
    
    cout<<array.maxSubArray(nums)<<endl;
    cout<<array.maxSubArray_dp(nums)<<endl;
}

void test_max_profit(){
    Array array;

    int A[] = {4, 7, 8, 2, 8};
    vector<int> nums(A, A+5);

    cout<<"Buy and sell only one time the maximum profit is ";
    cout<<array.max_profit_one_time(nums)<<endl;
    cout<<array.max_profit_one_time_dp(nums)<<endl;

    cout<<"Buy and sell mulitple times the maximum profit is ";
    cout<<array.max_profit_multiple_times(nums)<<endl;
}

void test_twosum(){
    Array array;
    
    int A[] = {1, 2, 3, 5, 7, 9};
    vector<int> nums(A, A+6);
    cout<<"Testing twosum function"<<endl;
    vector<vector<int> > ret = array.twosum(nums, 8);
    for(unsigned int i = 0; i < ret.size(); i++){
        for(unsigned int j = 0; j < ret[i].size(); j++){
            cout<<ret[i][j]<<" ";
        }
        cout<<endl;
    }
}

void test_findKth(){
    Array array;
    int A[] = {1, 5, 8, 12};
    int B[] = {4, 7, 9, 10, 14, 18};

    cout<<array.findKth(A, 4, B, 6, 3)<<endl;
    cout<<array.findKth2(A, 4, B, 6, 3)<<endl;
}

int main(int argc, char** argv){
    test_maxSubArray();
    test_max_profit();
    test_twosum();
    test_findKth();
    return 0;
}
