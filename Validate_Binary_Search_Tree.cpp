/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Validate_Binary_Search_Tree.cpp
* Purpose :
* Creation Date : 18-01-2014
* Last Modified : Sat Jan 18 18:36:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isValidBST(TreeNode *root, int &maxv, int &minv){
        if(!root) return true;
        int cur = root->val, tmp_min = root->val, tmp_max = root->val;
        if(root->left){
            if(!isValidBST(root->left, maxv, minv)) return false;
            if(maxv >= cur) return false;
            tmp_min = minv;
        }
        if(root->right){
            if(!isValidBST(root->right, maxv, minv)) return false;
            if(minv <= cur) return false;
            tmp_max = maxv;
        }
        minv = tmp_min;
        maxv = tmp_max;
        return true;
    }
    bool isValidBST(TreeNode *root) {
        int maxv = 0, minv = INT_MAX;
        return isValidBST(root, maxv, minv);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
