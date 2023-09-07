/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* ptr = dummy;
        ListNode* l1 = list1, *l2 = list2;
        while(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                ptr->next = l2;
                l2 = l2->next;
            }
            else
            {
                ptr->next = l1;
                l1 = l1->next;
            }
            ptr = ptr->next;
        }
        if(l1) ptr->next = l1;
        else if(l2) ptr->next = l2;
        
        return dummy->next;
    }
};