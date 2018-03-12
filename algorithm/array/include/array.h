#ifndef ARRAY_H
#define ARRAY_H

#include<vector>

class Array{
public:
    int maxSubArray(std::vector<int> &nums);

    // use dynamic program to solve the problem
    int maxSubArray_dp(std::vector<int> &nums);
};

#endif // ARRAY_H
