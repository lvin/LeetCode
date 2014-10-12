/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        ListNode *p, *head;
        if (l1->val < l2->val) {
            head = p = l1;
            l1 = l1->next;
        } else {
            head = p = l2;
            l2 = l2->next;
        }
        
        while(l1 && l2) {
            if(l1->val < l2->val) {
                p->next = l1;
                p = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }
        
        if (l1) {
            p->next = l1;
        }
        if (l2) {
            p->next = l2;
        }
        return head;
    }
};

