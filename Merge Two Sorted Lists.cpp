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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode r(INT_MAX),*t;
        t = &r;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
                t->next = l1, l1 = l1->next;
            else t->next = l2, l2 = l2->next;
            t=t->next;
        }
        t->next = l1 ? l1 : l2;
        return r.next;
    }
};