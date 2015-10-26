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
       			if (head == NULL) return head;
		if (head->next == NULL) return head;
		int temp;
		ListNode* p = head;
		ListNode* RES = p;
		ListNode* q = head->next;

		while (q != NULL && p != NULL)
		{
			int temp = p->val;
			p->val = q->val;
			q->val = temp;
			p = p->next->next;
	
			if (q->next != NULL)
			q = q->next->next;
			else
			{
				q = q->next;
			}
		}
		return RES;
    }
};
