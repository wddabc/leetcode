/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Maximum_Depth_of_Binary_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 02:44:18 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxDepth(TreeNode *root) {
        if(!root) return 0;
        return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
