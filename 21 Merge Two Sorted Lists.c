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
        
   	    ListNode*  TM = new ListNode(-1);
		ListNode* result = TM;
		
		if (l1 == NULL && l2 == NULL) return NULL;
		if (l1 == NULL && l2 != NULL) return l2;
		if (l2 == NULL && l1 != NULL) return l1;


		while (l1 != NULL && l2 != NULL)
		{
			if (l1->val > l2->val)
			{
				result->next = new ListNode(l2->val);
				result = result->next;
				l2 = l2->next;
			}
			else if (l1->val < l2->val)
			{
				result->next = new ListNode(l1->val);
				result = result->next;
				l1 = l1->next;
			}
			else
			{
				result->next = new ListNode(l1->val);
				result = result->next;
				result->next = new ListNode(l2->val);
				result = result->next;
				l1 = l1->next;
				l2 = l2->next;
			}
		}

		if (l1 == NULL && l2 != NULL)
		{
			while (l2)
			{
				result->next = new ListNode(l2->val);
				result = result->next;
				l2 = l2->next;
			}
		}

		if (l2 == NULL && l1 != NULL)
		{
			while (l1)
			{
				result->next = new ListNode(l1->val);
				result = result->next;
				l1 = l1->next;
			}
		}
        
        
        
		return TM->next;
    }
};
