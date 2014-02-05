/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : Threaded binary tree 
* Creation Date : 04-02-2014
* Last Modified : Tue Feb  4 15:41:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> inorderTraversal(TreeNode *root) {
        TreeNode *ptr = root;
        vector<int> res;
        while(ptr){
            if(ptr->left){
                TreeNode *ptrl = ptr->left;
                while(ptrl->right && ptrl->right != ptr)
                    ptrl = ptrl->right;
                if(!ptrl->right){
                    ptrl->right = ptr;
                    ptr = ptr->left;
                } else {
                    ptrl->right = NULL;
                    res.push_back(ptr->val);
                    ptr = ptr->right;
                }
            } else {
                res.push_back(ptr->val);
                ptr = ptr->right;
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
