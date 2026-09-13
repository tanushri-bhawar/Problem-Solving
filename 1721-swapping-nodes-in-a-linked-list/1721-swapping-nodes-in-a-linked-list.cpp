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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        if (head==NULL) return NULL;

        int cnt=0;
        ListNode*tmp=head;

        while(tmp!=NULL) 
        {
            cnt++;
            tmp =tmp->next;
        }

        ListNode* first=head;
        ListNode* second=head;
        for (int i=1;i<=cnt;i++) 
        {
            if (i<k)
                first=first->next;

            if (i< cnt-k+1)
                second=second->next;
        }

        swap(first->val,second->val);

        return head;
    }
};