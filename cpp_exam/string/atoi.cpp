#include<iostream>
#include<string>

using namespace std;

int atoi(string str){
    int len = str.size();
    if(!len)
        return 0;

    int sign = 1;
    long long ret_64 = 0;
    int i = 0;
    while(str[i] == ' ')
        i++;

    if(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-')
            sign = -1;
        i++;
    }

    for(; i < len; i++){
        if('0' <= str[i] && '9' >= str[i]){
            ret_64 = ret_64 * 10 + str[i] - '0';
            if(sign == -1 && ret_64 > 2147483648LL)
                return -2147483648;
            if(sign == 1 && ret_64 > 2147483647LL) 
                return 2147483647;
        }
        else
            break;
    }
    return sign * ret_64;
}

int main(int argc, char **argv){
    string str1 = "010";
    cout<<atoi(str1)<<endl;
}