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
	void reorderList(ListNode* head) {
		if (!head || !head->next)
			return;
		int count = 0;
		ListNode *p = head;
		ListNode *res = new ListNode(0), *q = res;
		res->next = head;
		while (p)
		{
			count++;
			p = p->next;
		}
		count = (count + 1) / 2;
		while (--count)
		{
			p = q;
			while (p->next->next)
				p = p->next;
			p->next->next = q->next->next;
			q->next->next = p->next;
			p->next = NULL;
			q = q->next->next;
		}
	}
};