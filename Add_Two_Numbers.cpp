/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Add_Two_Numbers.cpp
* Purpose :
* Creation Date : 17-12-2013
* Last Modified : Tue Dec 17 02:52:59 2013
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	};
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
	ListNode *ln = new ListNode(0); 
	ListNode *curln = ln;
	int adv = 0, rem = 0;
	while(1){
		int n1 = adv, n2 = 0;
		bool l1v = 0, l2v = 0;
		if(l1){
			n1 += l1->val;
			l1 = l1->next;
			l1v = 1;
		}
		if(l2){
			n2 += l2->val;
			l2 = l2->next;
			l2v = 1;
		}
		int sum = n1 + n2;
		adv = sum/10;
		rem = sum%10;
		if (!(l1v||l2v||rem)) break;
		curln->next = new ListNode(rem);
		curln = curln->next;
	}
	return ln->next;
}
int main(int argc, const char* argv[])
{
	cout << addTwoNumbers(new ListNode(0), new ListNode(0))->val << endl;
	return 0;
}
