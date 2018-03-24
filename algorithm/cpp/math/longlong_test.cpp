#include<iostream>
#include<climits>
#include<float.h>
using namespace std;

// the program only can be run with C++11

int main(int argc, char** argv){

    
    long long ll_min = LLONG_MIN;
    long long ll_max = LLONG_MAX;

    cout<<"long long min value is "<<ll_min<<endl;
    cout<<"long long max value is "<<ll_max<<endl;

    cout<<"long long value has "<<sizeof(1LL)<<" bytes"<<endl;
    cout<<"int value has "<<sizeof(1)<<" bytes"<<endl;

    double d_min = DBL_MIN;
    double d_max = DBL_MAX;
    
    cout<<"double min value is "<<d_min<<endl;
    cout<<"double max value is "<<d_max<<endl; 

    return 0;
}
