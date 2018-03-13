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

// get the maximum profit but only buy and sell one time
int Array::max_profit_one_time(vector<int> &nums){
    int cur_profit = 0, max_profit = 0;
    int min_price = nums[0];
    for(unsigned int i = 1; i < nums.size(); i++){
        if(min_price < nums[i]){
            cur_profit = nums[i] - min_price;
        }
        else{
            min_price = nums[i];
        }

        if(cur_profit > max_profit){
            max_profit = cur_profit;
        }
    }
    return max_profit;
}

// get the maximum profit and you can buy and sell
// as much as possible, but you must sell the stock
// before you bug
int Array::max_profit_multiple_times(vector<int> &nums){
    if(nums.size() <= 1)
        return 0;
    int max_profit = 0;
    for(unsigned int i = 1; i < nums.size(); i++){
        max_profit += nums[i] > nums[i-1] ? nums[i] - nums[i-1] : 0;
    }
    return max_profit;
}

int Array::max_profit_one_time_dp(std::vector<int> &nums){
    int len = nums.size();
    if(len == 0 || len == 1)
        return 0;
   
    vector<int> dp(len);
    dp[0] = 0;
    dp[1] = max(0, nums[1] - nums[0]);
    int maxprofit = max(dp[0], dp[1]);
    int min_price = min(nums[0], nums[1]);
    for(int i = 2; i < len; i++){
        if(nums[i] < min_price)
            min_price = nums[i]; 
        dp[i] = max(nums[i] - min_price, dp[i-1]);
        maxprofit = max(dp[i], maxprofit);
    }
    return maxprofit;
}   
