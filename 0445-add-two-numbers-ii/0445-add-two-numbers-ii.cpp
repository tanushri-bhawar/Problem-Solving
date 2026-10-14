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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;

        while(l1)
        {
            arr1.push_back(l1->val);
            l1=l1->next;
        }

        while(l2)
        {
            arr2.push_back(l2->val);
            l2=l2->next;
        }

        int i=arr1.size()-1;
        int j=arr2.size()-1;
        int carry=0;

        while(i>=0 || j>=0 || carry)
        {
            int sum=carry;

            if(i>=0)
            {
                sum+=arr1[i];
                i--;
            }

            if(j>=0)
            {
                sum+=arr2[j];
                j--;
            }

            ans.push_back(sum%10);
            carry=sum/10;
        }

        ListNode* head=NULL;

        for(int i=0;i<ans.size();i++)
        {
            ListNode* node=new ListNode(ans[i]);
            node->next=head;
            head=node;
        }

        return head;
    }
};
