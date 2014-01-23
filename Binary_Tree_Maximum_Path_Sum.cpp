/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Maximum_Path_Sum.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 01:58:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxPathSum(TreeNode *root, int &len){
        if(!root) {
            len = 0;
            return INT_MIN;
        }
        int left_path_sum = maxPathSum(root->left, len);
        int left_len = len;
        int right_path_sum = maxPathSum(root->right, len);
        int right_len = len;
        int res = max(left_path_sum, right_path_sum);
        int tmp = root->val;
        if(left_len > 0) tmp += left_len;
        if(right_len > 0) tmp += right_len;
        len = max(root->val, root->val+max(left_len, right_len));
        res = max(res, tmp);
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
