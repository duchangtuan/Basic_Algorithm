#include<iostream>
#include<stack>

using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
    
    MyQueue() {
            
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }

    void move(){
        while(!s1.empty()){
            int temp = s1.top();
            s1.pop();
            s2.push(temp);
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(s2.empty()){
            move();
        }
        int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        if(s2.empty())
            move();
        int temp = s2.top();
        return temp;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

void test1(){
    MyQueue obj;
    obj.push(1);
    obj.push(2);
    cout<<obj.peek()<<endl;
    cout<<obj.peek()<<endl;
}

int main(int argc, char** argv){
    test1();
    return 0;
}
