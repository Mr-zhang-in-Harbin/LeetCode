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
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head,*q = head;
        while (q && q->next && q->next->next)
        {
            p = p->next;
            q = q->next->next;
            if (p == q) {
                q = head;
                while(p != q) {
                    p = p->next;
                    q = q->next;
                }
                return q;
            }
        }
        return NULL;
    }
};
