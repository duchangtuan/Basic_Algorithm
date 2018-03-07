#include<iostream>
#include<vector>
using namespace std;

// get the maximum profit but only buy and sell one time
int max_profit_one_time(vector<int> &nums){
    int cur_profit = 0, max_profit = 0;
    int min_price = nums[0];
    for(int i = 1; i < nums.size(); i++){
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
int max_profit_multiple_times(vector<int> &nums){
    if(nums.size() <= 1)
        return 0;
    int max_profit = 0;
    for(int i = 1; i < nums.size(); i++){
        max_profit += nums[i] > nums[i-1] ? nums[i] - nums[i-1] : 0;
    }
    return max_profit;
}

int main(int argc, char** argv){
    int A[] = {4, 7, 8, 2, 8};
    vector<int> nums(A, A+5);
    
    cout<<"Buy and sell only one time the maximum profit is ";
    cout<<max_profit_one_time(nums)<<endl;

    cout<<"Buy and sell mulitple times the maximum profit is ";
    cout<<max_profit_multiple_times(nums)<<endl;

    return 0;
}
