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
    ListNode* New(ListNode *res,int val) {
        ListNode *temp = new ListNode(val);
        temp->next = res;
        return temp;
    }
    
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next )
            return true;
        ListNode *p = head;
        ListNode *res = NULL;
        while (p)
        {
            res = New(res,p->val);
            p = p->next;
        }
        p = head;
        while (p)
        {
            if (p->val != res->val)
                return false;
            p = p->next;
            res = res->next;
        }
        return true;
    }
};
