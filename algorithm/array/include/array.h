#ifndef ARRAY_H
#define ARRAY_H

#include<vector>

class Array{
public:
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
