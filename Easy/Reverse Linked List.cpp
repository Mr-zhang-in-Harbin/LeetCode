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
    ListNode *reverse(ListNode *res,int val){
        ListNode *temp = new ListNode(val);
        temp->next = res;
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *p = head, *res = NULL;
        while (p)
        {
            res = reverse(res,p->val);
            p = p->next;
        }
        return res;
    }
};
