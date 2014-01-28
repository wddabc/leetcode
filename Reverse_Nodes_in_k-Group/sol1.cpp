/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Reverse_Nodes_in_k-Group.cpp
* Purpose : Code refined
* Creation Date : 04-01-2014
* Last Modified : Mon Jan 27 02:21:54 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode dummy(0), *start = &dummy, *end;
        start->next = head;
        while(start->next){
            end = start;
            for(int i = 0; i < k; ++ i){
                if(!end->next) return dummy.next;
                end = end->next;
            }
            ListNode *tmp = start->next, *last = end->next;//*last need to be recorded as *end changes
            while(tmp->next != last){
                ListNode *tmp1 = tmp->next;
                tmp->next = tmp1->next;
                tmp1->next = start->next;
                start->next = tmp1;
            }
            start = tmp;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	ListNode n(1);
	n.next = new ListNode(2);
	reverseKGroup(&n, 2);
	return 0;
}
