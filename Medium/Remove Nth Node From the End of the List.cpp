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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		if (!head)
			return head;
		int count = 0;
		ListNode *p = head;
		while (p)
		{
			p = p->next;
			count++;
		}
		if (count < n)
			return head->next;
		ListNode *res = new ListNode(0);
		res->next = head;
		p = res;
		count = count - n;
		while (count--)
			p = p->next;
		p->next = p->next->next;
		return res->next;
	}
};