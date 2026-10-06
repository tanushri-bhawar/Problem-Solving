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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode *prev=nullptr,*cur=head;
        int len=1;

        while(cur)
        {
            ListNode *st=cur;
            int cnt=0;
            while(cur && cnt<len) 
            {
                cur=cur->next;
                cnt++;
            }

            if(cnt%2==0) {
                ListNode *p=cur,*q=st;
                while(q!=cur) 
                {
                    ListNode *nxt=q->next;
                    q->next=p;
                    p=q;
                    q=nxt;
                }

                if(prev)prev->next=p;
                else head=p;
                prev=st;
            } 
            else 
            {
                prev=st;
                while(prev->next!=cur)
                    prev=prev->next;
            }
            len++;
        }
        return head;
    
    }
};