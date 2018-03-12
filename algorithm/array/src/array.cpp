#include<limits.h>
#include"array.h"

using namespace std;


int Array::maxSubArray(vector<int> &nums){
    //
    int curSum = 0, maxSum = INT_MIN;
    for(unsigned int i = 0; i < nums.size(); i++){
        if(curSum > 0)
            curSum += nums[i];
        else
            curSum = nums[i];

        if(curSum > maxSum)
            maxSum = curSum;
    }
    return maxSum;
}

int Array::maxSubArray_dp(vector<int> &nums){
    //
    int maxsum = nums[0];
    int len = nums.size();
    vector<int> dp(len);
    dp[0] = nums[0];
    for(int i = 1; i < len; i++){
        dp[i] = max(dp[i-1] + nums[i], nums[i]);
        maxsum = max(dp[i], maxsum);
    }
    return maxsum;
}
