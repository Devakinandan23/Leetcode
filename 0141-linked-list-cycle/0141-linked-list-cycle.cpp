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
        ListNode *start = new ListNode();
        ListNode *fast = start;
        ListNode *slow = start;
        start->next = head;
        while(fast != nullptr && fast->next != nullptr && slow != nullptr)
        {
            fast = fast->next;
            fast = fast->next;
            slow = slow->next;
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};