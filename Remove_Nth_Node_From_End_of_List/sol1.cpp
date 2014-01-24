/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Remove_Nth_Node_From_End_of_List.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Fri Jan  3 23:42:31 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *tmp = head;
        while(n>0){
            tmp = tmp->next;
            n--;
        }
        if(tmp == NULL){
            head = head->next;
            return head;
        }
        ListNode *new_tmp = head;
        while(tmp->next != NULL){
            new_tmp = new_tmp->next;
            tmp = tmp->next;
        }
        new_tmp->next = new_tmp->next->next;
        return head;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
