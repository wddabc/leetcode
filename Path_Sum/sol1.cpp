/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Path_Sum.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 17:44:35 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool hasPathSum(TreeNode *root, int sum) {
        if(!root) return false;
        if(sum == root->val&&!root->left&&!root->right) return true;
        if(root->left&&hasPathSum(root->left, sum-root->val)) return true;
        if(root->right&&hasPathSum(root->right,sum-root->val)) return true;
        return false;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
