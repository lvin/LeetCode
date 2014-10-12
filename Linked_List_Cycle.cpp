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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) {
            return false;
        } 
        ListNode *fast_pointer = head;
        ListNode *slow_pointer = head;
        while(fast_pointer != NULL && fast_pointer->next != NULL) {
            slow_pointer = slow_pointer->next;
            fast_pointer = fast_pointer->next->next;
            if(slow_pointer == fast_pointer) {
                return true;
            }
        }
        
            return false;
        
    }
};

