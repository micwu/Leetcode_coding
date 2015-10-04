#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;

 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;
		int carry = 0;
		
		ListNode *tail = new ListNode(0);
		ListNode *ptr = tail;

		while (l1 != NULL || l2 != NULL)
		{

			int val1 = 0;
			if (l1 != NULL)
			{
				val1 = l1->val;
				l1 = l1->next;
			}
			int val2 = 0;
			if (l2 != NULL)
			{
				val2 = l2->val;
				l2 = l2->next;
			}

			int count = val1 + val2 + carry;
			ptr->next = new ListNode(count % 10);
			carry = count / 10;
			ptr = ptr->next;
		}
		if (carry == 1)
		{
			ptr->next = new ListNode(1);
		}
		return tail->next;
	}
};
	
	int main()
	{	
		
		ListNode  *p1 = new ListNode(2);
		ListNode *p3 = p1;
		p1->next = new ListNode(4);
		p1 = p1->next;
		p1->next = new ListNode(3);

		ListNode  *p2 = new ListNode(2);
		ListNode *p4 = p2;
		p2->next = new ListNode(4);
		p2 = p2->next;
		p2->next = new ListNode(3);
		
		
		Solution c;
		ListNode *tmp = c.addTwoNumbers(p3,p4);
		while (tmp != NULL)
		{
			cout << tmp->val;
			tmp = tmp->next;
			cout << " ";
		}
		system("pause");
	}
