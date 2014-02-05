/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Linked_List_Cycle_II.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Feb  5 16:41:33 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *detectCycle(ListNode *head) {
        ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
        ptr1->next = head;
        int len = -1; // the length of the circle
        while(1){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(!ptr2) return NULL;
            ptr2 = ptr2->next;
            if(!ptr2) return NULL;
            if(ptr1 == ptr2){
                if(len == -1) len = 0; // first meet, start count
                else break;
            }
            if(len >= 0) len++;
        }
        ptr1 = &dummy, ptr2 = ptr1;
        for(int i = 0; i < len; ++ i) // ptr1 moves len ahead
            ptr1 = ptr1->next;
        while(ptr1 != ptr2){//the meet point is the res
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
