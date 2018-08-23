#include<iostream>
#include<vector>
#include"../include/list.h"

using namespace std;

void test_merge(){
    LinkList link1, link2;
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    vector<int>  ivec1(arr1, arr1+5);
    ListNode *p1 = link1.createListNode(ivec1);

    vector<int> ivec2(arr2, arr2+5);
    ListNode *p2 = link1.createListNode(ivec2);

    cout<<"Node list p1 = ";
    link1.printListNode(p1);
    cout<<endl;

    cout<<"Node list p2 = ";
    link2.printListNode(p2);
    cout<<endl;

    //ListNode *p = link1.mergedTwoListsRecursively(p1, p2);
    ListNode *p = link1.mergedTwoLists2(p1, p2);
    cout<<"Node list after merged = ";
    link2.printListNode(p);
    cout<<endl;
}

void test_reorder(){
    LinkList link1;
    int arr1[] = {1, 4, 3, 2, 5};
    vector<int> ivec1(arr1, arr1+5);
    ListNode *p1 = link1.createListNode(ivec1);

    cout<<"Original List Node = ";
    link1.printListNode(p1);
    cout<<endl;

    link1.reorderList(p1);

    cout<<"After reorder, the list node = ";
    link1.printListNode(p1);
    cout<<endl;
}

void test_quicksort(){
    LinkList link1;
    int arr[] = {1, 4, 3, 2, 5};
    vector<int> ivec1(arr, arr+5);
    ListNode *p1 = link1.createListNode(ivec1);

    cout<<"Original List Node = ";
    link1.printListNode(p1);
    cout<<endl;

    ListNode *p2 = link1.getLast(p1);
    link1.quickSort(p1, p2);

    cout<<"After reorder, the list node = ";
    link1.printListNode(p1);
    cout<<endl;
}

void test_merge2(){
	LinkList link1, link2, link3;
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int arr3[] = {1, 3, 4, 9, 7, 2, 8, 5};
    vector<int>  ivec1(arr1, arr1+5);
    ListNode *p1 = link1.createListNode(ivec1);

    vector<int> ivec2(arr2, arr2+5);
    ListNode *p2 = link1.createListNode(ivec2);

    cout<<"Node list p1 = ";
    link1.printListNode(p1);
    cout<<endl;

    cout<<"Node list p2 = ";
    link2.printListNode(p2);
    cout<<endl;

    ListNode *p = link1.mergeList(p1, p2);
    cout<<"Node list after merged = ";
    link2.printListNode(p);
    cout<<endl;
    vector<int> ivec3(arr3, arr3+8);
    ListNode *p3 = link3.createListNode(ivec3);

    cout<<"before sort, the list is: ";
    link3.printListNode(p3);
    cout<<endl;
    ListNode *head = link3.sortList(p3);
    cout<<"after sort, the list is: ";
    link3.printListNode(head);
    cout<<endl;
}

void test_removeNthFromEnd(){
    LinkList link;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2};
    vector<int> ivec1(arr1, arr1+5);;
    ListNode *p1 = link.createListNode(ivec1);

    cout<<"Node list p1 = ";
    link.printListNode(p1);
    cout<<endl;
    p1 = link.removeNthFromEnd(p1, 2);
    cout<<"Node list after remove 2nd from end is: ";
    link.printListNode(p1);
    cout<<endl;
    p1 = link.removeNthFromEnd(p1, 4);
    cout<<"Node list after rempve 4th from end is: ";
    link.printListNode(p1);
    cout<<endl;
    
}

void test_deleteDuplicates(){
    LinkList link;
    int arr[] = {1, 1, 1, 1};
    vector<int> ivec(arr, arr+4);
    ListNode *p1 = link.createListNode(ivec);
    link.printListNode(p1);
    p1 = link.deleteDuplicates(p1);
    link.printListNode(p1);
    cout<<endl; 
}

int main(int argc, char** argv){
    test_merge();
    //test_reorder();
    test_merge2();
    test_quicksort();
    //test_removeNthFromEnd();
    //test_deleteDuplicates();
}
