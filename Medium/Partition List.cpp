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
    ListNode* partition(ListNode* head, int x) {
        if (!head || !head->next)
            return head;                  
        
        ListNode *res = new ListNode(0);
        ListNode *max =res;
        res->next = head;
        while (max->next && max->next->val >= x)
            max = max->next;
        if (!max->next)
            return head;
        ListNode *min_star = max->next,*min = max->next,*q = min->next;
        while (q)
        {
            if (q->val < x) {
                min->next = q;
                min = min->next;
            }
            else {
                max->next = q;
                max = max->next;
            }            
            q = q->next;
        }
        max->next = NULL;
        min->next = res->next;
        return min_star;
    }
};
