#include<iostream>
#include<vector>
#include"list.h"

void test_merge(){
    LinkList link1, link2;
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    std::vector<int>  ivec1(arr1, arr1+5);
    ListNode *p1 = link1.createListNode(ivec1);

    std::vector<int> ivec2(arr2, arr2+5);
    ListNode *p2 = link1.createListNode(ivec2);

    std::cout<<"Node list p1 = ";
    link1.printListNode(p1);
    std::cout<<std::endl;

    std::cout<<"Node list p2 = ";
    link2.printListNode(p2);
    std::cout<<std::endl;

    ListNode *p = link1.mergedTwoListsRecursively(p1, p2);
    std::cout<<"Node list after merged = ";
    link2.printListNode(p);
    std::cout<<std::endl;
}

void test_reorder(){
    LinkList link1;
    int arr1[] = {1, 2, 3, 4, 5};
    std::vector<int> ivec1(arr1, arr1+5);
    ListNode *p1 = link1.createListNode(ivec1);

    std::cout<<"Original List Node = ";
    link1.printListNode(p1);
    std::cout<<std::endl;

    link1.reorderList(p1);

    std::cout<<"After reorder, the list node = ";
    link1.printListNode(p1);
    std::cout<<std::endl;
}

int main(int argc, char** argv){
    //test_merge();
    test_reorder();
}
