/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Convert_Sorted_List_to_Binary_Search_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 17:14:44 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    TreeNode *build(ListNode *&head, int start, int end){
        if(start == end) return NULL;
        int mid = (start+end)/2;
        TreeNode *left = build(head, start, mid);
        int val = head->val;
        TreeNode *root = new TreeNode(val);
        head = head->next;
        TreeNode *right = build(head, mid+1, end);
        root->left = left;
        root->right = right;
        return root;
    }
    TreeNode *sortedListToBST(ListNode *head) {
        ListNode *tmp = head;
        int cnt = 0;
        while(tmp){
            tmp = tmp->next;
            cnt++;
        }
        return build(head, 0, cnt);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
