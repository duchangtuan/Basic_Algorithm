#include<iostream>
#include"mystring.h"
using namespace std;

void test_reverse(){
    
    MyString my;
    string str = "hello world";
    cout<<my.reverseString(str)<<endl;
    cout<<my.reverseString2(str)<<endl;
}

void test_atoi(){
    MyString my;
    string str = "+1234";
    cout<<my.atoi(str)<<endl;
}

void test_findFirstNonDuplicateChar(){
    MyString my;
    string str = "abcdefa";
    cout<<my.findFirstNonDuplicateChar(str)<<endl;
}

void test_lengthOfLongestSubstring(){
    MyString my;
    string str = "abcdabceda";
    cout<<my.lengthOfLongestSubstring(str)<<endl;
}

int main(){
    test_reverse();
    test_atoi();
    test_findFirstNonDuplicateChar();
    test_lengthOfLongestSubstring();

    return 0;
}   
