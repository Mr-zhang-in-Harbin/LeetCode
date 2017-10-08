/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode *res = new ListNode(1),*q = res, *p = head->next;
        int mode = 0;
        res->next = head;
        while (p) {
            if (q->next->val == p->val) {
                p = p->next;
                mode = 1;                
            }
            else if (mode == 1) {
                q->next = p;
                p = p->next;
                // p = p->next;
                // q = q->next;
                mode = 0;
            }
            else {
                p = p->next;
                q = q->next;
            }               
        }
        if (mode == 1) {
            q->next = NULL;
        }
        return res->next;
    }
};
