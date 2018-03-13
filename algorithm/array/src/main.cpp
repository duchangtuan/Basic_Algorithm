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

int main(int argc, char** argv){
    test_maxSubArray();
    test_max_profit();
    return 0;
}
