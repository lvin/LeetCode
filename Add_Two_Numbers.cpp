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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if (l1 == NULL || l2 == NULL)
         return l1 == NULL ? l2:l1;
         
        ListNode *head = NULL;
        ListNode **prev = &head;
        int carry = 0;
        while (l1  || l2)
        {
            ListNode *pter = new ListNode(0);
            int l1_addend = (l1 == NULL ? 0:(l1->val));
            int l2_addend = (l2 == NULL ? 0:(l2->val));
            int temp = l1_addend + l2_addend +carry;
            if (temp >= 10)
            {
                carry = 1;
                temp -= 10;
            }
            else
            {
                carry = 0;
            }
            pter->val = temp;
            *prev = pter;
            prev = &((*prev)->next);
            l1 = ((l1 == NULL) ? NULL:(l1->next));
            l2 = ((l2 == NULL) ? NULL:(l2->next));
        }
        
        if (carry == 1)
        {
            ListNode *pter = new ListNode(1);
            *prev = pter;
        }
        
        return head;
    }
    
};

