/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Swap_Nodes_in_Pairs.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 14:57:08 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *swapPairs(ListNode *head) {
        ListNode res(0);
        res.next = head;
        ListNode *tmp = &res;
        while (tmp->next){
            ListNode *n1 = tmp->next;
            ListNode *n2 = n1->next;
            if (!n2) break;
            n1->next = n2->next;
            tmp->next = n2;
            n2->next = n1;
            tmp = n1;
        }
        return res.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
