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
ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode **slow = &head, **fast = &head;
    while (--n)
    {
        fast = &((*fast)->next);
    }
    
    while ((*fast)->next)
    {
        slow = &((*slow)->next);
        fast = &((*fast)->next);
    }
    
     ListNode *entry = *slow;
    *slow = (*slow)->next;
    delete entry;
    return head;
}
};

