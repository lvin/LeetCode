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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode *curr_node = head;
        ListNode *next_node = head->next;
        
        while(next_node != NULL) {
            if (curr_node->val == next_node->val) {
                ListNode *temp = next_node;
                next_node = next_node->next;
                curr_node->next = next_node;
                delete temp;
            } else {
                curr_node = next_node;
                next_node = next_node->next;
            }
        }
        
        return head;
    }

	//The second solution
	ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL || head->next == NULL) return head;
        
        ListNode **pCurr = &head;
        
        while((*pCurr)->next)
        {
            ListNode *entry = (*pCurr);
            
            if((*pCurr)->val == entry->next->val)
            {
                *pCurr = entry->next;
                delete entry;
            }
            else
            {
                pCurr = &(*pCurr)->next;
            }
            
        }
        
        return head;
    }	
};


