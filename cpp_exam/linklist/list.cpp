#include<iostream>
#include<vector>

#include"list.h"


ListNode *createListNode(std::vector<int> &nums){
    ListNode *p1 = new ListNode(0);
    ListNode *p2 = p1;
    for(int i = 0; i < nums.size(); i++){
        ListNode *tmp = new ListNode(nums[i]);
        p1->next = tmp;
        p1 = p1->next;
    }
    p1 = p2;
    p1 = p1->next;
    delete p2;
    return p1;
}

void printNodeList(ListNode *p){
    while(p){
        std::cout<<p->val<<" ";
        p = p->next;
    }
}

ListNode * mergedTwoLists(ListNode *l1, ListNode *l2){
    ListNode *result = new ListNode(0);
    ListNode *p3 = result;
    ListNode *p1 = l1, *p2 = l2;

    while(p1 && p2) {
        if(p1->val < p2->val){
            p3->next = p1;
            p1 = p1->next;
        }else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    if(p1)
        p3->next = p1;
    if(p2)
        p3->next = p2;
    p3 = result;
    result = result->next;
    delete p3;
    return result;
}

ListNode *mergedTwoListsRecursively(ListNode *l1, ListNode *l2){
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    if(l1->val < l2->val){
        l1->next = mergedTwoListsRecursively(l1->next, l2);
        return l1;
    }else{
        l2->next = mergedTwoListsRecursively(l1, l2->next);
        return l2;
    }
}

int main(int argc, char** argv)
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    std::vector<int>  ivec1(arr1, arr1+5);
    ListNode *p1 = createListNode(ivec1);

    std::vector<int> ivec2(arr2, arr2+5);
    ListNode *p2 = createListNode(ivec2);

    std::cout<<"Node list p1 = ";
    printNodeList(p1);
    std::cout<<std::endl;

    std::cout<<"Node list p2 = ";
    printNodeList(p2);
    std::cout<<std::endl;

    ListNode *p = mergedTwoListsRecursively(p1, p2);
    std::cout<<"Node list after merged = ";
    printNodeList(p);
    std::cout<<std::endl;

}
