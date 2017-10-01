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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *res = new ListNode(0), *p, *q;
        res->next = head;
        p = res, q = head;
        while(q)
        {
            if (q->val == val){
                p->next = q->next;
                free(q);
                q = p->next;
            }
            else {
                p = p->next;
                q = q->next;
            }
        }
        return res->next;
    }
};
