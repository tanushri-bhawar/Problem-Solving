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
// class Solution {
// public:

//     bool isMax(ListNode* head)
//     {
//         ListNode* tmp=head->next;
//         while(tmp)
//         {
//             if(tmp->val > head->val ) return true;
//             tmp=tmp->next;
//         }
//         return false;
//     }

//     ListNode* removeNodes(ListNode* head) {
//         ListNode* tmp=head,*prev=NULL;
//         while(tmp)
//         {
            
//             if (isMax(tmp))
//             {
//                 if (tmp == head)
//                 {
//                     head = head->next;
//                     tmp = head;
//                     continue;
//                 }

//                 prev->next = tmp->next;
//                 tmp = tmp->next;
//                 continue;
//             }
//             prev=tmp;
//             tmp=tmp->next;
//         }
//         return head;
//     }
// };

class Solution {
public:
    ListNode* removeNodes(ListNode* head) 
    {
        // Reverse
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

        // Remove nodes smaller than maximum seen so far
        int maxVal = head->val;
        curr = head;

        while (curr && curr->next) {
            if (curr->next->val < maxVal) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                maxVal = curr->val;
            }
        }

        // Reverse back
        prev = nullptr;
        curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};