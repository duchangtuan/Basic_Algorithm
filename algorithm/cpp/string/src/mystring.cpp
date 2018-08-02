#include<iostream>
#include<vector>
#include"mystring.h"

using namespace std;

string MyString::reverseString(string str){
    string ret = "";
    for(int i = 0; i < str.size(); i++)
        ret.insert(0, 1, str[i]);

    return ret;
}

string MyString::reverseString2(string str){
    int len = str.size();
    string ret = str;
    for(int i = 0; i < len / 2; i++){
        char temp = ret[i];
        ret[i] = ret[len-1-i];
        ret[len-i-1] = temp;
    }
    return ret;
}

char MyString::findFirstNonDuplicateChar(string str){
    vector<char> vec(256);
    
    for(unsigned int i = 0; i < str.size(); i++){
        vec[str[i]]++;
    }
    for(unsigned int i = 0; i < str.size(); i++){
        if(vec[str[i]] == 1)
            return str[i];
    }
    return -1;
}


int MyString::atoi(string str){
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
        if(str[i] >= '0' && str[i] <= '9'){
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

int MyString::lengthOfLongestSubstring(string str){
    vector<int> ivec(256);
    for(int i = 0; i < 256; i++)
        ivec.push_back(0);

    int len = 0, maxlen = 0;
    int start = 0, maxstart = 0;
    int i = 0;
    while(i < str.size()){
        if(ivec[str[i]] == 1){
            if(len > maxlen){
                maxlen = len;
                start = maxstart;
            }
            while(str[i] != str[start]){
                ivec[str[i]] = 0;
                start++;
                len--;
            }
            start++;
        }
        else{
            ivec[str[i]] = 1;
            len++;
        }
        i++;
    }    
    if(len > maxlen){
        maxlen = len;
        maxstart = start;
    }
    return maxlen;
}
