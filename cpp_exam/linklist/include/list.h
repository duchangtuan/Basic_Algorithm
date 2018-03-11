#ifndef NODELIST_H
#define NODELIST_H

#include<vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

class LinkList {
public:
    
    ListNode *createListNode(std::vector<int> &nums);
    void printListNode(ListNode *head);
    ListNode *mergedTwoLists(ListNode *l1, ListNode *l2);
    ListNode *mergedTwoListsRecursively(ListNode *l1, ListNode *l2);

    // Given a singly linked list L: L0→L1→…→Ln-1→Ln,
    // reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…
    void reorderList(ListNode *head);

    // Reverse the ListNode
    ListNode *reverseListNode(ListNode *head);
    // Merge two sorted linked list
    ListNode *mergeList(ListNode *l_head, ListNode *r_head);
    // Sort list
    ListNode *sort(ListNode *head, ListNode *tail);
    // sortList
    ListNode *sortList(ListNode *head);
    // remove Nth from end
    ListNode * removeNthFromEnd(ListNode *head, int n);
};

#endif // NODELIST_H


