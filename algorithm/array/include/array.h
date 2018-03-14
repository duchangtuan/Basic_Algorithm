#ifndef ARRAY_H
#define ARRAY_H

#include<vector>

class Array{
public:
    // Given an array of integers, return indices of the two numbers 
    //such that they add up to a specific target.
    std::vector<std::vector<int> > twosum(std::vector<int> &nums, int target);

    int maxSubArray(std::vector<int> &nums);

    // use dynamic program to solve the problem
    int maxSubArray_dp(std::vector<int> &nums);

    // get the max profit in stock market, you can only buy and sell one time
    int max_profit_one_time(std::vector<int> &nums);

    // get the max profit in stock market using dp, you can only buy and sell
    // one time
    int max_profit_one_time_dp(std::vector<int> &nums);

    // get the max profit in stock market, you can buy and sell multiple times
    // but you must sell before you buy.
    int max_profit_multiple_times(std::vector<int> &nums);
    
};

#endif // ARRAY_H
