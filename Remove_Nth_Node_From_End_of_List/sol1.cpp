/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Remove_Nth_Node_From_End_of_List.cpp
* Purpose : Two pointers. Refined code
* Creation Date : 03-01-2014
* Last Modified : Sun Jan 26 20:37:16 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
        ptr1->next = head;
        while(n > 0){
            ptr1 = ptr1->next;
            n--;
        }
        while(ptr1->next){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2->next = ptr2->next->next;
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
