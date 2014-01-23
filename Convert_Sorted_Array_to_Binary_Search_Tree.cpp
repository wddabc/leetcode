/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Convert_Sorted_Array_to_Binary_Search_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 16:25:58 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    TreeNode *gen_tree(vector<int> &num, int start, int end){
        if(start == end) return NULL;
        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = gen_tree(num, start, mid);
        root->right = gen_tree(num, mid+1, end);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return gen_tree(num, 0, num.size());
    }
int main(int argc, const char* argv[])
{
	return 0;
}
