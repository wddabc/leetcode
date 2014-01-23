/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Copy_List_with_Random_Pointer.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 01:59:43 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    RandomListNode *copyRandomList(RandomListNode *head) {
        RandomListNode dummy(0), *ptr = &dummy, *ptr1 = head;
        unordered_map<RandomListNode*, RandomListNode*> mp;
        while(ptr1){
            ptr->next = new RandomListNode(ptr1->label);
            mp[ptr1] = ptr->next;
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
        ptr1 = head, ptr = dummy.next;
        while(ptr1){
            ptr->random = mp[ptr1->random];
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
