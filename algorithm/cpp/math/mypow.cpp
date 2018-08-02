#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    Solution(){}

    double myPow(double x, int n) {
        if(n == 0)
            return 1.0;
        
        if(n < 0)
            return 1.0 / myPow(x, -n);
        if(n % 2 == 0){
            return myPow(x, n/2) * myPow(x, n/2);
        }
        else{
            return x * myPow(x, n/2) * myPow(x, n/2);
        }
    }
    
    double fastPow(double x, long long n){
        if(n == 0)
            return x;
        double half = fastPow(x, n / 2);
        if(n%2)
            return half * half * x;
        else
            return half * half;
    }

    double myPow3(double x, int n){
        long long N = n;
        if(N < 0){
            x = 1/x;
            N = -N;
        }
        return fastPow(x, N);
    }
};

int main(int argc, char** argv){
    Solution s;

    cout<<s.myPow(4.0, 5)<<endl;
    cout<<s.myPow(4.0, -5)<<endl;
    cout<<s.myPow3(-1, -2147483648)<<endl;

    return 0;
}
