/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Reverse_Linked_List_II.cpp
* Purpose :
* Creation Date : 17-01-2014
* Last Modified : Fri Jan 17 20:01:44 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode dummy(0), *begin = &dummy;
        begin->next = head;
        for(int i = 1; i < m; ++ i) 
            begin = begin->next;
        ListNode *end = begin->next;
        for(int i = m; i < n; ++i) {
            ListNode *tmp = end->next;
            end->next = tmp->next;
            tmp->next = begin->next;
            begin->next = tmp;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
