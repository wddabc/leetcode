/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Merge_k_Sorted_Lists.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 14:39:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <queue>
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	 };
    struct comp{
        bool operator()(const pair<int, int> &p1, const pair<int, int> &p2){
            return p1.first > p2.first;
        }
    };
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        ListNode res(0), *tmp = &res;
        priority_queue<pair<int, int>, vector<pair<int, int> >, comp> my_queue;
        for (int i = 0; i < lists.size(); ++ i){
            if (lists[i]){
                my_queue.push(make_pair(lists[i]->val, i));
                lists[i] = lists[i]->next;
            }
        }
        while(!my_queue.empty()){
             pair<int, int> p = my_queue.top();
             my_queue.pop();
             tmp->next = new ListNode(p.first);
			 cout << p.first << endl;
             tmp = tmp->next;
             if(lists[p.second]){
                my_queue.push(make_pair(lists[p.second]->val, p.second));
                lists[p.second] = lists[p.second]->next;
             }
        }
        return res.next;
    }
int main(int argc, const char* argv[])
{
	ListNode list1(1);
	ListNode list2(0);
	vector<ListNode *> a;
	a.push_back(&list1);
	a.push_back(&list2);
	mergeKLists(a);
	return 0;
}
