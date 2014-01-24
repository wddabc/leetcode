/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Rotate_List.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 17:31:47 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *rotateRight(ListNode *head, int k) {
        ListNode dummy(0);
        if(!head) return head;
        dummy.next = head;
        ListNode *ptr = &dummy;
        int len = 0;
        while(ptr->next) ptr = ptr->next;
        ptr->next = head;
        ListNode *ptr1 = ptr;
        while(k-- > 0) ptr = ptr->next;
        while(ptr->next != head){
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
        dummy.next = ptr1->next;
        ptr1->next = NULL;
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
