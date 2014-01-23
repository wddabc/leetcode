/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Unique_Binary_Search_Trees_II.cpp
* Purpose :
* Creation Date : 18-01-2014
* Last Modified : Sat Jan 18 14:30:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<TreeNode *> search(int start, int end){
        if(start > end) {
            vector<TreeNode *> tmp;
            tmp.push_back(NULL);
            return tmp;
        }
        vector<TreeNode *> res;
        for(int i = start; i <= end; ++ i){
            vector<TreeNode *> left_res = search(start, i-1);
            vector<TreeNode *> right_res = search(i+1, end);
            for(int l = 0; l < left_res.size(); ++ l)
                for(int r = 0; r < right_res.size(); ++ r){
                    TreeNode *root = new TreeNode(i);
                    root->left = left_res[l];
                    root->right = right_res[r];
                    res.push_back(root);
                }
        }
        return res;
    }
    vector<TreeNode *> generateTrees(int n) {
        vector<TreeNode*> res = search(1,n);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
