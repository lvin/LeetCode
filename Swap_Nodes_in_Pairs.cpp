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
    ListNode *swapPairs(ListNode *head) {
        if (head == NULL || head->next == NULL) return head;
        
        ListNode **pCurr = &head, *pnext = NULL;
        while ((*pCurr) && (*pCurr)->next)
        {
            pnext = (*pCurr)->next;
            (*pCurr)->next = pnext->next;
            pnext->next = (*pCurr);
            *pCurr = pnext;
            pCurr = &((*pCurr)->next->next);
        }
        
        return head;
    }
};

