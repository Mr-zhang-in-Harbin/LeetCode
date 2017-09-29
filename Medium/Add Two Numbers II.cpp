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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1 = 0,n2 = 0,carry = 0;
        ListNode *p1 = l1,*p2 = l2,*res = NULL;
        while (p1) {p1 = p1->next; n1++;}
        while (p2) {p2 = p2->next; n2++;}
        p1 = l1,p2 = l2;
        while (n1 > 0 && n2 > 0){
            int sum = 0;
            if (n1 >= n2) {sum += p1->val; p1 = p1->next; n1--;}
            if (n2 > n1) {sum += p2->val; p2 = p2->next; n2--;}
            res = add(sum,res);
        }
        // return res;
        p1 = res, p2 = NULL;
        while (res){
            res->val += carry;
            carry = res->val / 10;
            res->val %= 10;
            p2 = add(res->val,p2);
            res = res->next;
        }
        if (carry) p2 = add(1,p2);
        return p2;
    }
    ListNode *add(int val,ListNode *res){
        ListNode *temp = new ListNode(val);
        temp->next = res;
        return temp;
    }
};
