/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Inorder_Traversal.cpp
* Purpose :
* Creation Date : 17-01-2014
* Last Modified : Fri Jan 17 21:28:45 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode*> sta;
        sta.push(root);
        vector<int> res;
        if(!root) return res;
        while(sta.size()){
            TreeNode *tmp = sta.top();
            if(tmp->left){
                sta.push(tmp->left);
                tmp->left = NULL;
            }
            else{
                res.push_back(tmp->val);
                sta.pop();
                if(tmp->right)sta.push(tmp->right);
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
