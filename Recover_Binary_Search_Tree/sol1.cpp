/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Recover_Binary_Search_Tree.cpp
* Purpose : Recursion version, not O(1) space
* Creation Date : 18-01-2014
* Last Modified : Tue Feb  4 17:06:12 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(TreeNode *root, TreeNode *&first, TreeNode *&second, TreeNode *&prev){
        if(!root) return;
        dfs(root->left, first, second, prev);
        if(prev && prev->val > root->val){
            if(!first) first = prev;
            second = root;
        }
        prev = root;
        dfs(root->right, first, second, prev);
    }
    void recoverTree(TreeNode *root) {
        if(!root) return;
        TreeNode *first = NULL, *second = NULL, *prev = NULL;
        dfs(root, first, second, prev);
        if(first&&second){
            int tmp = first->val;
            first->val = second->val;
            second->val = tmp;
        }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
