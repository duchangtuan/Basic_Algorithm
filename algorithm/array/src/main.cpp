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

int main(int argc, char** argv){
    test_maxSubArray();

    return 0;
}
