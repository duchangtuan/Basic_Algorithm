#include<limits.h>
#include"array.h"

using namespace std;

vector<vector<int> > Array::twosum(vector<int> &nums, int target){
    vector<vector<int> > ret;
    int len = nums.size();
    for(int i = 0, j = len -1; i<j; ){
        if(nums[i] + nums[j] == target){
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            i++;
            j--;
            ret.push_back(temp);
        }
        else if(nums[i] + nums[j] < target){
            i++;
        }
        else{
            j--;
        }
    }
    return ret;
}

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
// before you buy
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

int Array::findKth(int *nums1, int len1, int *nums2, int len2, int k){
    if(len1 > len2)
        return Array::findKth(nums2, len2, nums1, len1, k);
    if(len1 == 0)
        return nums2[k-1];
    if(k == 1)
        return min(nums1[0], nums2[0]);

    int pa = min(k/2, len1);
    int pb = k - pa;

    // if nums1[pa-1] < nums2[pb-1], the kth small number should be located after nums1[pa-1] 
    if(nums1[pa-1] < nums2[pb-1])
        return Array::findKth(nums1+pa, len1-pa, nums2, len2, k-pa);
    // if nums1[pa-1] > nums2[pb-1], the kth small number should be located after nums2[pb-1]
    else if(nums1[pa-1] > nums2[pb-1])
        return Array::findKth(nums1, len1, nums2+pb, len2-pb, k-pb);
    else
        return nums1[pa-1];
}

int Array::findKth2(int *nums1, int len1, int *nums2, int len2, int k){
    if(len1 == 0)
        return nums2[k-1];
    else if(len2 == 0)
        return nums1[k-1];

    int i = 0, j = 0;
    for(;i < len1 && j < len2;){
        k--;
        if(nums1[i] < nums2[j]){
            if(k == 0)
                return nums1[i];
            i++;
        }
        else if(k==0)
            return min(nums1[i], nums2[j]);
        else
            j++;
    }
    return (i>=len1) ? nums2[j+k-1] : nums1[i+k-1];
}
