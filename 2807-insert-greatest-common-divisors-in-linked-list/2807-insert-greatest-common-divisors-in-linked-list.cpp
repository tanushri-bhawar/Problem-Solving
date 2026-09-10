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
    int GCD(int x, int y) {
        while (y != 0) {
            int temp = x % y;
            x = y;
            y = temp;
        }
        return x;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* prev=head;
        ListNode* nextt=head->next;

        while (nextt) 
        {
            ListNode* nw=new ListNode(GCD(prev->val,nextt->val));

            prev->next = nw;
            nw->next = nextt;

            prev = nextt;
            nextt = nextt->next;
        }

        return head;
    }
};