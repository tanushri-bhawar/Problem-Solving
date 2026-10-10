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
    ListNode* mergeInBetween(ListNode* list1,int a,int b,ListNode* list2) 
    {
        ListNode* tmp1=list1;

        for(int i=0;i<a-1;i++) 
        {
            tmp1=tmp1->next;
        }

        ListNode*tmp2=tmp1;
        for(int i =a-1;i<=b;i++) 
        {
            tmp2=tmp2->next;
        }

        tmp1->next=list2;

        while(list2->next!=nullptr) 
        {
            list2=list2->next;
        }

        list2->next=tmp2;

        return list1;
    }
};
