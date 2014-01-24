/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Recover_Binary_Search_Tree.cpp
* Purpose :
* Creation Date : 18-01-2014
* Last Modified : Sat Jan 18 20:01:34 2014
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
    void search(TreeNode *root, TreeNode *&first, TreeNode *&second, TreeNode *&prev){
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
