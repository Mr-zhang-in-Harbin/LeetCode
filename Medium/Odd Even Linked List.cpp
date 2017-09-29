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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        ListNode *p = head, *q = head->next,*qh = head->next;
        while (p->next->next && q->next->next){
            p->next = q->next;
            p = p->next;
            q->next = p->next;
            q = q->next;
        }
        if (p->next->next) {p->next = q->next; p = p->next; q->next = NULL;}
        p->next = qh;
        return head;
    }
};
