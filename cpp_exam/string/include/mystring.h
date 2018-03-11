#ifndef MY_STRING_H
#define MY_STRING_H

#include<string>
using namespace std;

class MyString{
public:
    MyString(){}
    //MyString(string str): _str(str){}

    string reverseString(string str);
    int atoi(string str);

private:
    //string _str;
};

#endif // MY_STRING_H
