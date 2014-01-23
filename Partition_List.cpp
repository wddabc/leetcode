/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Partition_List.cpp
* Purpose :
* Creation Date : 15-01-2014
* Last Modified : Thu Jan 16 07:16:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
    ListNode *partition(ListNode *head, int x) {
        ListNode dummy(0), dummy1(0), *ptr = &dummy, *ptr1 = &dummy1;
        dummy.next = head;
        while(ptr->next){
            if(ptr->next->val < x){
                ListNode *tmp = ptr->next;
                ptr->next = tmp->next;
                ptr1->next = tmp;
                ptr1 = ptr1->next;
            }
            else
                ptr = ptr->next;
        }
        ptr1->next = dummy.next;
        return dummy1.next;
    }
int main(int argc, const char* argv[])
{
	ListNode test(1);
	cout << partition(&test, 2)->val << endl;
	return 0;
}
