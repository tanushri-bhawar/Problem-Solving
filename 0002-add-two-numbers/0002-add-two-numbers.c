/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL, *last = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        
        int sum = carry;
        carry=0;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        struct ListNode* nw = (struct ListNode*) malloc(sizeof(struct ListNode));
        nw->val = sum % 10;
        nw->next = NULL;

        carry = sum / 10;

        if (head == NULL) {
            head = nw;
        } else {
            last->next = nw;
        }

        last = nw;
    }

    return head;
}