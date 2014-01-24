/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Merge_Two_Sorted_Lists.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 19:01:12 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode dummy(0), *ptr = &dummy;
        while(l1 && l2){
            if(l1->val < l2-> val){
                ptr->next = l1;
                l1 = l1->next;
            }
            else{
                ptr->next = l2;
                l2 = l2->next;
            }
            ptr = ptr->next;
        }
        if(l1) ptr->next = l1;
        if(l2) ptr->next = l2;
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
