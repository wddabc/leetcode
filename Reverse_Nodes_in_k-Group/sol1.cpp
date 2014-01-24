/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Reverse_Nodes_in_k-Group.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 17:47:32 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode res(0), *tmp = &res;
        res.next = head;
        bool flag = true;
        while(tmp->next){
            ListNode *s = tmp->next, *e = s;
            for(int i = 0; i < k - 1; ++ i){
                e = e->next;
                if (!e) {flag = false; break;}
            }
            if(flag){
                ListNode *c = s->next, *l = s, *last = e->next;
                while(c != last){
                    l->next = c->next;
                    c->next = tmp->next;
                    tmp->next = c;
                    c = l->next;
                }
                tmp = l;
            }else break;
        }
        return res.next;
    }
int main(int argc, const char* argv[])
{
	ListNode n(1);
	n.next = new ListNode(2);
	reverseKGroup(&n, 2);
	return 0;
}
