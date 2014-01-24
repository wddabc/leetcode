/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Insertion_Sort_List.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 23:46:50 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *insertionSortList(ListNode *head) {
        ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
        dummy.next = head;
        while(ptr1->next){
            ptr2 = &dummy;
            while(ptr2 != ptr1 && ptr2->next && ptr2->next->val < ptr1->next->val) ptr2 = ptr2->next;
            if(ptr2 != ptr1){
                ListNode *tmp = ptr1->next;
                ptr1->next = tmp->next;
                tmp->next = ptr2->next;
                ptr2->next = tmp;
                continue;
            }
            ptr1 = ptr1->next;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
