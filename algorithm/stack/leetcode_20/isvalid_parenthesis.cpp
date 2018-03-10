#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool is_valid(string s){
    int len = s.size();
    stack<char> left_pars_stack;
    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            left_pars_stack.push(s[i]);
        }
        else{
            if(left_pars_stack.empty())
                return false;
            else{
                char temp = left_pars_stack.top();
                if(s[i] == ')' && temp == '(' || s[i] == ']' && temp == '[' || s[i] == '}' && temp == '{')
                    left_pars_stack.pop();
                else
                    return false;
            }
        }
    }
    if(left_pars_stack.empty())
        return true;
    else
        return false;
}

void test1(){
    string s = "[";
    cout<<s<<" "<<is_valid(s)<<endl;
    string s2 = "()";
    cout<<s2<<" "<<is_valid(s2)<<endl;
    string s3 = "(([]))";
    cout<<s3<<" "<<is_valid(s3)<<endl;
}

int main(int argc, char** argv){
    test1();

    return 0;
}
