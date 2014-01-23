/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sort_List.cpp
* Purpose :
* Creation Date : 23-01-2014
* Last Modified : Thu Jan 23 02:56:57 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
	void merge(ListNode *start, ListNode *end, ListNode *&s, ListNode *&e){
        if(!end) return; 
        ListNode *ptr1 = start, *ptr2 = end;
        while(ptr1->next != end){
            ptr1 = ptr1->next;
            if(ptr2->next)
                ptr2 = ptr2->next;
        }
        ptr1->next = NULL;
        ListNode *next_node = ptr2->next;
        ptr2->next = NULL;
        ListNode dummy(0), *ptr = &dummy;
        while(start&&end){
            if(start->val < end->val) {
                ptr->next = start;
                start = start->next;
            }
            else {
                ptr->next = end;
                end = end->next;
            }
            ptr = ptr->next;
        }
        if(!start) ptr->next = end;
        if(!end) ptr->next = start;
        ptr = &dummy;
        while(ptr->next) ptr = ptr->next;
        ptr->next = next_node;
		s = dummy.next;
		e = ptr;
    }
    ListNode *sortList(ListNode *head) {
        ListNode dummy(0), *ptr = &dummy;
        ptr->next = head;
        int len = 0;
        while(ptr->next){
            len ++;
            ptr = ptr->next;
        }
        int step = 1;
        ListNode *start = &dummy, *end = start;
        while(step <= len){
            for(int i = 0; i < step && end->next; ++ i)
                end = end->next;
			merge(start->next, end->next, start->next, end);
            start = end;
            if(!end->next){
                start = &dummy, end = start;
                step *= 2;
            }
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	ListNode head(3), next(4), n1(1);
	head.next = &next;
	head.next->next = &n1;
	sortList(&head);
	return 0;
}
