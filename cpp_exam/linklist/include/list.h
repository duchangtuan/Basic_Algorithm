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
};

#endif // NODELIST_H

