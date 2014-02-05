/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose :
* Creation Date : 05-02-2014
* Last Modified : Wed Feb  5 16:54:43 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *detectCycle(ListNode *head) {
        ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
        dummy.next = head;
        bool circle = false;
        while(ptr1 && ptr2&& ptr2->next){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next->next;
            if(ptr1 == ptr2){
                circle = true;
                break;
            }
        }
        if(!circle) return NULL;
        ptr2 = &dummy;
        while(ptr1 != ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
