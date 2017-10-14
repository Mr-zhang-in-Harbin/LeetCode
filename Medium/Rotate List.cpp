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
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0 || !head)
            return head;
        ListNode *p = head;
        int count = 0;
        while (p)
        {
            p = p->next;
            count++;
        }
        if (k % count == 0)
            return head;
        count = count - k % count;
        p = head;
        while (--count)
            p = p->next;
        ListNode *q = p->next;
        p->next = NULL;
        p = q;
        while (q->next)
            q = q->next;
        q->next = head;
        return p;
    }
};
