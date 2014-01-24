/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Remove_Duplicates_from_Sorted_List_II.cpp
* Purpose :
* Creation Date : 14-01-2014
* Last Modified : Tue Jan 14 13:10:41 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *deleteDuplicates(ListNode *head) {
        if(!head)return NULL;
        ListNode dummy(0), *ptr = &dummy;
        ptr->next = head;
        while(ptr->next && ptr->next->next){
            if(ptr->next->val == ptr->next->next->val){
                int val = ptr->next->val;
                while(ptr->next && val == ptr->next->val)
                    ptr->next = ptr->next->next;
            }
            else ptr = ptr->next;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
