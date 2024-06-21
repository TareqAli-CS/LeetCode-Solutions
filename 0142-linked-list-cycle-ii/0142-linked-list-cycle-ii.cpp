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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow,*fast;
        slow = head;
        fast = head;
        while(fast != 0 && fast->next != 0)
        {
            slow = slow ->next;
            fast = fast ->next->next;
            if(slow == fast)
            {
                break;                
            }
        }
        if(fast == 0 || fast ->next  == 0)
            return 0;
        
                slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;

    }
};