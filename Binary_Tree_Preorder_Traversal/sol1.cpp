/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Preorder_Traversal.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 20:37:01 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> preorderTraversal(TreeNode *root) {
        TreeNode *ptr = root;
        vector<int> res;
        while(ptr){
           if(ptr->left){
               TreeNode *tmp = ptr->left;
               while(tmp->right && tmp->right!=ptr) 
                    tmp = tmp->right;
                if(!tmp->right){
                    res.push_back(ptr->val);
                    tmp->right = ptr;
                    ptr = ptr->left;
                }
                else{
                    tmp->right = NULL;
                    ptr = ptr->right;
                }
           }else{
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
