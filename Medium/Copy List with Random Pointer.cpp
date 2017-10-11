/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if (!head)
            return NULL;
        RandomListNode *res, *p, *q;
        for (p = head; p != NULL;p = p->next->next)
        {
            q = new RandomListNode(p->label);
            q->next = p->next;
            p->next = q;
        }
        res = head->next,q = res;
        for (p = head;p != NULL;p = p->next->next)
        {
            if (p->random)
                p->next->random = p->random->next;
            else p->next->random = NULL;
        }
        for (p = head;p != NULL;p= p->next,q = q->next)
        {
            p->next = p->next->next;
            if (q->next)
                q->next = q->next->next;
            else q->next = NULL;
        }
        return res;
    }
};
