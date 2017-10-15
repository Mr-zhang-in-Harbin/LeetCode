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
	ListNode* swapPairs(ListNode* head) {
		if (!head || !head->next)
			return head;
		ListNode *res = new ListNode(0);
		res->next = head;
		ListNode *p = res->next;
		ListNode *q = res;
		while (p)
		{
			q->next = p->next;
			p->next = p->next->next;
			q->next->next = p;
			if (!p->next || !p->next->next)
				return res->next;
			else {
				q = q->next->next;
				p = p->next;
			}
		}
		return res->next;
	}
};