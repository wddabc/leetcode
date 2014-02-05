/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Reorder_List.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Feb  5 17:02:21 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
    void reorderList(ListNode *head) {
        if(!head) return;
        ListNode dummy(0), *ptr1 = head, *ptr2 = head;
        dummy.next = head;
        while(ptr1 && ptr2 && ptr2->next){// go to the middle of the list
            ptr2 = ptr2->next->next;
            if(!ptr2) break;
            ptr1 = ptr1->next;
        }
        ptr2 = ptr1->next;
        while(ptr2 && ptr2->next){ // inverse the second part
            ListNode *tmp = ptr2->next;
            ptr2->next = tmp->next;
            tmp->next = ptr1->next;
            ptr1->next = tmp;
        }
        ptr2 = head;
        while(ptr1&&ptr2&&ptr1->next){// insert the element in the second part
            ListNode *tmp = ptr1->next;
            ptr1->next = tmp->next;
            tmp->next = ptr2->next;
            ptr2->next = tmp;
            ptr2 = ptr2->next->next;
        }
    }
int main(int argc, const char* argv[])
{
	ListNode head(1);
	ListNode head(2);
	ListNode head(3);
	ListNode head(4);
	ListNode head(5);
	ListNode head(6);
	ListNode head(6);
	head.next = &a;
	reorderList(&head);
	return 0;
}
