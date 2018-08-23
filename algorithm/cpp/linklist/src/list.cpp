#include<iostream>
#include<vector>

#include"../include/list.h"


ListNode *getPartition(ListNode *pBegin, ListNode *pEnd){
    int key = pBegin->val;
    ListNode *p = pBegin;
    ListNode *q = pBegin->next;

    while(q != pEnd){
        if(q->val < key){
            p = p->next;
            std::swap(p->val, q->val);
        }
        q = q->next;
    }
    std::swap(p->val, pBegin->val);
    return p;
}

void LinkList::quickSort(ListNode *p1, ListNode *p2){
    if(p1 != p2){
        ListNode *p = getPartition(p1, p2);
        quickSort(p1, p);
        quickSort(p->next, p2);
    }
}

ListNode *LinkList::getLast(ListNode *p1){
    while(p1!=NULL){
        p1 = p1->next;
    }
    return p1;
}

ListNode *LinkList::createListNode(std::vector<int> &nums){
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

void LinkList::printListNode(ListNode *p){
    while(p){
        std::cout<<p->val<<" ";
        p = p->next;
    }
    std::cout<<"\n\n";
}

ListNode * LinkList::mergedTwoLists(ListNode *l1, ListNode *l2){
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

ListNode *LinkList::mergedTwoLists2(ListNode *l1, ListNode *l2){
    ListNode *merged_head = NULL;
    ListNode *merged_tail = NULL;
    
    while(l1 && l2)
    {
    	if(l1->val < l2->val){
    		if(merged_head == NULL){
    			merged_head = l1;
    			merged_tail = l1;
    		}
    		else{
    			merged_tail->next = l1;
    			merged_tail = merged_tail->next;
    		}
    		l1 = l1->next;
    	}
    	else{
    		if(merged_head == NULL){
    			merged_head = l2;
    			merged_tail = l2;
    		}
    		else{
    			merged_tail->next = l2;
    			merged_tail = merged_tail->next;
    		}
    		l2 = l2->next;
    	}
    }
    if(l1)
    	merged_tail->next = l1;
    if(l2)
    	merged_tail->next = l2;
    return merged_head; 
}

ListNode *LinkList::mergedTwoListsRecursively(ListNode *l1, ListNode *l2){
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

ListNode *LinkList::reverseListNode(ListNode *head) {
    ListNode *pre = NULL, *next;
    while(head){
        next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    return pre;
}

void LinkList::reorderList(ListNode *head){
    if(!head || !head->next || !head->next->next)
        return;

    ListNode *slow = head, *fast = head;
    ListNode *p, *q;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = slow->next;
    slow->next = NULL;

    q = fast;
    q = LinkList::reverseListNode(q);

    std::cout<<"first part is: ";
    LinkList::printListNode(q);
    std::cout<<std::endl;
    std::cout<<"second part is: ";
    LinkList::printListNode(head);
    std::cout<<std::endl;

    p = head;
    while(p && q) {
        ListNode *pnext = p->next, *qnext = q->next;
        p->next = q;
        q->next = pnext;
        p = pnext;
        q = qnext;
    }
}

ListNode *LinkList::mergeList(ListNode *l_head, ListNode *r_head){
    ListNode *merged_head = NULL;
    ListNode *merged_tail = NULL;
    while(l_head && r_head){
        if(l_head->val <= r_head->val){
            if(merged_head == NULL){
                merged_head = l_head;
                merged_tail = l_head;
            }
            else{
                merged_tail->next = l_head;
                merged_tail = merged_tail->next;
            }
            l_head = l_head->next;
        }
        else{
            if(merged_head == NULL){
                merged_head = r_head;
                merged_tail = r_head;
            }
            else{
                merged_tail->next = r_head;
                merged_tail = merged_tail->next;
            }
            r_head = r_head->next;
        }
    }
    if(l_head)
        merged_tail->next = l_head;
    if(r_head)
        merged_tail->next = r_head;

    return merged_head;
}

ListNode *LinkList::sort(ListNode *head, ListNode *tail){
    if(head == NULL)
        return head;
    if(head == tail){
        head->next = NULL;
        return head;
    }
    ListNode *fast = head;
    ListNode *slow = head;
    ListNode *pre;
    while(fast != tail->next && fast != tail){
        fast = fast->next->next;
        pre = slow;
        slow = slow->next;
    }

    ListNode *l_head = LinkList::sort(head, pre);
    ListNode *r_head = LinkList::sort(slow, tail);
    ListNode *merged_head = LinkList::mergeList(l_head, r_head);

    return merged_head;
}

ListNode *LinkList::sortList(ListNode *head){
    if(head == NULL || head->next == NULL)
        return head;
    ListNode *tail = NULL;
    ListNode *cur = head;
    while(cur != NULL){
        tail = cur;
        cur = cur->next;
    }
    return LinkList::sort(head, tail);
}

ListNode *LinkList::removeNthFromEnd(ListNode *head, int n){
    if(head == NULL)
        return NULL;
    ListNode *pslow = head, *pfast = head;
    while(n && pfast){
        pfast = pfast->next;
        n--;
    }
    if(n==0 && pfast==NULL)
        return head->next;
    while(pfast->next){
        pfast = pfast->next;
        pslow = pslow->next;
    }
    pslow->next = pslow->next->next;
    return head;
}

ListNode *LinkList::deleteDuplicates(ListNode *head){
    if(head==NULL || head->next == NULL)
        return NULL;
    ListNode *pbegin = head, *pend = head, *pre = head;
    while(pend->next != NULL){
        pre = pend;
        pend = pend->next;
        if(pre->val != pend->val){
            // the value of previous node is different with current node
            pbegin->next = pend;
            pbegin = pend;
            pre = pend;
 
        }
    }
    if(pbegin != pend)
        pbegin->next = pend->next;
    return head;
}
