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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* nw=NULL,*tmp=head,*prev=head;
        while(prev)//i
        {
            ListNode*minn=NULL;
            int min=prev->val;
            tmp=prev;
            while(tmp)//j
            {
                if(tmp->val<min)
                {
                    minn=tmp;
                    min=tmp->val;
                }
                tmp=tmp->next;
            }
            int dummy=prev->val;
            prev->val=min;
            if(minn)
                minn->val=dummy;
            prev=prev->next;
        }
        return head;
    }
};