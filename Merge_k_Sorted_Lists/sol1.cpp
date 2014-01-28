/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Merge_k_Sorted_Lists.cpp
* Purpose : Using priority queue
* Creation Date : 04-01-2014
* Last Modified : Sun Jan 26 21:12:32 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <queue>
    struct comp{
        bool operator()(const pair<int, int> &p1, const pair<int, int> &p2){
            return p1.first > p2.first;
        }
    };
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        ListNode res(0), *tmp = &res;
        priority_queue<pair<int, int>, vector<pair<int, int> >, comp> my_queue;// each entry stores the value and the corresponding index of the list in lists
        for (int i = 0; i < lists.size(); ++ i){
            if (lists[i]){
                my_queue.push(make_pair(lists[i]->val, i)); // push the header of each list into the queue
                lists[i] = lists[i]->next;
            }
        }
        while(!my_queue.empty()){
             pair<int, int> p = my_queue.top();//O(1) to get the smallest element
             my_queue.pop();
             tmp->next = new ListNode(p.first);
             tmp = tmp->next;
             if(lists[p.second]){
                my_queue.push(make_pair(lists[p.second]->val, p.second)); //push a new value in the list just used into the queue
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
