/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Maximum_Path_Sum.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Tue Feb  4 23:59:28 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxPathSum(TreeNode *root, int &len){
        if(!root) {
            len = 0;
            return INT_MIN;
        }
        int left_path_sum = maxPathSum(root->left, len);// calc the max path sum of the left and get the length
        int left_len = len;
        int right_path_sum = maxPathSum(root->right, len); // calc the max path sum of the right and get the length
        int right_len = len;
        int res = max(left_path_sum, right_path_sum); // get the longer one from left and right
        int tmp = root->val; // tmp is a new path that across the root
        if(left_len > 0) tmp += left_len;
        if(right_len > 0) tmp += right_len;
        len = max(root->val, root->val+max(left_len, right_len));// the sum may be negative
        res = max(res, tmp); // compare the path across the root or not
        return res;
    }
    int maxPathSum(TreeNode *root) {
        int len;
        return maxPathSum(root, len);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
