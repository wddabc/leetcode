/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : In-list solution
* Creation Date : 02-02-2014
* Last Modified : Sun Feb  2 23:05:05 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *partition(ListNode *head, int x) {
        ListNode dummy(0), *ptr = &dummy, *ptr1 = &dummy;
        ptr->next = head;
        while(ptr1->next){
            if(ptr1->next->val < x){
                ListNode *tmp = ptr1->next;
                ptr1->next = tmp->next;
                tmp->next = ptr->next;
                ptr->next = tmp;
                ptr = ptr->next;
                if(ptr1->next == tmp)
                    ptr1 = ptr;
            }else
                ptr1 = ptr1->next;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
