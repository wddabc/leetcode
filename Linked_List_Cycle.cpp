/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Linked_List_Cycle.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 15:05:00 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool hasCycle(ListNode *head) {
        ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
        ptr1->next = head;
        while(ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(!ptr2) return false;
            ptr2 = ptr2->next;
            if(ptr1 == ptr2)return true;
        }
        return false;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
