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
    int len(ListNode* head)
    {
        int count = 0;
        while(head != nullptr)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = len(head);
        // cout<<n<<endl;
        vector<ListNode*>ans;
        int subsize;
        int extra = n%k;
        ListNode* curr = head,*prev = nullptr;
        while(head)
        { 
            subsize = n/k;
            ans.push_back(curr);
            while(subsize)
            {
                prev = curr;
                curr = curr->next;
                subsize--;
            }
            if(extra != 0 && curr != nullptr)
            {
                prev = curr;
                curr = curr->next;
                extra--;
            }
            if(prev != nullptr)
            {
                head = curr;
                prev->next = nullptr;
            }
        }
        
        while(k>n)
        {
            ans.push_back(nullptr);
            n++;
        }
        return ans;
    }
};