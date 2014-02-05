/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Recover_Binary_Search_Tree.cpp
* Purpose : Thread Binary Tree
* Creation Date : 18-01-2014
* Last Modified : Tue Feb  4 17:16:15 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(TreeNode *root, TreeNode *&first, TreeNode *&second, TreeNode *&prev){
        TreeNode *ptr = root;
        while(ptr){
            if(ptr->left){
                TreeNode *tmp = ptr->left;
                while(tmp->right && tmp->right != ptr)
                    tmp = tmp->right;
                if(!tmp->right){
                    tmp->right = ptr;
                    ptr = ptr->left;
                }
                else{
                    tmp->right = NULL;
                    if(prev && prev->val > ptr->val){
                        if(!first) first = prev;
                        second = ptr;
                    }
                    prev = ptr;
                    ptr=ptr->right;
                }
            }
            else{
                    if(prev && prev->val > ptr->val){
                        if(!first) first = prev;
                        second = ptr;
                    }
                    prev = ptr;
                    ptr=ptr->right;
            }
        }
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
