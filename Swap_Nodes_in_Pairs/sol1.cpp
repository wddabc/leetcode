/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Swap_Nodes_in_Pairs.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sun Jan 26 22:11:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *swapPairs(ListNode *head) {
        ListNode dummy(0), *ptr = &dummy;
        ptr->next = head;
        while (ptr->next){
            ListNode *n1 = ptr->next;
            ListNode *n2 = n1->next;
            if (!n2) break;
            ptr->next = n2;
            n1->next = n2->next;
            n2->next = n1;
            ptr = n1;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
