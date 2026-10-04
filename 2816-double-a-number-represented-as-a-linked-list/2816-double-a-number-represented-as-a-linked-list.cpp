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
    ListNode* doubleIt(ListNode* head) {
        ListNode* tmp=head,*last=NULL;
        string num="";
        while(tmp)
        {
            num+=char(tmp->val+'0'); 
            tmp=tmp->next;
        }
        int carry=0;

        for(int i=num.size()-1;i>=0;i--)
        {
            int x=(num[i]-'0')*2+carry;
            num[i]=char((x%10)+'0');
            carry=x/10;
        }

        if(carry)
            num=char(carry+'0')+num;

        tmp=NULL;
        last=NULL;

        for(char c:num)
        {
            ListNode* nw=new ListNode(c-'0');

            if(tmp==NULL)
                tmp=nw;
            else
                last->next=nw;

            last=nw;
        }

        return tmp;

    }
};