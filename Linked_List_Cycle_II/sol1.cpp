/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Linked_List_Cycle_II.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 15:27:56 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *detectCycle(ListNode *head) {
        ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
        ptr1->next = head;
        int len = -1;
        while(1){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(!ptr2) return NULL;
            ptr2 = ptr2->next;
            if(!ptr2) return NULL;
            if(ptr1 == ptr2){
                if(len == -1) len = 0;
                else break;
            }
            if(len >= 0) len++;
        }
        ptr1 = &dummy, ptr2 = ptr1;
        for(int i = 0; i < len; ++ i)
            ptr1 = ptr1->next;
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
